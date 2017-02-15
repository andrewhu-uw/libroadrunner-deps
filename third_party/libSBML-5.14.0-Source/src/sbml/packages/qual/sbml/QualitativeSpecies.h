/**
 * @file   QualitativeSpecies.h
 * @brief  Implementation of the QualitativeSpecies class
 * @author Generated by autocreate code
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
 *
 * @class QualitativeSpecies
 * @sbmlbrief{qual} Extension of Species.
 *
 * Similarly to the Species in SBML, the components of qualitative models
 * refer to pools of entities that are considered indistinguishable and are
 * each located in a specific Compartment. However, here components are
 * characterised by their qualitative influences rather than by taking part
 * in reactions. Therefore, we define the QualitativeSpecies element to
 * represent such pools of entities.
 *
 * In a Petri net, qualitative species refer to the places of the model,
 * while in a logical model, they refer to the variables of this model
 * (i.e. nodes of the influence graph).
 *
 * A QualitativeSpecies describes a pool of indistinguishable entities in a
 * Compartment. It is associated with a level (an integer representing
 * e.g. an activity state, or a functional level of concentration, etc.)
 */


#ifndef QualitativeSpecies_H__
#define QualitativeSpecies_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/qual/common/qualfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/SBase.h>
#include <sbml/ListOf.h>
#include <sbml/packages/qual/extension/QualExtension.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN QualitativeSpecies : public SBase
{

protected:

  /** @cond doxygenLibsbmlInternal */
//  std::string   mId;
  std::string   mCompartment;
  bool          mConstant;
  bool          mIsSetConstant;
//  std::string   mName;
  int           mInitialLevel;
  bool          mIsSetInitialLevel;
  int           mMaxLevel;
  bool          mIsSetMaxLevel;
  /** @endcond */


public:

  /**
   * Creates a new QualitativeSpecies with the given level, version, and package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this QualitativeSpecies.
   *
   * @param version an unsigned int, the SBML Version to assign to this QualitativeSpecies.
   *
   * @param pkgVersion an unsigned int, the SBML Qual Version to assign to this QualitativeSpecies.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  QualitativeSpecies(unsigned int level      = QualExtension::getDefaultLevel(),
                     unsigned int version    = QualExtension::getDefaultVersion(),
                     unsigned int pkgVersion = QualExtension::getDefaultPackageVersion());


  /**
   * Creates a new QualitativeSpecies with the given QualPkgNamespaces object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param qualns the QualPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  QualitativeSpecies(QualPkgNamespaces* qualns);


  /**
   * Copy constructor for QualitativeSpecies.
   *
   * @param orig the QualitativeSpecies instance to copy.
   */
  QualitativeSpecies(const QualitativeSpecies& orig);


  /**
   * Assignment operator for QualitativeSpecies.
   *
   * @param rhs the object whose values are used as the basis
   * of the assignment.
   */
  QualitativeSpecies& operator=(const QualitativeSpecies& rhs);


  /**
   * Creates and returns a deep copy of this QualitativeSpecies object.
   *
   * @return a (deep) copy of this QualitativeSpecies object.
   */
  virtual QualitativeSpecies* clone () const;


  /**
   * Destructor for QualitativeSpecies.
   */
  virtual ~QualitativeSpecies();


  /**
   * Returns the value of the "id" attribute of this QualitativeSpecies.
   *
   * @note Because of the inconsistent behavior of this function with 
   * respect to assignments and rules, it is now recommended to
   * use the getIdAttribute() function instead.
   *
   * @copydetails doc_id_attribute
   *
   * @return the id of this QualitativeSpecies.
   *
   * @see getIdAttribute()
   * @see setIdAttribute(const std::string& sid)
   * @see isSetIdAttribute()
   * @see unsetIdAttribute()
   */
  virtual const std::string& getId() const;


  /**
   * Returns the value of the "compartment" attribute of this QualitativeSpecies.
   *
   * @return the value of the "compartment" attribute of this QualitativeSpecies as a string.
   */
  virtual const std::string& getCompartment() const;


  /**
   * Returns the value of the "constant" attribute of this QualitativeSpecies.
   *
   * @return the value of the "constant" attribute of this QualitativeSpecies as a boolean.
   */
  virtual bool getConstant() const;


  /**
   * Returns the value of the "name" attribute of this QualitativeSpecies object.
   *
   * @copydetails doc_get_name
   */
  virtual const std::string& getName() const;


  /**
   * Returns the value of the "initialLevel" attribute of this QualitativeSpecies.
   *
   * @return the value of the "initialLevel" attribute of this QualitativeSpecies as a integer.
   */
  virtual int getInitialLevel() const;


  /**
   * Returns the value of the "maxLevel" attribute of this QualitativeSpecies.
   *
   * @return the value of the "maxLevel" attribute of this QualitativeSpecies as a integer.
   */
  virtual int getMaxLevel() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * QualitativeSpecies's "id" attribute has been set.
   *
   * @copydetails doc_isset_id
   */
  virtual bool isSetId() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * QualitativeSpecies's "compartment" attribute has been set.
   *
   * @return @c true if this QualitativeSpecies's "compartment" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetCompartment() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * QualitativeSpecies's "constant" attribute has been set.
   *
   * @return @c true if this QualitativeSpecies's "constant" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetConstant() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * QualitativeSpecies's "name" attribute has been set.
   *
   * @copydetails doc_isset_name
   */
  virtual bool isSetName() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * QualitativeSpecies's "initialLevel" attribute has been set.
   *
   * @return @c true if this QualitativeSpecies's "initialLevel" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetInitialLevel() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * QualitativeSpecies's "maxLevel" attribute has been set.
   *
   * @return @c true if this QualitativeSpecies's "maxLevel" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetMaxLevel() const;


  /**
   * Sets the value of the "id" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_set_id
   */
  virtual int setId(const std::string& sid);


  /**
   * Sets the value of the "compartment" attribute of this QualitativeSpecies.
   *
   * @param compartment the value of the "compartment" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  virtual int setCompartment(const std::string& compartment);


  /**
   * Sets the value of the "constant" attribute of this QualitativeSpecies.
   *
   * @param constant bool value of the "constant" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  virtual int setConstant(bool constant);


  /**
   * Sets the value of the "name" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_set_name
   */
  virtual int setName(const std::string& name);


  /**
   * Sets the value of the "initialLevel" attribute of this QualitativeSpecies.
   *
   * @param initialLevel int value of the "initialLevel" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  virtual int setInitialLevel(int initialLevel);


  /**
   * Sets the value of the "maxLevel" attribute of this QualitativeSpecies.
   *
   * @param maxLevel int value of the "maxLevel" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  virtual int setMaxLevel(int maxLevel);


  /**
   * Unsets the value of the "id" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_unset_id
   */
  virtual int unsetId();


  /**
   * Unsets the value of the "compartment" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetCompartment();


  /**
   * Unsets the value of the "constant" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetConstant();


  /**
   * Unsets the value of the "name" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_unset_name
   */
  virtual int unsetName();


  /**
   * Unsets the value of the "initialLevel" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetInitialLevel();


  /**
   * Unsets the value of the "maxLevel" attribute of this QualitativeSpecies.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetMaxLevel();


  /**
   * @copydoc doc_renamesidref_common
   */
   virtual void renameSIdRefs(const std::string& oldid, const std::string& newid);


  /**
   * Returns the XML name of this object.
   *
   * @return the name of this element.
   */
  virtual const std::string& getElementName () const;


  /**
   * Returns the libSBML type code of this object instance.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for this object:
   * @sbmlconstant{SBML_QUAL_QUALITATIVE_SPECIES, SBMLQualTypeCode_t}
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getTypeCode () const;


  /**
   * Predicate returning @c true if all the required attributes
   * for this QualitativeSpecies object have been set.
   *
   * @note The required attributes for a QualitativeSpecies object are:
   * @li "id"
   * @li "compartment"
   * @li "constant"
   *
   * @return a boolean value indicating whether all the required
   * attributes for this object have been defined.
   */
  virtual bool hasRequiredAttributes() const;


  /** @cond doxygenLibsbmlInternal */
  /**
   * Subclasses should override this method to write out their contained
   * SBML objects as XML elements.  Be sure to call your parent's
   * implementation of this method as well.
   */
  virtual void writeElements (XMLOutputStream& stream) const;


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Accepts the given SBMLVisitor.
   */
  virtual bool accept (SBMLVisitor& v) const;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Sets the parent SBMLDocument.
   */
  virtual void setSBMLDocument (SBMLDocument* d);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Enables/Disables the given package with this element.
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
               const std::string& pkgPrefix, bool flag);


  /** @endcond */


