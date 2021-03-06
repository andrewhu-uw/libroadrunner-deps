/**
 * @file:   Domain.h
 * @brief:  Implementation of the Domain class
 * @author: SBMLTeam
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML.  Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2013-2016 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *     3. University of Heidelberg, Heidelberg, Germany
 *
 * Copyright (C) 2009-2013 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *
 * Copyright (C) 2006-2008 by the California Institute of Technology,
 *     Pasadena, CA, USA 
 *
 * Copyright (C) 2002-2005 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. Japan Science and Technology Agency, Japan
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.  A copy of the license agreement is provided
 * in the file named "LICENSE.txt" included with this software distribution
 * and also available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 */


#ifndef Domain_H__
#define Domain_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/spatial/common/spatialfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/SBase.h>
#include <sbml/ListOf.h>
#include <sbml/packages/spatial/extension/SpatialExtension.h>

#include <sbml/packages/spatial/sbml/InteriorPoint.h>

LIBSBML_CPP_NAMESPACE_BEGIN



class LIBSBML_EXTERN Domain : public SBase
{

protected:

////  std::string   mId;
  std::string   mDomainType;
  ListOfInteriorPoints   mInteriorPoints;


public:

  /**
   * Creates a new Domain with the given level, version, and package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this Domain
   *
   * @param version an unsigned int, the SBML Version to assign to this Domain
   *
   * @param pkgVersion an unsigned int, the SBML Spatial Version to assign to this Domain
   */
  Domain(unsigned int level      = SpatialExtension::getDefaultLevel(),
         unsigned int version    = SpatialExtension::getDefaultVersion(),
         unsigned int pkgVersion = SpatialExtension::getDefaultPackageVersion());


  /**
   * Creates a new Domain with the given SpatialPkgNamespaces object.
   *
   * @param spatialns the SpatialPkgNamespaces object
   */
  Domain(SpatialPkgNamespaces* spatialns);


   /**
   * Copy constructor for Domain.
   *
   * @param orig; the Domain instance to copy.
   */
  Domain(const Domain& orig);


   /**
   * Assignment operator for Domain.
   *
   * @param rhs; the object whose values are used as the basis
   * of the assignment
   */
  Domain& operator=(const Domain& rhs);


   /**
   * Creates and returns a deep copy of this Domain object.
   *
   * @return a (deep) copy of this Domain object.
   */
  virtual Domain* clone () const;


   /**
   * Destructor for Domain.
   */
  virtual ~Domain();


   /**
   * Returns the value of the "id" attribute of this Domain.
   *
   * @return the value of the "id" attribute of this Domain as a string.
   */
  virtual const std::string& getId() const;


  /**
   * Returns the value of the "domainType" attribute of this Domain.
   *
   * @return the value of the "domainType" attribute of this Domain as a string.
   */
  virtual const std::string& getDomainType() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * Domain's "id" attribute has been set.
   *
   * @return @c true if this Domain's "id" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetId() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * Domain's "domainType" attribute has been set.
   *
   * @return @c true if this Domain's "domainType" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetDomainType() const;


  /**
   * Sets the value of the "id" attribute of this Domain.
   *
   * @param id; const std::string& value of the "id" attribute to be set
   *
   * @return integer value indicating success/failure of the
   * function.  @if clike The value is drawn from the
   * enumeration #OperationReturnValues_t. @endif The possible values
   * returned by this function are:
   * @li LIBSBML_OPERATION_SUCCESS
   * @li LIBSBML_INVALID_ATTRIBUTE_VALUE
   */
  virtual int setId(const std::string& id);


  /**
   * Sets the value of the "domainType" attribute of this Domain.
   *
   * @param domainType; const std::string& value of the "domainType" attribute to be set
   *
   * @return integer value indicating success/failure of the
   * function.  @if clike The value is drawn from the
   * enumeration #OperationReturnValues_t. @endif The possible values
   * returned by this function are:
   * @li LIBSBML_OPERATION_SUCCESS
   * @li LIBSBML_INVALID_ATTRIBUTE_VALUE
   */
  virtual int setDomainType(const std::string& domainType);


  /**
   * Unsets the value of the "id" attribute of this Domain.
   *
   * @return integer value indicating success/failure of the
   * function.  @if clike The value is drawn from the
   * enumeration #OperationReturnValues_t. @endif The possible values
   * returned by this function are:
   * @li LIBSBML_OPERATION_SUCCESS
   * @li LIBSBML_OPERATION_FAILED
   */
  virtual int unsetId();


