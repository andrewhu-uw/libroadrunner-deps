using System;
using System.Runtime.InteropServices;
 
/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace libsbmlcs {

 using System;
 using System.Runtime.InteropServices;

/** 
 * @sbmlpackage{core}
 *
@htmlinclude pkg-marker-core.html A <em>species type</em> in SBML Level 2.
 *
 * The term @em species @em type refers to reacting entities independent of
 * location.  These include simple ions (e.g., protons, calcium), simple
 * molecules (e.g., glucose, ATP), large molecules (e.g., RNA,
 * polysaccharides, and proteins), and others.
 * 
 * SBML Level&nbsp;2 Versions&nbsp;2&ndash;4 provide an explicit
 * SpeciesType class of object to enable Species objects of the same type
 * to be related together.  SpeciesType is a conceptual construct; the
 * existence of SpeciesType objects in a model has no effect on the model's
 * numerical interpretation.  Except for the requirement for uniqueness of
 * species/species type combinations located in compartments, simulators
 * and other numerical analysis software may ignore SpeciesType definitions
 * and references to them in a model.
 * 
 * There is no mechanism in SBML Level 2 for representing hierarchies of
 * species types.  One SpeciesType object cannot be the subtype of another
 * SpeciesType object; SBML provides no means of defining such
 * relationships.
 * 
 * As with other major structures in SBML, SpeciesType has a mandatory
 * attribute, 'id', used to give the species type an identifier.  The
 * identifier must be a text string conforming to the identifer syntax
 * permitted in SBML.  SpeciesType also has an optional 'name' attribute,
 * of type @c string.  The 'id' and 'name' must be used according to the
 * guidelines described in the SBML specification (e.g., Section 3.3 in
 * the Level&nbsp;2 Version&nbsp;4 specification).
 *
 * SpeciesType was introduced in SBML Level 2 Version 2.  It is not
 * available in SBML Level&nbsp;1 nor in Level&nbsp;3.
 *
 * @see Species
 * @see ListOfSpeciesTypes
 * @see CompartmentType
 * @see ListOfCompartmentTypes
 * 
 * 
 */

public class SpeciesType : SBase {
	private HandleRef swigCPtr;
	
	internal SpeciesType(IntPtr cPtr, bool cMemoryOwn) : base(libsbmlPINVOKE.SpeciesType_SWIGUpcast(cPtr), cMemoryOwn)
	{
		//super(libsbmlPINVOKE.SpeciesTypeUpcast(cPtr), cMemoryOwn);
		swigCPtr = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(SpeciesType obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (SpeciesType obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~SpeciesType() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_SpeciesType(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  
/**
   * Creates a new SpeciesType using the given SBML @p level and @p version
   * values.
   *
   * @param level a long integer, the SBML Level to assign to this SpeciesType.
   *
   * @param version a long integer, the SBML Version to assign to this
   * SpeciesType.
   *
   *
 * @throws SBMLConstructorException
 * Thrown if the given @p level and @p version combination are invalid
 * or if this object is incompatible with the given level and version.
 *
 *
   *
   *
 * @note Attempting to add an object to an SBMLDocument having a different
 * combination of SBML Level, Version and XML namespaces than the object
 * itself will result in an error at the time a caller attempts to make the
 * addition.  A parent object must have compatible Level, Version and XML
 * namespaces.  (Strictly speaking, a parent may also have more XML
 * namespaces than a child, but the reverse is not permitted.)  The
 * restriction is necessary to ensure that an SBML model has a consistent
 * overall structure.  This requires callers to manage their objects
 * carefully, but the benefit is increased flexibility in how models can be
 * created by permitting callers to create objects bottom-up if desired.  In
 * situations where objects are not yet attached to parents (e.g.,
 * SBMLDocument), knowledge of the intented SBML Level and Version help
 * libSBML determine such things as whether it is valid to assign a
 * particular value to an attribute.
 *
 *
   */ public
 SpeciesType(long level, long version) : this(libsbmlPINVOKE.new_SpeciesType__SWIG_0(level, version), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/**
   * Creates a new SpeciesType using the given SBMLNamespaces object
   * @p sbmlns.
   *
   *
 * 
 * The SBMLNamespaces object encapsulates SBML Level/Version/namespaces
 * information.  It is used to communicate the SBML Level, Version, and (in
 * Level&nbsp;3) packages used in addition to SBML Level&nbsp;3 Core.  A
 * common approach to using libSBML's SBMLNamespaces facilities is to create an
 * SBMLNamespaces object somewhere in a program once, then hand that object
 * as needed to object constructors that accept SBMLNamespaces as arguments.
 *
 * 
   *
   * It is worth emphasizing that although this constructor does not take
   * an identifier argument, in SBML Level&nbsp;2 and beyond, the 'id'
   * (identifier) attribute of a SpeciesType object is required to have a value.
   * Thus, callers are cautioned to assign a value after calling this
   * constructor.  Setting the identifier can be accomplished using the
   * method SBase::setId(@if java String@endif).
   *
   * @param sbmlns an SBMLNamespaces object.
   *
   *
 * @throws SBMLConstructorException
 * Thrown if the given @p sbmlns is inconsistent or incompatible
 * with this object.
 *
 *
   *
   *
 * @note Attempting to add an object to an SBMLDocument having a different
 * combination of SBML Level, Version and XML namespaces than the object
 * itself will result in an error at the time a caller attempts to make the
 * addition.  A parent object must have compatible Level, Version and XML
 * namespaces.  (Strictly speaking, a parent may also have more XML
 * namespaces than a child, but the reverse is not permitted.)  The
 * restriction is necessary to ensure that an SBML model has a consistent
 * overall structure.  This requires callers to manage their objects
 * carefully, but the benefit is increased flexibility in how models can be
 * created by permitting callers to create objects bottom-up if desired.  In
 * situations where objects are not yet attached to parents (e.g.,
 * SBMLDocument), knowledge of the intented SBML Level and Version help
 * libSBML determine such things as whether it is valid to assign a
 * particular value to an attribute.
 *
 *
   */ public
 SpeciesType(SBMLNamespaces sbmlns) : this(libsbmlPINVOKE.new_SpeciesType__SWIG_1(SBMLNamespaces.getCPtr(sbmlns)), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/**
   * Copy constructor; creates a copy of this SpeciesType.
   *
   * @param orig the object to copy.
   */ public
 SpeciesType(SpeciesType orig) : this(libsbmlPINVOKE.new_SpeciesType__SWIG_2(SpeciesType.getCPtr(orig)), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/**
   * Creates and returns a deep copy of this SpeciesType object.
   *
   * @return the (deep) copy of this SpeciesType object.
   */ public new
 SpeciesType clone() {
    IntPtr cPtr = libsbmlPINVOKE.SpeciesType_clone(swigCPtr);
    SpeciesType ret = (cPtr == IntPtr.Zero) ? null : new SpeciesType(cPtr, true);
    return ret;
  }

  
/**
   * Returns the value of the 'id' attribute of this SpeciesType.
   *
   * @note Because of the inconsistent behavior of this function with 
   * respect to assignments and rules, it is now recommended to
   * use the getIdAttribute() function instead.
   *
   *
 * 
 * The identifier given by an object's 'id' attribute value
 * is used to identify the object within the SBML model definition.
 * Other objects can refer to the component using this identifier.  The
 * data type of 'id' is always <code>SId</code> or a type derived
 * from that, such as <code>UnitSId</code>, depending on the object in 
 * question.  All data types are defined as follows:
 * <pre style='margin-left: 2em; border: none; font-weight: bold; color: black'>
 *   letter ::= 'a'..'z','A'..'Z'
 *   digit  ::= '0'..'9'
 *   idChar ::= letter | digit | '_'
 *   SId    ::= ( letter | '_' ) idChar*
 * </pre>
 *
 * The characters <code>(</code> and <code>)</code> are used for grouping, the
 * character <code>*</code> 'zero or more times', and the character
 * <code>|</code> indicates logical 'or'.  The equality of SBML identifiers is
 * determined by an exact character sequence match; i.e., comparisons must be
 * performed in a case-sensitive manner.  This applies to all uses of <code>SId</code>, 
 * <code>SIdRef</code>, and derived types.
 *
 * In SBML Level&nbsp;3 Version&nbsp;2, the 'id' and 'name' attributes were
 * moved to SBase directly, instead of being defined individually for many
 * (but not all) objects.  Libsbml has for a long time provided functions
 * defined on SBase itself to get, set, check, and unset those attributes, which 
 * would fail or otherwise return empty strings if executed on any object 
 * for which those attributes were not defined.  Now that all SBase objects 
 * define those attributes, those functions now succeed for any object with 
 * the appropriate level and version.
 *
 * The exception to this rule is that for InitialAssignment, EventAssignment, 
 * AssignmentRule, and RateRule objects, the getId() function and the isSetId() 
 * functions (though not the setId() or unsetId() functions) would instead 
 * reference the value of the 'variable' attribute (for the rules and event 
 * assignments) or the 'symbol' attribute (for initial assignments).  
 * The AlgebraicRule fell into this category as well, though because it 
 * contained neither a 'variable' nor a 'symbol' attribute, getId() would 
 * always return an empty string, and isSetId() would always return @c false.
 * For this reason, four new functions are now provided 
 * (getIdAttribute(), setIdAttribute(@if java String@endif), 
 * isSetIdAttribute(), and unsetIdAttribute()) that will always
 * act on the actual 'id' attribute, regardless of the object's type.  The
 * new functions should be used instead of the old ones unless the old behavior
 * is somehow necessary.
 * 
 * Regardless of the level and version of the SBML, these functions allow
 * client applications to use more generalized code in some situations 
 * (for instance, when manipulating objects that are all known to have 
 * identifiers).  If the object in question does not posess an 'id' attribute 
 * according to the SBML specification for the Level and Version in use,
 * libSBML will not allow the identifier to be set, nor will it read or 
 * write 'id' attributes for those objects.
 *
 *
   *
   * @return the id of this SpeciesType.
   *
   * @see getIdAttribute()
   * @see setIdAttribute(string sid)
   * @see isSetIdAttribute()
   * @see unsetIdAttribute()
   */ public new
 string getId() {
    string ret = libsbmlPINVOKE.SpeciesType_getId(swigCPtr);
    return ret;
  }

  
/**
   * Returns the value of the 'name' attribute of this SpeciesType object.
   *
   *
 *
 * 
 * In SBML Level&nbsp;3 Version&nbsp;2, the 'id' and 'name' attributes were
 * moved to SBase directly, instead of being defined individually for many
 * (but not all) objects.  Libsbml has for a long time provided functions
 * defined on SBase itself to get, set, and unset those attributes, which 
 * would fail or otherwise return empty strings if executed on any object 
 * for which those attributes were not defined.  Now that all SBase objects 
 * define those attributes, those functions now succeed for any object with 
 * the appropriate level and version.
 *
 * The 'name' attribute is
 * optional and is not intended to be used for cross-referencing purposes
 * within a model.  Its purpose instead is to provide a human-readable
 * label for the component.  The data type of 'name' is the type
 * <code>string</code> defined in XML Schema.  SBML imposes no
 * restrictions as to the content of 'name' attributes beyond those
 * restrictions defined by the <code>string</code> type in XML Schema.
 *
 * The recommended practice for handling 'name' is as follows.  If a
 * software tool has the capability for displaying the content of 'name'
 * attributes, it should display this content to the user as a
 * component's label instead of the component's 'id'.  If the user
 * interface does not have this capability (e.g., because it cannot
 * display or use special characters in symbol names), or if the 'name'
 * attribute is missing on a given component, then the user interface
 * should display the value of the 'id' attribute instead.  (Script
 * language interpreters are especially likely to display 'id' instead of
 * 'name'.)
 * 
 * As a consequence of the above, authors of systems that automatically
 * generate the values of 'id' attributes should be aware some systems
 * may display the 'id''s to the user.  Authors therefore may wish to
 * take some care to have their software create 'id' values that are: (a)
 * reasonably easy for humans to type and read; and (b) likely to be
 * meaningful, for example by making the 'id' attribute be an abbreviated
 * form of the name attribute value.
 * 
 * An additional point worth mentioning is although there are
 * restrictions on the uniqueness of 'id' values, there are no
 * restrictions on the uniqueness of 'name' values in a model.  This
 * allows software applications leeway in assigning component identifiers.
 *
 * Regardless of the level and version of the SBML, these functions allow
 * client applications to use more generalized code in some situations 
 * (for instance, when manipulating objects that are all known to have 
 * names).  If the object in question does not posess a 'name' attribute 
 * according to the SBML specification for the Level and Version in use,
 * libSBML will not allow the name to be set, nor will it read or 
 * write 'name' attributes for those objects.
 *
 *
 *
 * @return the name of this SBML object, or the empty string if not set or unsettable.
 *
 * @see getIdAttribute()
 * @see isSetName()
 * @see setName(string sid)
 * @see unsetName()
 * 
 *
   */ public new
 string getName() {
    string ret = libsbmlPINVOKE.SpeciesType_getName(swigCPtr);
    return ret;
  }

  
/**
   * Predicate returning @c true if this
   * SpeciesType's 'id' attribute is set.
   *
   *
 * @note Because of the inconsistent behavior of this function with 
 * respect to assignments and rules, it is now recommended to
 * use the isSetIdAttribute() function instead.
 *
 *
 * 
 * The identifier given by an object's 'id' attribute value
 * is used to identify the object within the SBML model definition.
 * Other objects can refer to the component using this identifier.  The
 * data type of 'id' is always <code>SId</code> or a type derived
 * from that, such as <code>UnitSId</code>, depending on the object in 
 * question.  All data types are defined as follows:
 * <pre style='margin-left: 2em; border: none; font-weight: bold; color: black'>
 *   letter ::= 'a'..'z','A'..'Z'
 *   digit  ::= '0'..'9'
 *   idChar ::= letter | digit | '_'
 *   SId    ::= ( letter | '_' ) idChar*
 * </pre>
 *
 * The characters <code>(</code> and <code>)</code> are used for grouping, the
 * character <code>*</code> 'zero or more times', and the character
 * <code>|</code> indicates logical 'or'.  The equality of SBML identifiers is
 * determined by an exact character sequence match; i.e., comparisons must be
 * performed in a case-sensitive manner.  This applies to all uses of <code>SId</code>, 
 * <code>SIdRef</code>, and derived types.
 *
 * In SBML Level&nbsp;3 Version&nbsp;2, the 'id' and 'name' attributes were
 * moved to SBase directly, instead of being defined individually for many
 * (but not all) objects.  Libsbml has for a long time provided functions
 * defined on SBase itself to get, set, check, and unset those attributes, which 
 * would fail or otherwise return empty strings if executed on any object 
 * for which those attributes were not defined.  Now that all SBase objects 
 * define those attributes, those functions now succeed for any object with 
 * the appropriate level and version.
 *
 * The exception to this rule is that for InitialAssignment, EventAssignment, 
 * AssignmentRule, and RateRule objects, the getId() function and the isSetId() 
 * functions (though not the setId() or unsetId() functions) would instead 
 * reference the value of the 'variable' attribute (for the rules and event 
 * assignments) or the 'symbol' attribute (for initial assignments).  
 * The AlgebraicRule fell into this category as well, though because it 
 * contained neither a 'variable' nor a 'symbol' attribute, getId() would 
 * always return an empty string, and isSetId() would always return @c false.
 * For this reason, four new functions are now provided 
 * (getIdAttribute(), setIdAttribute(@if java String@endif), 
 * isSetIdAttribute(), and unsetIdAttribute()) that will always
 * act on the actual 'id' attribute, regardless of the object's type.  The
 * new functions should be used instead of the old ones unless the old behavior
 * is somehow necessary.
 * 
 * Regardless of the level and version of the SBML, these functions allow
 * client applications to use more generalized code in some situations 
 * (for instance, when manipulating objects that are all known to have 
 * identifiers).  If the object in question does not posess an 'id' attribute 
 * according to the SBML specification for the Level and Version in use,
 * libSBML will not allow the identifier to be set, nor will it read or 
 * write 'id' attributes for those objects.
 *
 *
 * 
 * @return @c true if the 'id' attribute of this SBML object is
 * set, @c false otherwise.
 *
 * @see getIdAttribute()
 * @see setIdAttribute(string sid)
 * @see unsetIdAttribute()
 * @see isSetIdAttribute()
 *
 *
   */ public new
 bool isSetId() {
    bool ret = libsbmlPINVOKE.SpeciesType_isSetId(swigCPtr);
    return ret;
  }

  
/**
   * Predicate returning @c true if this
   * SpeciesType's 'name' attribute is set.
   *
   *
 *
 * 
 * In SBML Level&nbsp;3 Version&nbsp;2, the 'id' and 'name' attributes were
 * moved to SBase directly, instead of being defined individually for many
 * (but not all) objects.  Libsbml has for a long time provided functions
 * defined on SBase itself to get, set, and unset those attributes, which 
 * would fail or otherwise return empty strings if executed on any object 
 * for which those attributes were not defined.  Now that all SBase objects 
 * define those attributes, those functions now succeed for any object with 
 * the appropriate level and version.
 *
 * The 'name' attribute is
 * optional and is not intended to be used for cross-referencing purposes
 * within a model.  Its purpose instead is to provide a human-readable
 * label for the component.  The data type of 'name' is the type
 * <code>string</code> defined in XML Schema.  SBML imposes no
 * restrictions as to the content of 'name' attributes beyond those
 * restrictions defined by the <code>string</code> type in XML Schema.
 *
 * The recommended practice for handling 'name' is as follows.  If a
 * software tool has the capability for displaying the content of 'name'
 * attributes, it should display this content to the user as a
 * component's label instead of the component's 'id'.  If the user
 * interface does not have this capability (e.g., because it cannot
 * display or use special characters in symbol names), or if the 'name'
 * attribute is missing on a given component, then the user interface
 * should display the value of the 'id' attribute instead.  (Script
 * language interpreters are especially likely to display 'id' instead of
 * 'name'.)
 * 
 * As a consequence of the above, authors of systems that automatically
 * generate the values of 'id' attributes should be aware some systems
 * may display the 'id''s to the user.  Authors therefore may wish to
 * take some care to have their software create 'id' values that are: (a)
 * reasonably easy for humans to type and read; and (b) likely to be
 * meaningful, for example by making the 'id' attribute be an abbreviated
 * form of the name attribute value.
 * 
 * An additional point worth mentioning is although there are
 * restrictions on the uniqueness of 'id' values, there are no
 * restrictions on the uniqueness of 'name' values in a model.  This
 * allows software applications leeway in assigning component identifiers.
 *
 * Regardless of the level and version of the SBML, these functions allow
 * client applications to use more generalized code in some situations 
 * (for instance, when manipulating objects that are all known to have 
 * names).  If the object in question does not posess a 'name' attribute 
 * according to the SBML specification for the Level and Version in use,
 * libSBML will not allow the name to be set, nor will it read or 
 * write 'name' attributes for those objects.
 *
 *
 * 
 * @return @c true if the 'name' attribute of this SBML object is
 * set, @c false otherwise.
 *
 * @see getName()
 * @see setName(string sid)
 * @see unsetName()
 *
 *
   */ public new
 bool isSetName() {
    bool ret = libsbmlPINVOKE.SpeciesType_isSetName(swigCPtr);
    return ret;
  }

  
/**
   * Sets the value of the 'id' attribute of this SpeciesType.
   *
   *
 * 
 * The string @p sid is copied.
 *
 *
 * 
 * The identifier given by an object's 'id' attribute value
 * is used to identify the object within the SBML model definition.
 * Other objects can refer to the component using this identifier.  The
 * data type of 'id' is always <code>SId</code> or a type derived
 * from that, such as <code>UnitSId</code>, depending on the object in 
 * question.  All data types are defined as follows:
 * <pre style='margin-left: 2em; border: none; font-weight: bold; color: black'>
 *   letter ::= 'a'..'z','A'..'Z'
 *   digit  ::= '0'..'9'
 *   idChar ::= letter | digit | '_'
 *   SId    ::= ( letter | '_' ) idChar*
 * </pre>
 *
 * The characters <code>(</code> and <code>)</code> are used for grouping, the
 * character <code>*</code> 'zero or more times', and the character
 * <code>|</code> indicates logical 'or'.  The equality of SBML identifiers is
 * determined by an exact character sequence match; i.e., comparisons must be
 * performed in a case-sensitive manner.  This applies to all uses of <code>SId</code>, 
 * <code>SIdRef</code>, and derived types.
 *
 * In SBML Level&nbsp;3 Version&nbsp;2, the 'id' and 'name' attributes were
 * moved to SBase directly, instead of being defined individually for many
 * (but not all) objects.  Libsbml has for a long time provided functions
 * defined on SBase itself to get, set, check, and unset those attributes, which 
 * would fail or otherwise return empty strings if executed on any object 
 * for which those attributes were not defined.  Now that all SBase objects 
 * define those attributes, those functions now succeed for any object with 
 * the appropriate level and version.
 *
 * The exception to this rule is that for InitialAssignment, EventAssignment, 
 * AssignmentRule, and RateRule objects, the getId() function and the isSetId() 
 * functions (though not the setId() or unsetId() functions) would instead 
 * reference the value of the 'variable' attribute (for the rules and event 
 * assignments) or the 'symbol' attribute (for initial assignments).  
 * The AlgebraicRule fell into this category as well, though because it 
 * contained neither a 'variable' nor a 'symbol' attribute, getId() would 
 * always return an empty string, and isSetId() would always return @c false.
 * For this reason, four new functions are now provided 
 * (getIdAttribute(), setIdAttribute(@if java String@endif), 
 * isSetIdAttribute(), and unsetIdAttribute()) that will always
 * act on the actual 'id' attribute, regardless of the object's type.  The
 * new functions should be used instead of the old ones unless the old behavior
 * is somehow necessary.
 * 
 * Regardless of the level and version of the SBML, these functions allow
 * client applications to use more generalized code in some situations 
 * (for instance, when manipulating objects that are all known to have 
 * identifiers).  If the object in question does not posess an 'id' attribute 
 * according to the SBML specification for the Level and Version in use,
 * libSBML will not allow the identifier to be set, nor will it read or 
 * write 'id' attributes for those objects.
 *
 *
 * 
 * @param sid the string to use as the identifier of this object.
 *
 *
 * @return integer value indicating success/failure of the
 * function.  @if clike The value is drawn from the
 * enumeration #OperationReturnValues_t. @endif The possible values
 * returned by this function are:
 * @li @link libsbml#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS@endlink
 * @li @link libsbml#LIBSBML_INVALID_ATTRIBUTE_VALUE LIBSBML_INVALID_ATTRIBUTE_VALUE@endlink
 * @li @link libsbml#LIBSBML_UNEXPECTED_ATTRIBUTE LIBSBML_UNEXPECTED_ATTRIBUTE@endlink
 *
 * @see getIdAttribute()
 * @see setIdAttribute(string sid)
 * @see isSetIdAttribute()
 * @see unsetIdAttribute()
 * 
 *
   */ public new
 int setId(string sid) {
    int ret = libsbmlPINVOKE.SpeciesType_setId(swigCPtr, sid);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  
/**
   * Sets the value of the 'name' attribute of this SpeciesType.
   *
   *
 * 
 *
 * The string in @p name is copied.
 *
 * @param name the new name for the SBML object.
 *
 *
 * @return integer value indicating success/failure of the
 * function.  @if clike The value is drawn from the
 * enumeration #OperationReturnValues_t. @endif The possible values
 * returned by this function are:
 * @li @link libsbml#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS@endlink
 * @li @link libsbml#LIBSBML_INVALID_ATTRIBUTE_VALUE LIBSBML_INVALID_ATTRIBUTE_VALUE@endlink
 *
 *
   */ public new
 int setName(string name) {
    int ret = libsbmlPINVOKE.SpeciesType_setName(swigCPtr, name);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  
/**
   * Unsets the value of the 'name' attribute of this SpeciesType.
   *
   *
 *
 * 
 * In SBML Level&nbsp;3 Version&nbsp;2, the 'id' and 'name' attributes were
 * moved to SBase directly, instead of being defined individually for many
 * (but not all) objects.  Libsbml has for a long time provided functions
 * defined on SBase itself to get, set, and unset those attributes, which 
 * would fail or otherwise return empty strings if executed on any object 
 * for which those attributes were not defined.  Now that all SBase objects 
 * define those attributes, those functions now succeed for any object with 
 * the appropriate level and version.
 *
 * The 'name' attribute is
 * optional and is not intended to be used for cross-referencing purposes
 * within a model.  Its purpose instead is to provide a human-readable
 * label for the component.  The data type of 'name' is the type
 * <code>string</code> defined in XML Schema.  SBML imposes no
 * restrictions as to the content of 'name' attributes beyond those
 * restrictions defined by the <code>string</code> type in XML Schema.
 *
 * The recommended practice for handling 'name' is as follows.  If a
 * software tool has the capability for displaying the content of 'name'
 * attributes, it should display this content to the user as a
 * component's label instead of the component's 'id'.  If the user
 * interface does not have this capability (e.g., because it cannot
 * display or use special characters in symbol names), or if the 'name'
 * attribute is missing on a given component, then the user interface
 * should display the value of the 'id' attribute instead.  (Script
 * language interpreters are especially likely to display 'id' instead of
 * 'name'.)
 * 
 * As a consequence of the above, authors of systems that automatically
 * generate the values of 'id' attributes should be aware some systems
 * may display the 'id''s to the user.  Authors therefore may wish to
 * take some care to have their software create 'id' values that are: (a)
 * reasonably easy for humans to type and read; and (b) likely to be
 * meaningful, for example by making the 'id' attribute be an abbreviated
 * form of the name attribute value.
 * 
 * An additional point worth mentioning is although there are
 * restrictions on the uniqueness of 'id' values, there are no
 * restrictions on the uniqueness of 'name' values in a model.  This
 * allows software applications leeway in assigning component identifiers.
 *
 * Regardless of the level and version of the SBML, these functions allow
 * client applications to use more generalized code in some situations 
 * (for instance, when manipulating objects that are all known to have 
 * names).  If the object in question does not posess a 'name' attribute 
 * according to the SBML specification for the Level and Version in use,
 * libSBML will not allow the name to be set, nor will it read or 
 * write 'name' attributes for those objects.
 *
 *
 * 
 *
 * @return integer value indicating success/failure of the
 * function.  @if clike The value is drawn from the
 * enumeration #OperationReturnValues_t. @endif The possible values
 * returned by this function are:
 * @li @link libsbml#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS@endlink
 * @li @link libsbml#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED@endlink
 *
 * @see getName()
 * @see setName(string sid)
 * @see isSetName()
 *
 *
   */ public new
 int unsetName() {
    int ret = libsbmlPINVOKE.SpeciesType_unsetName(swigCPtr);
    return ret;
  }

  
/**
   * Returns the libSBML type code for this SBML object.
   * 
   *
 * 
 * LibSBML attaches an identifying code to every kind of SBML object.  These
 * are integer constants known as <em>SBML type codes</em>.  The names of all
 * the codes begin with the characters <code>SBML_</code>.
 * @if clike The set of possible type codes for core elements is defined in
 * the enumeration #SBMLTypeCode_t, and in addition, libSBML plug-ins for
 * SBML Level&nbsp;3 packages define their own extra enumerations of type
 * codes (e.g., #SBMLLayoutTypeCode_t for the Level&nbsp;3 Layout
 * package).@endif@if java In the Java language interface for libSBML, the
 * type codes are defined as static integer constants in the interface class
 * {@link libsbmlConstants}.  @endif@if python In the Python language
 * interface for libSBML, the type codes are defined as static integer
 * constants in the interface class @link libsbml@endlink.@endif@if csharp In
 * the C# language interface for libSBML, the type codes are defined as
 * static integer constants in the interface class
 * @link libsbmlcs.libsbml@endlink.@endif  Note that different Level&nbsp;3
 * package plug-ins may use overlapping type codes; to identify the package
 * to which a given object belongs, call the <code>getPackageName()</code>
 * method on the object.
 *
 *
   *
   * @return the SBML type code for this object:
   * @link libsbml#SBML_SPECIES_TYPE SBML_SPECIES_TYPE@endlink (default).
   *
   *
 * @warning <span class='warning'>The specific integer values of the possible
 * type codes may be reused by different libSBML plug-ins for SBML Level&nbsp;3.
 * packages,  To fully identify the correct code, <strong>it is necessary to
 * invoke both getTypeCode() and getPackageName()</strong>.</span>
 *
 *
   *
   * @see getElementName()
   * @see getPackageName()
   */ public new
 int getTypeCode() {
    int ret = libsbmlPINVOKE.SpeciesType_getTypeCode(swigCPtr);
    return ret;
  }

  
/**
   * Returns the XML element name of this object, which for
   * SpeciesType, is always @c 'compartmentType'.
   * 
   * @return the name of this element, i.e., @c 'compartmentType'.
   */ public new
 string getElementName() {
    string ret = libsbmlPINVOKE.SpeciesType_getElementName(swigCPtr);
    return ret;
  }

  
/**
   * Predicate returning @c true if
   * all the required attributes for this SpeciesType object
   * have been set.
   *
   * The required attributes for a SpeciesType object are:
   * @li 'id'
   *
   * @return @c true if the required attributes have been set, @c false
   * otherwise.
   */ public new
 bool hasRequiredAttributes() {
    bool ret = libsbmlPINVOKE.SpeciesType_hasRequiredAttributes(swigCPtr);
    return ret;
  }

}

}