protected:

  /** @cond doxygenLibsbmlInternal */
  /**
   * Get the list of expected attributes for this element.
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Read values from the given XMLAttributes set into their specific fields.
   */
  virtual void readAttributes (const XMLAttributes& attributes,
                               const ExpectedAttributes& expectedAttributes);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Write values of XMLAttributes to the output stream.
   */
  virtual void writeAttributes (XMLOutputStream& stream) const;


  /** @endcond */



};

/**
 * @class ListOfQualitativeSpecies
 * @sbmlbrief{qual} A list of QualitativeSpecies objects.
 * 
 * The ListOfQualitativeSpecies is a container for the QualitativeSpecies elements of a Model.
 * 
 * @copydetails doc_what_is_listof
 *
 * @see QualitativeSpecies
 */
class LIBSBML_EXTERN ListOfQualitativeSpecies : public ListOf
{

public:

  /**
   * Creates a new ListOfQualitativeSpecies with the given level, version, and package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this ListOfQualitativeSpecies.
   *
   * @param version an unsigned int, the SBML Version to assign to this ListOfQualitativeSpecies.
   *
   * @param pkgVersion an unsigned int, the SBML Qual Version to assign to this ListOfQualitativeSpecies.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfQualitativeSpecies(unsigned int level      = QualExtension::getDefaultLevel(),
                           unsigned int version    = QualExtension::getDefaultVersion(),
                           unsigned int pkgVersion = QualExtension::getDefaultPackageVersion());


  /**
   * Creates a new ListOfQualitativeSpecies with the given QualPkgNamespaces object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param qualns the QualPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfQualitativeSpecies(QualPkgNamespaces* qualns);


  /**
   * Creates and returns a deep copy of this ListOfQualitativeSpecies object.
   *
   * @return a (deep) copy of this ListOfQualitativeSpecies object.
   */
  virtual ListOfQualitativeSpecies* clone () const;