  /**
   * Unsets the value of the "domainType" attribute of this Domain.
   *
   * @return integer value indicating success/failure of the
   * function.  @if clike The value is drawn from the
   * enumeration #OperationReturnValues_t. @endif The possible values
   * returned by this function are:
   * @li LIBSBML_OPERATION_SUCCESS
   * @li LIBSBML_OPERATION_FAILED
   */
  virtual int unsetDomainType();


  /**
   * Returns the  "ListOfInteriorPoints" in this Domain object.
   *
   * @return the "ListOfInteriorPoints" attribute of this Domain.
   */
  const ListOfInteriorPoints* getListOfInteriorPoints() const;


  /**
   * Returns the  "ListOfInteriorPoints" in this Domain object.
   *
   * @return the "ListOfInteriorPoints" attribute of this Domain.
   */
  ListOfInteriorPoints* getListOfInteriorPoints();


  /**
   * Get a InteriorPoint from the ListOfInteriorPoints.
   *
   * @param n the index number of the InteriorPoint to get.
   *
   * @return the nth InteriorPoint in the ListOfInteriorPoints within this Domain.
   *
   * @see getNumInteriorPoints()
   */
	InteriorPoint* getInteriorPoint(unsigned int n);


  /**
   * Get a InteriorPoint from the ListOfInteriorPoints.
   *
   * @param n the index number of the InteriorPoint to get.
   *
   * @return the nth InteriorPoint in the ListOfInteriorPoints within this Domain.
   *
   * @see getNumInteriorPoints()
   */
	const InteriorPoint* getInteriorPoint(unsigned int n) const;


  /**
   * Get a InteriorPoint from the ListOfInteriorPoints
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the InteriorPoint to get.
   *
   * @return the InteriorPoint in the ListOfInteriorPoints
   * with the given id or NULL if no such
   * InteriorPoint exists.
   *
   * @see getInteriorPoint(unsigned int n)
   *
   * @see getNumInteriorPoints()
   */
	InteriorPoint* getInteriorPoint(const std::string& sid);


  /**
   * Get a InteriorPoint from the ListOfInteriorPoints
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the InteriorPoint to get.
   *
   * @return the InteriorPoint in the ListOfInteriorPoints
   * with the given id or NULL if no such
   * InteriorPoint exists.
   *
   * @see getInteriorPoint(unsigned int n)
   *
   * @see getNumInteriorPoints()
   */
	const InteriorPoint* getInteriorPoint(const std::string& sid) const;


  /**
   * Adds a copy the given "InteriorPoint" to this Domain.
   *
   * @param ip; the InteriorPoint object to add
   *
   * @return integer value indicating success/failure of the
   * function.  @if clike The value is drawn from the
   * enumeration #OperationReturnValues_t. @endif The possible values
   * returned by this function are:
   * @li LIBSBML_OPERATION_SUCCESS
   * @li LIBSBML_INVALID_ATTRIBUTE_VALUE
   */
  int addInteriorPoint(const InteriorPoint* ip);


  /**
   * Get the number of InteriorPoint objects in this Domain.
   *
   * @return the number of InteriorPoint objects in this Domain
   */
  unsigned int getNumInteriorPoints() const;


  /**
   * Creates a new InteriorPoint object, adds it to this Domains
   * ListOfInteriorPoints and returns the InteriorPoint object created. 
   *
   * @return a new InteriorPoint object instance
   *
   * @see addInteriorPoint(const InteriorPoint* ip)
   */
  InteriorPoint* createInteriorPoint();


  /**
   * Removes the nth InteriorPoint from the ListOfInteriorPoints within this Domain.
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   *
   * @param n the index of the InteriorPoint to remove.
   *
   * @see getNumInteriorPoints()
   */
	InteriorPoint* removeInteriorPoint(unsigned int n);


  /**
   * Removes the InteriorPoint with the given identifier from the ListOfInteriorPoints within this Domain
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   * If none of the items in this list have the identifier @p sid, then
   * @c NULL is returned.
   *
   * @param sid the identifier of the InteriorPoint to remove.
   *
   * @return the InteriorPoint removed. As mentioned above, the caller owns the
   * returned item.
   */
	InteriorPoint* removeInteriorPoint(const std::string& sid);


