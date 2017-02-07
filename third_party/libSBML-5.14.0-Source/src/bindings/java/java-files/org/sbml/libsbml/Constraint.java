/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.sbml.libsbml;

/** 
 *  An SBML <em>constraint</em>, for stating validity assumptions.
 <p>
 * The {@link Constraint} object class was introduced in SBML Level&nbsp;2
 * Version&nbsp;2 as a mechanism for stating the assumptions under which a
 * model is designed to operate.  The <em>constraints</em> are statements
 * about permissible values of different quantities in a model.
 * Constraints are not used to compute dynamical values for simulation or
 * analysis, but rather, they serve an advisory role for
 * simulation/analysis tools.
 <p>
 * SBML's {@link Constraint} object class has one required attribute, 'id', to
 * give the parameter a unique identifier by which other parts of an SBML
 * model definition can refer to it.  A {@link Constraint} object can also have an
 * optional 'name' attribute of type <code>string.</code>  Identifiers and names must
 * be used according to the guidelines described in the SBML specification
 * (e.g., Section 3.3 in the Level&nbsp;2 Version 4 specification).  
 <p>
 * {@link Constraint} has one subelement, 'math', containing a MathML
 * formula defining the condition of the constraint.  This formula will
 * return a Boolean value of <code>true</code> when the model is a <em>valid</em>
 * state.  The formula can be an arbitrary expression referencing the
 * variables and other entities in an SBML model.  The evaluation of 'math'
 * and behavior of constraints are described in more detail below.
 <p>
 * In SBML Level&nbsp;2 and SBML Level&nbsp;3 Version&nbsp;1, the 'math'
 * subelement is required, and its formula must be a Boolean value.  In
 * SBML Level&nbsp;3 Version&nbsp;2, these restrictions were relaxed:
 * the 'math' subelement is optional, and numeric values are allowed
 * in Boolean contexts (a '0' is interpreted as <code>false</code>, and all other
 * values are interpreted as <code>true</code>).  If a {@link Constraint} with no 'math'
 * is present in a {@link Model}, no restriction on the {@link Model}'s behavior is
 * implied or enforced.
 <p>
 * A {@link Constraint} structure also has an optional subelement called 'message'.
 * This can contain a message in XHTML format that may be displayed to the
 * user when the condition of the formula in the 'math' subelement
 * evaluates to a value of <code>false.</code>  Software tools are not required to
 * display the message, but it is recommended that they do so as a matter
 * of best practice.  The XHTML content within a 'message' subelement must
 * follow the same restrictions as for the 'notes' element on {@link SBase}
 * described in in the SBML Level&nbsp;2 specification; please consult the
 * <a target='_blank' href='http://sbml.org/Documents/Specifications'>SBML
 * specification document</a> corresponding to the SBML Level and Version
 * of your model for more information about the requirements for 'notes'
 * content.
 <p>
 * {@link Constraint} was introduced in SBML Level&nbsp;2 Version&nbsp;2.  It is
 * not available in earlier versions of Level&nbsp;2 nor in any version of
 * Level&nbsp;1.
 <p>
 * <h2>Semantics of Constraints</h2>
 <p>
 * In the context of a simulation, a {@link Constraint} has effect at all times
 * <em>t &#8805; 0</em>.  Each {@link Constraint}'s 'math' subelement is first
 * evaluated after any {@link InitialAssignment} definitions in a model at <em>t =
 * 0</em> and can conceivably trigger at that point.  (In other words, a
 * simulation could fail a constraint immediately.)
 <p>
 * {@link Constraint} structures <em>cannot and should not</em> be used to compute
 * the dynamical behavior of a model as part of, for example, simulation.
 * Constraints may be used as input to non-dynamical analysis, for instance
 * by expressing flux constraints for flux balance analysis.
 <p>
 * The results of a simulation of a model containing a constraint are
 * invalid from any simulation time at and after a point when the function
 * given by the 'math' subelement returns a value of <code>false.</code>  Invalid
 * simulation results do not make a prediction of the behavior of the
 * biochemical reaction network represented by the model.  The precise
 * behavior of simulation tools is left undefined with respect to
 * constraints.  If invalid results are detected with respect to a given
 * constraint, the 'message' subelement may optionally be displayed to the
 * user.  The simulation tool may also halt the simulation or clearly
 * delimit in output data the simulation time point at which the simulation
 * results become invalid.
 <p>
 * SBML does not impose restrictions on duplicate {@link Constraint} definitions or
 * the order of evaluation of {@link Constraint} objects in a model.  It is
 * possible for a model to define multiple constraints all with the same
 * mathematical expression.  Since the failure of any constraint indicates
 * that the model simulation has entered an invalid state, a system is not
 * required to attempt to detect whether other constraints in the model
 * have failed once any one constraint has failed.
 */