  /**
   * Get a QualitativeSpecies from the ListOfQualitativeSpecies.
   *
   * @param n the index number of the QualitativeSpecies to get.
   *
   * @return the nth QualitativeSpecies in this ListOfQualitativeSpecies.
   *
   * @see size()
   */
  virtual QualitativeSpecies* get(unsigned int n);


  /**
   * Get a QualitativeSpecies from the ListOfQualitativeSpecies.
   *
   * @param n the index number of the QualitativeSpecies to get.
   *
   * @return the nth QualitativeSpecies in this ListOfQualitativeSpecies.
   *
   * @see size()
   */
  virtual const QualitativeSpecies* get(unsigned int n) const;


  /**
   * Get a QualitativeSpecies from the ListOfQualitativeSpecies
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the QualitativeSpecies to get.
   *
   * @return QualitativeSpecies in this ListOfQualitativeSpecies
   * with the given id or NULL if no such
   * QualitativeSpecies exists.
   *
   * @see get(unsigned int n)   *
   * @see size()
   */
  virtual QualitativeSpecies* get(const std::string& sid);


  /**
   * Get a QualitativeSpecies from the ListOfQualitativeSpecies
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the QualitativeSpecies to get.
   *
   * @return QualitativeSpecies in this ListOfQualitativeSpecies
   * with the given id or NULL if no such
   * QualitativeSpecies exists.
   *
   * @see get(unsigned int n)   *
   * @see size()
   */
  virtual const QualitativeSpecies* get(const std::string& sid) const;