  /**
   * Renames all the @c SIdRef attributes on this element, including any
   * found in MathML content (if such exists).
   *
   * This method works by looking at all attributes and (if appropriate)
   * mathematical formulas, comparing the identifiers to the value of @p
   * oldid.  If any matches are found, the matching identifiers are replaced
   * with @p newid.  The method does @em not descend into child elements.
   *
   * @param oldid the old identifier
   * @param newid the new identifier
   */
   virtual void renameSIdRefs(const std::string& oldid, const std::string& newid);


  /**
   * Returns a List of all child SBase objects, including those nested to an
   * arbitrary depth.
   *
   * @return a List* of pointers to all child objects.
   */
   virtual List* getAllElements(ElementFilter * filter = NULL);


  /**
   * Returns the XML element name of this object, which for Domain, is
   * always @c "domain".
   *
   * @return the name of this element, i.e. @c "domain".
   */
  virtual const std::string& getElementName () const;


  /**
   * Returns the libSBML type code for this SBML object.
   * 
   * @if clike LibSBML attaches an identifying code to every kind of SBML
   * object.  These are known as <em>SBML type codes</em>.  The set of
   * possible type codes is defined in the enumeration #SBMLTypeCode_t.
   * The names of the type codes all begin with the characters @c
   * SBML_. @endif@if java LibSBML attaches an identifying code to every
   * kind of SBML object.  These are known as <em>SBML type codes</em>.  In
   * other languages, the set of type codes is stored in an enumeration; in
   * the Java language interface for libSBML, the type codes are defined as
   * static integer constants in the interface class {@link
   * libsbmlConstants}.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if python LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the Python language interface for libSBML, the type
   * codes are defined as static integer constants in the interface class
   * @link libsbml@endlink.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if csharp LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the C# language interface for libSBML, the type codes
   * are defined as static integer constants in the interface class @link
   * libsbmlcs.libsbml@endlink.  The names of the type codes all begin with
   * the characters @c SBML_. @endif
   *
   * @return the SBML type code for this object, or
   * @link SBMLTypeCode_t#SBML_UNKNOWN SBML_UNKNOWN@endlink (default).
   *
   * @see getElementName()
   */
  virtual int getTypeCode () const;


  /**
   * Predicate returning @c true if all the required attributes
   * for this Domain object have been set.
   *
   * @note The required attributes for a Domain object are:
   * @li "id"
   * @li "domainType"
   *
   * @return a boolean value indicating whether all the required
   * attributes for this object have been defined.
   */
  virtual bool hasRequiredAttributes() const;


  /**
   * Predicate returning @c true if all the required elements
   * for this Domain object have been set.
   *
   * @note The required elements for a Domain object are:
   *
   * @return a boolean value indicating whether all the required
   * elements for this object have been defined.
   */
  virtual bool hasRequiredElements() const;


  /** @cond doxygenLibsbmlInternal */

  /**
   * Subclasses should override this method to write out their contained
   * SBML objects as XML elements.  Be sure to call your parents
   * implementation of this method as well.
   */
  virtual void writeElements (XMLOutputStream& stream) const;


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Accepts the given SBMLVisitor.
   */
  virtual bool accept (SBMLVisitor& v) const;


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the parent SBMLDocument.
   */
  virtual void setSBMLDocument (SBMLDocument* d);


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Connects to child elements.
   */
  virtual void connectToChild ();


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Enables/Disables the given package with this element.
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
               const std::string& pkgPrefix, bool flag);


  /** @endcond doxygenLibsbmlInternal */


protected:

  /** @cond doxygenLibsbmlInternal */

  /**
   * return the SBML object corresponding to next XMLToken.
   */
  virtual SBase* createObject(XMLInputStream& stream);


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Get the list of expected attributes for this element.
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Read values from the given XMLAttributes set into their specific fields.
   */
  virtual void readAttributes (const XMLAttributes& attributes,
                               const ExpectedAttributes& expectedAttributes);


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Write values of XMLAttributes to the output stream.
   */
  virtual void writeAttributes (XMLOutputStream& stream) const;


  /** @endcond doxygenLibsbmlInternal */



};

class LIBSBML_EXTERN ListOfDomains : public ListOf
{

public:

  /**
   * Creates a new ListOfDomains with the given level, version, and package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this ListOfDomains
   *
   * @param version an unsigned int, the SBML Version to assign to this ListOfDomains
   *
   * @param pkgVersion an unsigned int, the SBML Spatial Version to assign to this ListOfDomains
   */
  ListOfDomains(unsigned int level      = SpatialExtension::getDefaultLevel(),
                unsigned int version    = SpatialExtension::getDefaultVersion(),
                unsigned int pkgVersion = SpatialExtension::getDefaultPackageVersion());