public class Constraint extends SBase {
   private long swigCPtr;

   protected Constraint(long cPtr, boolean cMemoryOwn)
   {
     super(libsbmlJNI.Constraint_SWIGUpcast(cPtr), cMemoryOwn);
     swigCPtr = cPtr;
   }

   protected static long getCPtr(Constraint obj)
   {
     return (obj == null) ? 0 : obj.swigCPtr;
   }

   protected static long getCPtrAndDisown (Constraint obj)
   {
     long ptr = 0;

     if (obj != null)
     {
       ptr             = obj.swigCPtr;
       obj.swigCMemOwn = false;
     }

     return ptr;
   }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libsbmlJNI.delete_Constraint(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  
/**
   * Creates a new {@link Constraint} using the given SBML <code>level</code> and <code>version</code>
   * values.
   <p>
   * @param level a long integer, the SBML Level to assign to this {@link Constraint}.
   <p>
   * @param version a long integer, the SBML Version to assign to this
   * {@link Constraint}.
   <p>
   * <p>
 * @throws SBMLConstructorException
 * Thrown if the given <code>level</code> and <code>version</code> combination are invalid
 * or if this object is incompatible with the given level and version.
   <p>
   * <p>
 * @note Attempting to add an object to an {@link SBMLDocument} having a different
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
 * {@link SBMLDocument}), knowledge of the intented SBML Level and Version help
 * libSBML determine such things as whether it is valid to assign a
 * particular value to an attribute.
   */ public
 Constraint(long level, long version) throws org.sbml.libsbml.SBMLConstructorException {
    this(libsbmlJNI.new_Constraint__SWIG_0(level, version), true);
  }

  
/**
   * Creates a new {@link Constraint} using the given {@link SBMLNamespaces} object
   * <code>sbmlns</code>.
   <p>
   * <p>
 * The {@link SBMLNamespaces} object encapsulates SBML Level/Version/namespaces
 * information.  It is used to communicate the SBML Level, Version, and (in
 * Level&nbsp;3) packages used in addition to SBML Level&nbsp;3 Core.  A
 * common approach to using libSBML's {@link SBMLNamespaces} facilities is to create an
 * {@link SBMLNamespaces} object somewhere in a program once, then hand that object
 * as needed to object constructors that accept {@link SBMLNamespaces} as arguments.
   <p>
   * @param sbmlns an {@link SBMLNamespaces} object.
   <p>
   * <p>
 * @throws SBMLConstructorException
 * Thrown if the given <code>sbmlns</code> is inconsistent or incompatible
 * with this object.
   <p>
   * <p>
 * @note Attempting to add an object to an {@link SBMLDocument} having a different
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
 * {@link SBMLDocument}), knowledge of the intented SBML Level and Version help
 * libSBML determine such things as whether it is valid to assign a
 * particular value to an attribute.
   */ public
 Constraint(SBMLNamespaces sbmlns) throws org.sbml.libsbml.SBMLConstructorException {
    this(libsbmlJNI.new_Constraint__SWIG_1(SBMLNamespaces.getCPtr(sbmlns), sbmlns), true);
  }

  
/**
   * Copy constructor; creates a copy of this {@link Constraint}.
   <p>
   * @param orig the object to copy.
   */ public
 Constraint(Constraint orig) throws org.sbml.libsbml.SBMLConstructorException {
    this(libsbmlJNI.new_Constraint__SWIG_2(Constraint.getCPtr(orig), orig), true);
  }

  
/**
   * Creates and returns a deep copy of this {@link Constraint} object.
   <p>
   * @return the (deep) copy of this {@link Constraint} object.
   */ public
 Constraint cloneObject() {
    long cPtr = libsbmlJNI.Constraint_cloneObject(swigCPtr, this);
    return (cPtr == 0) ? null : new Constraint(cPtr, true);
  }

  
/**
   * Get the message, if any, associated with this {@link Constraint}
   <p>
   * @return the message for this {@link Constraint}, as an {@link XMLNode}.
   */ public
 XMLNode getMessage() {
    long cPtr = libsbmlJNI.Constraint_getMessage(swigCPtr, this);
    return (cPtr == 0) ? null : new XMLNode(cPtr, false);
  }

  
/**
   * Get the message string, if any, associated with this {@link Constraint}
   <p>
   * @return the message for this {@link Constraint}, as a string.
   */ public
 String getMessageString() {
    return libsbmlJNI.Constraint_getMessageString(swigCPtr, this);
  }

  
/**
   * Get the mathematical expression of this {@link Constraint}
   <p>
   * @return the math for this {@link Constraint}, as an {@link ASTNode}, or <code>null</code> if the math is not set.
   */ public
 ASTNode getMath() {
    long cPtr = libsbmlJNI.Constraint_getMath(swigCPtr, this);
    return (cPtr == 0) ? null : new ASTNode(cPtr, false);
  }

  
/**
   * Predicate returning <code>true</code> if a
   * message is defined for this {@link Constraint}.
   <p>
   * @return <code>true</code> if the message of this {@link Constraint} is set,
   * <code>false</code> otherwise.
   */ public
 boolean isSetMessage() {
    return libsbmlJNI.Constraint_isSetMessage(swigCPtr, this);
  }

  
/**
   * Predicate returning <code>true</code> if a
   * mathematical formula is defined for this {@link Constraint}.
   <p>
   * @return <code>true</code> if the 'math' subelement for this {@link Constraint} is
   * set, <code>false</code> otherwise.
   */ public
 boolean isSetMath() {
    return libsbmlJNI.Constraint_isSetMath(swigCPtr, this);
  }

  
/**
   * Sets the message of this {@link Constraint}.
   <p>
   * The {@link XMLNode} tree passed in <code>xhtml</code> is copied.
   <p>
   * @param xhtml an XML tree containing XHTML content.
   <p>
   * <p>
 * @return integer value indicating success/failure of the
 * function.   The possible values
 * returned by this function are:
   * <ul>
   * <li> {@link libsbmlConstants#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS}
   * <li> {@link libsbmlConstants#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT}
   * </ul>
   */ public
 int setMessage(XMLNode xhtml) {
    return libsbmlJNI.Constraint_setMessage__SWIG_0(swigCPtr, this, XMLNode.getCPtr(xhtml), xhtml);
  }

  
/**
   * Sets the message of this {@link Constraint}.
   <p>
   * @param message an XML string that is to be used as the content of the
   * 'message' subelement of this object.
   <p>
   * @param addXHTMLMarkup a boolean indicating whether to wrap the contents
   * of the <code>message</code> argument with XHTML paragraph (<code>&lt;p&gt;</code>)
   * tags.  This is appropriate when the string in <code>message</code> does not already
   * containg the appropriate XHTML markup.
   <p>
   * <p>
 * @return integer value indicating success/failure of the
 * function.   The possible values
 * returned by this function are:
   * <ul>
   * <li> {@link libsbmlConstants#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS}
   * <li> {@link libsbmlConstants#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT}
   * </ul>
   */ public
 int setMessage(String message, boolean addXHTMLMarkup) {
    return libsbmlJNI.Constraint_setMessage__SWIG_1(swigCPtr, this, message, addXHTMLMarkup);
  }

  
/**
   * Sets the message of this {@link Constraint}.
   <p>
   * @param message an XML string that is to be used as the content of the
   * 'message' subelement of this object.
   <p>
   * @param addXHTMLMarkup a boolean indicating whether to wrap the contents
   * of the <code>message</code> argument with XHTML paragraph (<code>&lt;p&gt;</code>)
   * tags.  This is appropriate when the string in <code>message</code> does not already
   * containg the appropriate XHTML markup.
   <p>
   * <p>
 * @return integer value indicating success/failure of the
 * function.   The possible values
 * returned by this function are:
   * <ul>
   * <li> {@link libsbmlConstants#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS}
   * <li> {@link libsbmlConstants#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT}
   * </ul>
   */ public
 int setMessage(String message) {
    return libsbmlJNI.Constraint_setMessage__SWIG_2(swigCPtr, this, message);
  }

  
/**
   * Sets the mathematical expression of this {@link Constraint} to a copy of the
   * AST given as <code>math</code>.
   <p>
   * @param math an {@link ASTNode} expression to be assigned as the 'math'
   * subelement of this {@link Constraint}.
   <p>
   * <p>
 * @return integer value indicating success/failure of the
 * function.   The possible values
 * returned by this function are:
   * <ul>
   * <li> {@link libsbmlConstants#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS}
   * <li> {@link libsbmlConstants#LIBSBML_INVALID_OBJECT LIBSBML_INVALID_OBJECT}
   * </ul>
   */ public
 int setMath(ASTNode math) {
    return libsbmlJNI.Constraint_setMath(swigCPtr, this, ASTNode.getCPtr(math), math);
  }

  
/**
   * Unsets the 'message' subelement of this {@link Constraint}.
   <p>
   * <p>
 * @return integer value indicating success/failure of the
 * function.   The possible values
 * returned by this function are:
   * <ul>
   * <li> {@link libsbmlConstants#LIBSBML_OPERATION_SUCCESS LIBSBML_OPERATION_SUCCESS}
   * <li> {@link libsbmlConstants#LIBSBML_OPERATION_FAILED LIBSBML_OPERATION_FAILED}
   * </ul>
   */ public
 int unsetMessage() {
    return libsbmlJNI.Constraint_unsetMessage(swigCPtr, this);
  }

  
/**
   * <p>
 * Replaces all uses of a given <code>SIdRef</code> type attribute value with another
 * value.
 <p>
 * <p>
 * In SBML, object identifiers are of a data type called <code>SId</code>.
 * In SBML Level&nbsp;3, an explicit data type called <code>SIdRef</code> was
 * introduced for attribute values that refer to <code>SId</code> values; in
 * previous Levels of SBML, this data type did not exist and attributes were
 * simply described to as 'referring to an identifier', but the effective
 * data type was the same as <code>SIdRef</code> in Level&nbsp;3.  These and
 * other methods of libSBML refer to the type <code>SIdRef</code> for all
 * Levels of SBML, even if the corresponding SBML specification did not
 * explicitly name the data type.
 <p>
 * This method works by looking at all attributes and (if appropriate)
 * mathematical formulas in MathML content, comparing the referenced
 * identifiers to the value of <code>oldid</code>.  If any matches are found, the
 * matching values are replaced with <code>newid</code>.  The method does <em>not</em>
 * descend into child elements.
 <p>
 * @param oldid the old identifier.
 * @param newid the new identifier.
   */ public
 void renameSIdRefs(String oldid, String newid) {
    libsbmlJNI.Constraint_renameSIdRefs(swigCPtr, this, oldid, newid);
  }

  
/**
   * <p>
 * Replaces all uses of a given <code>UnitSIdRef</code> type attribute value with
 * another value.
 <p>
 * <p>
 * In SBML, unit definitions have identifiers of type <code>UnitSId</code>.  In
 * SBML Level&nbsp;3, an explicit data type called <code>UnitSIdRef</code> was
 * introduced for attribute values that refer to <code>UnitSId</code> values; in
 * previous Levels of SBML, this data type did not exist and attributes were
 * simply described to as 'referring to a unit identifier', but the effective
 * data type was the same as <code>UnitSIdRef</code> in Level&nbsp;3.  These and
 * other methods of libSBML refer to the type <code>UnitSIdRef</code> for all
 * Levels of SBML, even if the corresponding SBML specification did not
 * explicitly name the data type.
 <p>
 * This method works by looking at all unit identifier attribute values
 * (including, if appropriate, inside mathematical formulas), comparing the
 * referenced unit identifiers to the value of <code>oldid</code>.  If any matches
 * are found, the matching values are replaced with <code>newid</code>.  The method
 * does <em>not</em> descend into child elements.
 <p>
 * @param oldid the old identifier.
 * @param newid the new identifier.
   */ public
 void renameUnitSIdRefs(String oldid, String newid) {
    libsbmlJNI.Constraint_renameUnitSIdRefs(swigCPtr, this, oldid, newid);
  }

  
/** * @internal */ public
 void replaceSIDWithFunction(String id, ASTNode function) {
    libsbmlJNI.Constraint_replaceSIDWithFunction(swigCPtr, this, id, ASTNode.getCPtr(function), function);
  }

  
/**
   * Returns the libSBML type code for this SBML object.
   <p>
   * <p>
 * LibSBML attaches an identifying code to every kind of SBML object.  These
 * are integer constants known as <em>SBML type codes</em>.  The names of all
 * the codes begin with the characters <code>SBML_</code>.
 * In the Java language interface for libSBML, the
 * type codes are defined as static integer constants in the interface class
 * {@link libsbmlConstants}.    Note that different Level&nbsp;3
 * package plug-ins may use overlapping type codes; to identify the package
 * to which a given object belongs, call the <code>getPackageName()</code>
 * method on the object.
   <p>
   * @return the SBML type code for this object:
   * {@link libsbmlConstants#SBML_CONSTRAINT SBML_CONSTRAINT} (default).
   <p>
   * <p>
 * @warning <span class='warning'>The specific integer values of the possible
 * type codes may be reused by different libSBML plug-ins for SBML Level&nbsp;3.
 * packages,  To fully identify the correct code, <strong>it is necessary to
 * invoke both getTypeCode() and getPackageName()</strong>.</span>
   <p>
   * @see #getElementName()
   * @see #getPackageName()
   */ public
 int getTypeCode() {
    return libsbmlJNI.Constraint_getTypeCode(swigCPtr, this);
  }

  
/**
   * Returns the XML element name of this object, which for {@link Constraint}, is
   * always <code>'constraint'.</code>
   <p>
   * @return the name of this element, i.e., <code>'constraint'.</code>
   */ public
 String getElementName() {
    return libsbmlJNI.Constraint_getElementName(swigCPtr, this);
  }

  
/**
   * Predicate returning <code>true</code> if
   * all the required elements for this {@link Constraint} object
   * have been set.
   <p>
   * @note The required elements for a {@link Constraint} object are:
   * <ul>
   * <li> 'math' (through SBML Level&nbsp;3 Version&nbsp;1 only; not 
   *     required in Level&nbsp;3 Version&nbsp;2+.)
   *
   * </ul> <p>
   * @return a boolean value indicating whether all the required
   * elements for this object have been defined.
   */ public
 boolean hasRequiredElements() {
    return libsbmlJNI.Constraint_hasRequiredElements(swigCPtr, this);
  }

}