  /**
   * Removes the nth QualitativeSpecies from this ListOfQualitativeSpecies
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   *
   * @param n the index of the QualitativeSpecies to remove.
   *
   * @see size()
   */
  virtual QualitativeSpecies* remove(unsigned int n);


  /**
   * Removes the QualitativeSpecies from this ListOfQualitativeSpecies with the given identifier
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   * If none of the items in this list have the identifier @p sid, then
   * @c NULL is returned.
   *
   * @param sid the identifier of the QualitativeSpecies to remove.
   *
   * @return the QualitativeSpecies removed. As mentioned above, the caller owns the
   * returned item.
   */
  virtual QualitativeSpecies* remove(const std::string& sid);


  /**
   * Returns the XML name of this object.
   *
   * @return the name of this element.
   */
  virtual const std::string& getElementName () const;


  /**
   * Returns the libSBML type code for the SBML objects
   * contained in this ListOf object.
   * 
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for objects contained in this list:
   * @sbmlconstant{SBML_QUAL_QUALITATIVE_SPECIES, SBMLTypeCode_t} (default).
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getItemTypeCode () const;


protected:

  /** @cond doxygenLibsbmlInternal */
  /**
   * Creates a new QualitativeSpecies in this ListOfQualitativeSpecies
   */
  virtual SBase* createObject(XMLInputStream& stream);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Write the namespace for the Qual package.
   */
  virtual void writeXMLNS(XMLOutputStream& stream) const;


  /** @endcond */



};



LIBSBML_CPP_NAMESPACE_END

#endif  /*  __cplusplus  */

#ifndef SWIG

LIBSBML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