  /**
   * Creates a new ListOfDomains with the given SpatialPkgNamespaces object.
   *
   * @param spatialns the SpatialPkgNamespaces object
   */
  ListOfDomains(SpatialPkgNamespaces* spatialns);


   /**
   * Creates and returns a deep copy of this ListOfDomains object.
   *
   * @return a (deep) copy of this ListOfDomains object.
   */
  virtual ListOfDomains* clone () const;


   /**
   * Get a Domain from the ListOfDomains.
   *
   * @param n the index number of the Domain to get.
   *
   * @return the nth Domain in this ListOfDomains.
   *
   * @see size()
   */
	virtual Domain* get(unsigned int n);


  /**
   * Get a Domain from the ListOfDomains.
   *
   * @param n the index number of the Domain to get.
   *
   * @return the nth Domain in this ListOfDomains.
   *
   * @see size()
   */
	virtual const Domain* get(unsigned int n) const;


  /**
   * Get a Domain from the ListOfDomains
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the Domain to get.
   *
   * @return Domain in this ListOfDomains
   * with the given id or NULL if no such
   * Domain exists.
   *
   * @see get(unsigned int n)   *
   * @see size()
   */
	virtual Domain* get(const std::string& sid);


  /**
   * Get a Domain from the ListOfDomains
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the Domain to get.
   *
   * @return Domain in this ListOfDomains
   * with the given id or NULL if no such
   * Domain exists.
   *
   * @see get(unsigned int n)   *
   * @see size()
   */
  virtual const Domain* get(const std::string& sid) const;


	/**
	 * Adds a copy the given "Domain" to this ListOfDomains.
	 *
	 * @param d; the Domain object to add
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	int addDomain(const Domain* d);


	/**
	 * Get the number of Domain objects in this ListOfDomains.
	 *
	 * @return the number of Domain objects in this ListOfDomains
	 */
	unsigned int getNumDomains() const;


	/**
	 * Creates a new Domain object, adds it to the
	 * ListOfDomains and returns the Domain object created. 
	 *
	 * @return a new Domain object instance
	 *
	 * @see addDomain(const Domain* d)
	 */
	Domain* createDomain();


  /**
   * Removes the nth Domain from this ListOfDomains
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   *
   * @param n the index of the Domain to remove.
   *
   * @see size()
   */
	virtual Domain* remove(unsigned int n);


  /**
   * Removes the Domain from this ListOfDomains with the given identifier
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   * If none of the items in this list have the identifier @p sid, then
   * @c NULL is returned.
   *
   * @param sid the identifier of the Domain to remove.
   *
   * @return the Domain removed. As mentioned above, the caller owns the
   * returned item.
   */
	virtual Domain* remove(const std::string& sid);


  /**
   * Returns the XML element name of this object, which for ListOfDomains, is
   * always @c "listOfDomains".
   *
   * @return the name of this element, i.e. @c "listOfDomains".
   */
  virtual const std::string& getElementName () const;


  /**
   * Returns the libSBML type code for this SBML object.
   * 
   * @if clike LibSBML attaches an identifying code to every kind of SBML
   * object.  These are known as <em>SBML type codes</em>.  The set of
   * possible type codes is defined in the enumeration #SBMLTypeCode_t.
   * The names of the type codes all begin with the characters @c
   * SBML_. @endif@if java LibSBML attaches an identifying code to every
   * kind of SBML object.  These are known as <em>SBML type codes</em>.  In
   * other languages, the set of type codes is stored in an enumeration; in
   * the Java language interface for libSBML, the type codes are defined as
   * static integer constants in the interface class {@link
   * libsbmlConstants}.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if python LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the Python language interface for libSBML, the type
   * codes are defined as static integer constants in the interface class
   * @link libsbml@endlink.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if csharp LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the C# language interface for libSBML, the type codes
   * are defined as static integer constants in the interface class @link
   * libsbmlcs.libsbml@endlink.  The names of the type codes all begin with
   * the characters @c SBML_. @endif
   *
   * @return the SBML type code for this object, or
   * @link SBMLTypeCode_t#SBML_UNKNOWN SBML_UNKNOWN@endlink (default).
   *
   * @see getElementName()
   */
  virtual int getTypeCode () const;


  /**
   * Returns the libSBML type code for the SBML objects
   * contained in this ListOf object
   * 
   * @if clike LibSBML attaches an identifying code to every kind of SBML
   * object.  These are known as <em>SBML type codes</em>.  The set of
   * possible type codes is defined in the enumeration #SBMLTypeCode_t.
   * The names of the type codes all begin with the characters @c
   * SBML_. @endif@if java LibSBML attaches an identifying code to every
   * kind of SBML object.  These are known as <em>SBML type codes</em>.  In
   * other languages, the set of type codes is stored in an enumeration; in
   * the Java language interface for libSBML, the type codes are defined as
   * static integer constants in the interface class {@link
   * libsbmlConstants}.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if python LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the Python language interface for libSBML, the type
   * codes are defined as static integer constants in the interface class
   * @link libsbml@endlink.  The names of the type codes all begin with the
   * characters @c SBML_. @endif@if csharp LibSBML attaches an identifying
   * code to every kind of SBML object.  These are known as <em>SBML type
   * codes</em>.  In the C# language interface for libSBML, the type codes
   * are defined as static integer constants in the interface class @link
   * libsbmlcs.libsbml@endlink.  The names of the type codes all begin with
   * the characters @c SBML_. @endif
   *
   * @return the SBML type code for the objects in this ListOf instance, or
   * @link SBMLTypeCode_t#SBML_UNKNOWN SBML_UNKNOWN@endlink (default).
   *
   * @see getElementName()
   */
  virtual int getItemTypeCode () const;


protected:

  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates a new Domain in this ListOfDomains
   */
  virtual SBase* createObject(XMLInputStream& stream);


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

  /**
   * Write the namespace for the Spatial package.
   */
  virtual void writeXMLNS(XMLOutputStream& stream) const;


  /** @endcond doxygenLibsbmlInternal */



};



LIBSBML_CPP_NAMESPACE_END

#endif  /*  __cplusplus  */

#ifndef SWIG

LIBSBML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

/**
 * Creates a new Domain_t structure using the given SBML @p level and
 * @p version values.
 *
 * @param level an unsigned int, the SBML level to assign to this
 * Domain_t structure.
 *
 * @param version an unsigned int, the SBML version to assign to this
 * Domain_t structure.
 *
 * @returns the newly-created Domain_t structure, or a null pointer if
 * an error occurred during construction.
 *
 * @copydetails doc_note_setting_lv
 *
 * @memberof Domain_t
 */
LIBSBML_EXTERN
Domain_t *
Domain_create(unsigned int level, unsigned int version,
              unsigned int pkgVersion);


/**
 * Frees the given Domain_t structure.
 * 
 * @param d the Domain_t structure to be freed.
 *
 * @memberof Domain_t
 */
LIBSBML_EXTERN
void
Domain_free(Domain_t * d);


/**
 * Creates a deep copy of the given Domain_t structure.
 * 
 * @param d the Domain_t structure to be copied.
 *
 * @returns a (deep) copy of the given Domain_t structure, or a null
 * pointer if a failure occurred.
 *
 * @memberof Domain_t
 */
LIBSBML_EXTERN
Domain_t *
Domain_clone(Domain_t * d);