/**
 * Creates a new QualitativeSpecies_t structure using the given SBML @p level
 * and @p version values.
 *
 * @param level an unsigned int, the SBML Level to assign to this
 * QualitativeSpecies_t.
 * @param version an unsigned int, the SBML Version to assign to this
 * QualitativeSpecies_t.
 * @param pkgVersion an unsigned int, the SBML 'Qual' package Version to assign to this
 * QualitativeSpecies_t.
 *
 * @return a pointer to the newly created QualitativeSpecies_t structure.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
QualitativeSpecies_t *
QualitativeSpecies_create(unsigned int level, unsigned int version,
                          unsigned int pkgVersion);


/**
 * Frees the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to free.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
void
QualitativeSpecies_free(QualitativeSpecies_t * qs);


/**
 * Returns a copy of the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to copy.
 * 
 * @return a (deep) copy of the QualitativeSpecies_t.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
QualitativeSpecies_t *
QualitativeSpecies_clone(QualitativeSpecies_t * qs);


/**
 * Takes an QualitativeSpecies_t structure and returns its identifier.
 *
 * @param qs the QualitativeSpecies_t structure whose identifier is sought.
 * 
 * @return the identifier of this QualitativeSpecies_t, as a pointer to a string.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
char *
QualitativeSpecies_getId(QualitativeSpecies_t * qs);


/**
 * Takes a QualitativeSpecies_t structure and returns its compartment.
 *
 * @param qs the QualitativeSpecies_t whose compartment is sought.
 *
 * @return the compartment of the given QualitativeSpecies_t, as a pointer to a string.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
char *
QualitativeSpecies_getCompartment(QualitativeSpecies_t * qs);


/**
 * Takes a QualitativeSpecies_t structure and returns its constant.
 *
 * @param qs the QualitativeSpecies_t whose constant is sought.
 *
 * @return nonzero (true) if the given QualitativeSpecies_t structure's
 * "constant" attribute value is nonzero, zero (0) otherwise.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_getConstant(QualitativeSpecies_t * qs);


/**
 * Takes a QualitativeSpecies_t structure and returns its name.
 *
 * @param qs the QualitativeSpecies_t whose name is sought.
 *
 * @return the name of this QualitativeSpecies_t, as a pointer to a string.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
char *
QualitativeSpecies_getName(QualitativeSpecies_t * qs);


/**
 * Takes a QualitativeSpecies_t structure and returns its initialLevel.
 *
 * @param qs the QualitativeSpecies_t whose initialLevel is sought.
 *
 * @return the initialLevel attribute of the given QualitativeSpecies_t, as an @c int.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_getInitialLevel(QualitativeSpecies_t * qs);


/**
 * Takes a QualitativeSpecies_t structure and returns its maxLevel.
 *
 * @param qs the QualitativeSpecies_t whose maxLevel is sought.
 *
 * @return the maxLevel attribute of the given QualitativeSpecies_t, as an @c int.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_getMaxLevel(QualitativeSpecies_t * qs);


/**
 * Predicate returning @c true or @c false depending on whether the given
 * QualitativeSpecies_t structure's identifier is set.
 *
 * @param qs the QualitativeSpecies_t structure to query.
 * 
 * @return @c non-zero (true) if the "id" attribute of the given
 * QualitativeSpecies_t structure is set, zero (false) otherwise.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_isSetId(QualitativeSpecies_t * qs);


/**
 * Predicate returning @c true or @c false depending on whether the given
 * QualitativeSpecies_t structure's compartment is set.
 *
 * @param qs the QualitativeSpecies_t structure to query.
 * 
 * @return @c non-zero (true) if the "compartment" attribute of the given
 * QualitativeSpecies_t structure is set, zero (false) otherwise.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_isSetCompartment(QualitativeSpecies_t * qs);


/**
 * Predicate returning @c true or @c false depending on whether the given
 * QualitativeSpecies_t structure's constant is set.
 *
 * @param qs the QualitativeSpecies_t structure to query.
 * 
 * @return @c non-zero (true) if the "constant" attribute of the given
 * QualitativeSpecies_t structure is set, zero (false) otherwise.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_isSetConstant(QualitativeSpecies_t * qs);


/**
 * Predicate returning @c true or @c false depending on whether the given
 * QualitativeSpecies_t structure's name is set.
 *
 * @param qs the QualitativeSpecies_t structure to query.
 * 
 * @return @c non-zero (true) if the "name" attribute of the given
 * QualitativeSpecies_t structure is set, zero (false) otherwise.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_isSetName(QualitativeSpecies_t * qs);


/**
 * Predicate returning @c true or @c false depending on whether the given
 * QualitativeSpecies_t structure's initialLevel is set.
 *
 * @param qs the QualitativeSpecies_t structure to query.
 * 
 * @return @c non-zero (true) if the "initialLevel" attribute of the given
 * QualitativeSpecies_t structure is set, zero (false) otherwise.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_isSetInitialLevel(QualitativeSpecies_t * qs);


/**
 * Predicate returning @c true or @c false depending on whether the given
 * QualitativeSpecies_t structure's maxLevel is set.
 *
 * @param qs the QualitativeSpecies_t structure to query.
 * 
 * @return @c non-zero (true) if the "maxLevel" attribute of the given
 * QualitativeSpecies_t structure is set, zero (false) otherwise.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_isSetMaxLevel(QualitativeSpecies_t * qs);


/**
 * Assigns the identifier of an QualitativeSpecies_t structure.
 *
 * This makes a copy of the string passed in the param @p sid.
 *
 * @param qs the QualitativeSpecies_t structure to set.
 * @param sid the string to use as the identifier.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 *
 * @note Using this function with an id of NULL is equivalent to
 * unsetting the "id" attribute.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_setId(QualitativeSpecies_t * qs, const char * sid);


/**
 * Sets the compartment of the given QualitativeSpecies_t to a copy of @p compartment.
 *
 * @param qs the QualitativeSpecies_t structure to set.
 * @param compartment the compartment to assign to the given QualitativeSpecies_t's "compartment" attribute.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 *
 * @note Using this function with the name set to NULL is equivalent to
 * unsetting the "compartment" attribute.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_setCompartment(QualitativeSpecies_t * qs, const char * compartment);


/**
 * Sets the "constant" attribute of this QualitativeSpecies_t to @p constant.
 * 
 * @param qs the QualitativeSpecies_t structure to set.
 * @param constant the value of the "constant" attribute, converted to a boolean: 
 * all nonzero values set the "constant" attribute to 'true', and a value of 
 * zero (0) will set the "constant" attribute to 'false'.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_UNEXPECTED_ATTRIBUTE, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_setConstant(QualitativeSpecies_t * qs, int constant);


/**
 * Sets the name of the given QualitativeSpecies_t to a copy of @p name.
 *
 * @param qs the QualitativeSpecies_t structure to set.
 * @param name the name to assign to the given QualitativeSpecies_t's "name" attribute.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 *
 * @note Using this function with the name set to NULL is equivalent to
 * unsetting the "name" attribute.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_setName(QualitativeSpecies_t * qs, const char * name);


/**
 * Sets the "initialLevel" attribute of the given QualitativeSpecies_t
 * structure.
 *
 * @param qs the QualitativeSpecies_t structure.
 * 
 * @param initialLevel the value of initialLevel to assign to the "initialLevel" attribute.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_UNEXPECTED_ATTRIBUTE, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_setInitialLevel(QualitativeSpecies_t * qs, int initialLevel);


/**
 * Sets the "maxLevel" attribute of the given QualitativeSpecies_t
 * structure.
 *
 * @param qs the QualitativeSpecies_t structure.
 * 
 * @param maxLevel the value of maxLevel to assign to the "maxLevel" attribute.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_UNEXPECTED_ATTRIBUTE, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_setMaxLevel(QualitativeSpecies_t * qs, int maxLevel);


/**
 * Unsets the "id" attribute of the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_unsetId(QualitativeSpecies_t * qs);


/**
 * Unsets the "compartment" attribute of the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_unsetCompartment(QualitativeSpecies_t * qs);


/**
 * Unsets the "constant" attribute of the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_unsetConstant(QualitativeSpecies_t * qs);


/**
 * Unsets the "name" attribute of the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_unsetName(QualitativeSpecies_t * qs);


/**
 * Unsets the "initialLevel" attribute of the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_unsetInitialLevel(QualitativeSpecies_t * qs);


/**
 * Unsets the "maxLevel" attribute of the given QualitativeSpecies_t structure.
 *
 * @param qs the QualitativeSpecies_t structure to unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_unsetMaxLevel(QualitativeSpecies_t * qs);


/**
  * Predicate returning @c true or @c false depending on whether
  * all the required attributes for the given QualitativeSpecies_t structure
  * have been set.
  *
  * @note The required attributes for a QualitativeSpecies_t structure are:
  * @li useValuesfromTriggerTime ( L3 onwards )
  *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
int
QualitativeSpecies_hasRequiredAttributes(QualitativeSpecies_t * qs);


/**
 * Return the QualitativeSpecies_t indicated by the given @p sid.
 *
 * @param lo the ListOf_t structure to use.
 *
 * @param sid a string, the identifier of the
 * QualitativeSpecies_t is being sought.
 *
 * @return the QualitativeSpecies_t for the given variable, or @c NULL if no such
 * QualitativeSpecies_t exits.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
QualitativeSpecies_t *
ListOfQualitativeSpecies_getById(ListOf_t * lo, const char * sid);


/**
 * Removes the QualitativeSpecies_t structure with the given @p sid
 * from the given QualitativeSpecies_t structure and returns a pointer to it.
 *
 * The caller owns the returned structure and is responsible for deleting it.
 *
 * @param lo the ListOf_t structure.
 * @param sid the string of the "id" attribute of the QualitativeSpecies_t sought.
 *
 * @return the QualitativeSpecies_t structure removed.  As mentioned above, the 
 * caller owns the returned structure. @c NULL is returned if no QualitativeSpecies_t
 * structure with the "id" attribute exists in the given ListOf_t structure.
 *
 * @memberof QualitativeSpecies_t
 */
LIBSBML_EXTERN
QualitativeSpecies_t *
ListOfQualitativeSpecies_removeById(ListOf_t * lo, const char * sid);




END_C_DECLS
LIBSBML_CPP_NAMESPACE_END

#endif  /*  !SWIG  */

#endif /*  QualitativeSpecies_H__  */