/**
 * Returns the value of the "id" attribute of the given Domain_t
 * structure.
 *
 * @param d the Domain_t structure.
 *
 * @return the id of this structure.
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
const char *
Domain_getId(const Domain_t * d);


/**
 * Returns the value of the "domainType" attribute of the given Domain_t
 * structure.
 *
 * @param d the Domain_t structure.
 *
 * @return the domainType of this structure.
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
const char *
Domain_getDomainType(const Domain_t * d);


/**
 * Predicate returning @c 1 if the given Domain_t structure's "id"
 * is set.
 *
 * @param d the Domain_t structure.
 *
 * @return @c 1 if the "id" of this Domain_t structure is
 * set, @c 0 otherwise.
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_isSetId(const Domain_t * d);


/**
 * Predicate returning @c 1 if the given Domain_t structure's "domainType"
 * is set.
 *
 * @param d the Domain_t structure.
 *
 * @return @c 1 if the "domainType" of this Domain_t structure is
 * set, @c 0 otherwise.
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_isSetDomainType(const Domain_t * d);


/**
 * Sets the "id" attribute of the given Domain_t structure.
 *
 * This function copies the string given in @p string.  If the string is
 * a null pointer, this function performs Domain_unsetId() instead.
 *
 * @param d the Domain_t structure.
 *
 * @param id the string to which the structures "id" attribute should be
 * set.
 *
 * @return integer value indicating success/failure of the
 * function.  @if clike The value is drawn from the
 * enumeration #OperationReturnValues_t. @endif@~ The possible values
 * returned by this function are:
 * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS@endlink
 * @li @link OperationReturnValues_t#LIBSBML_INVALID_ATTRIBUTE_VALUE LIBSBML_INVALID_ATTRIBUTE_VALUE@endlink
 * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT@endlink
 *
 * @note Using this function with a null pointer for @p name is equivalent to
 * unsetting the value of the "name" attribute.
 * 
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_setId(Domain_t * d, const char * id);


/**
 * Sets the "domainType" attribute of the given Domain_t structure.
 *
 * This function copies the string given in @p string.  If the string is
 * a null pointer, this function performs Domain_unsetDomainType() instead.
 *
 * @param d the Domain_t structure.
 *
 * @param domainType the string to which the structures "domainType" attribute should be
 * set.
 *
 * @return integer value indicating success/failure of the
 * function.  @if clike The value is drawn from the
 * enumeration #OperationReturnValues_t. @endif@~ The possible values
 * returned by this function are:
 * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS@endlink
 * @li @link OperationReturnValues_t#LIBSBML_INVALID_ATTRIBUTE_VALUE LIBSBML_INVALID_ATTRIBUTE_VALUE@endlink
 * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT@endlink
 *
 * @note Using this function with a null pointer for @p name is equivalent to
 * unsetting the value of the "name" attribute.
 * 
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_setDomainType(Domain_t * d, const char * domainType);


/**
 * Unsets the value of the "id" attribute of the given 
 * Domain_t structure.
 *
 * @param d the Domain_t structure.
 *
 * @return integer value indicating success/failure of the
 * function.  @if clike The value is drawn from the
 * enumeration #OperationReturnValues_t. @endif@~ The possible values
 * returned by this function are:
 * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS@endlink
 * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED@endlink
 * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT@endlink
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_unsetId(Domain_t * d);


/**
 * Unsets the value of the "domainType" attribute of the given 
 * Domain_t structure.
 *
 * @param d the Domain_t structure.
 *
 * @return integer value indicating success/failure of the
 * function.  @if clike The value is drawn from the
 * enumeration #OperationReturnValues_t. @endif@~ The possible values
 * returned by this function are:
 * @li @link OperationReturnValues_t#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS@endlink
 * @li @link OperationReturnValues_t#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED@endlink
 * @li @link OperationReturnValues_t#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT@endlink
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_unsetDomainType(Domain_t * d);


LIBSBML_EXTERN
int
Domain_addInteriorPoint(Domain_t * d, InteriorPoint_t * ip);


LIBSBML_EXTERN
InteriorPoint_t *
Domain_createInteriorPoint(Domain_t * d);


LIBSBML_EXTERN
ListOf_t *
Domain_getListOfInteriorPoints(Domain_t * d) ;


LIBSBML_EXTERN
InteriorPoint_t *
Domain_getInteriorPoint(Domain_t * d, unsigned int n);


LIBSBML_EXTERN
InteriorPoint_t *
Domain_getInteriorPointById(Domain_t * d, const char * sid);


LIBSBML_EXTERN
unsigned int
Domain_getNumInteriorPoints(Domain_t * d);


LIBSBML_EXTERN
InteriorPoint_t *
Domain_removeInteriorPoint(Domain_t * d, unsigned int n);


LIBSBML_EXTERN
InteriorPoint_t *
Domain_removeInteriorPointById(Domain_t * d, const char * sid);


/**
 * Predicate returning @c 1 or *c 0 depending on whether all the required
 * attributes of the given Domain_t structure have been set.
 *
 * @param d the Domain_t structure to check.
 *
 * @return @c 1 if all the required attributes for this
 * structure have been defined, @c 0 otherwise.
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_hasRequiredAttributes(const Domain_t * d);


/**
 * Predicate returning @c 1 or *c 0 depending on whether all the required
 * sub-elements of the given Domain_t structure have been set.
 *
 * @param d the Domain_t structure to check.
 *
 * @return @c 1 if all the required sub-elements for this
 * structure have been defined, @c 0 otherwise.
 *
 * @member of Domain_t
 */
LIBSBML_EXTERN
int
Domain_hasRequiredElements(const Domain_t * d);


LIBSBML_EXTERN
Domain_t *
ListOfDomains_getById(ListOf_t * lo, const char * sid);


LIBSBML_EXTERN
Domain_t *
ListOfDomains_removeById(ListOf_t * lo, const char * sid);




END_C_DECLS
LIBSBML_CPP_NAMESPACE_END

#endif  /*  !SWIG  */

#endif /*  Domain_H__  */

