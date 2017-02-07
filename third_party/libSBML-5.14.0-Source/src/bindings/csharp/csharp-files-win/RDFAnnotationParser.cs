/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace libsbml {

 using System;
 using System.Runtime.InteropServices;

/** 
 * @sbmlpackage{core}
 *
@htmlinclude pkg-marker-core.html MIRIAM-compliant RDF annotation reader/writer.
 *
 * @htmlinclude not-sbml-warning.html
 *
 * RDFAnnotationParser is a libSBML construct used as part of the libSBML
 * support for annotations conforming to the guidelines specified by MIRIAM
 * (<a target='_blank'
 * href='http://www.nature.com/nbt/journal/v23/n12/abs/nbt1156.html'>'Minimum
 * Information Requested in the Annotation of biochemical Models'</a>,
 * <i>Nature Biotechnology</i>, vol. 23, no. 12, Dec. 2005).  Section 6 of
 * the SBML Level&nbsp;2 and Level&nbsp;3 specification documents defines a
 * recommended way of encoding MIRIAM information using a subset of RDF (<a
 * target='_blank' href='http://www.w3.org/RDF/'>Resource Description
 * Format</a>).  The general scheme is as follows.  A set of RDF-based
 * annotations attached to a given SBML <code>&lt;annotation&gt;</code>
 * element are read by RDFAnnotationParser and converted into a list of
 * CVTerm objects.  There are different versions of the main method, @if clike RDFAnnotationParser::parseRDFAnnotation(XMLNode annotation, %List *CVTerms) @endif@if java RDFAnnotationParser::parseRDFAnnotation(XMLNode, %CVTermList) @endif and
 * RDFAnnotationParser::parseRDFAnnotation(XMLNode annotation), used
 * depending on whether the annotation in question concerns the MIRIAM model
 * history or other MIRIAM resource annotations.  A special object class,
 * ModelHistory, is used to make it easier to manipulate model history
 * annotations.
 *
 * All of the methods on RDFAnnotationParser are static; the class exists
 * only to encapsulate the annotation and CVTerm parsing and manipulation
 * functionality.
 */

public class RDFAnnotationParser : IDisposable {
	private HandleRef swigCPtr;
	protected bool swigCMemOwn;
	
	internal RDFAnnotationParser(IntPtr cPtr, bool cMemoryOwn)
	{
		swigCMemOwn = cMemoryOwn;
		swigCPtr    = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(RDFAnnotationParser obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (RDFAnnotationParser obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~RDFAnnotationParser() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_RDFAnnotationParser(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  
/**
   * Parses an annotation into a ModelHistory class instance.
   *
   * This is used to take an annotation that has been read into an SBML
   * model, identify the RDF elements representing model history
   * information, and create a list of corresponding CVTerm objects.
   *
   * @param annotation XMLNode containing the annotation.
   * @param stream optional XMLInputStream that facilitates error logging.
   * @param metaId optional metaId, if set only the RDF annotation for this metaId will be returned.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   *
   * @return a pointer to the ModelHistory created.
   */ public
 static ModelHistory parseRDFAnnotation(XMLNode annotation, string metaId, XMLInputStream stream) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_parseRDFAnnotation__SWIG_0(XMLNode.getCPtr(annotation), metaId, XMLInputStream.getCPtr(stream));
    ModelHistory ret = (cPtr == IntPtr.Zero) ? null : new ModelHistory(cPtr, false);
    return ret;
  }

  
/**
   * Parses an annotation into a ModelHistory class instance.
   *
   * This is used to take an annotation that has been read into an SBML
   * model, identify the RDF elements representing model history
   * information, and create a list of corresponding CVTerm objects.
   *
   * @param annotation XMLNode containing the annotation.
   * @param stream optional XMLInputStream that facilitates error logging.
   * @param metaId optional metaId, if set only the RDF annotation for this metaId will be returned.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   *
   * @return a pointer to the ModelHistory created.
   */ public
 static ModelHistory parseRDFAnnotation(XMLNode annotation, string metaId) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_parseRDFAnnotation__SWIG_1(XMLNode.getCPtr(annotation), metaId);
    ModelHistory ret = (cPtr == IntPtr.Zero) ? null : new ModelHistory(cPtr, false);
    return ret;
  }

  
/**
   * Parses an annotation into a ModelHistory class instance.
   *
   * This is used to take an annotation that has been read into an SBML
   * model, identify the RDF elements representing model history
   * information, and create a list of corresponding CVTerm objects.
   *
   * @param annotation XMLNode containing the annotation.
   * @param stream optional XMLInputStream that facilitates error logging.
   * @param metaId optional metaId, if set only the RDF annotation for this metaId will be returned.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   *
   * @return a pointer to the ModelHistory created.
   */ public
 static ModelHistory parseRDFAnnotation(XMLNode annotation) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_parseRDFAnnotation__SWIG_2(XMLNode.getCPtr(annotation));
    ModelHistory ret = (cPtr == IntPtr.Zero) ? null : new ModelHistory(cPtr, false);
    return ret;
  }

  
/**
   * Creates a blank annotation and returns its root XMLNode object.
   *
   * This creates a completely empty SBML <code>&lt;annotation&gt;</code>
   * element.  It is not attached to any SBML element.  An example of how
   * this might be used is illustrated in the following code fragment.  In
   * this example, suppose that @c content is an XMLNode object previously
   * created, containing MIRIAM-style annotations, and that @c sbmlObject
   * is an SBML object derived from SBase (e.g., a Model, or a Species, or
   * a Compartment, etc.).  Then:@if clike
@code{.cpp}
int success;                              // Status code variable.

XMLNode RDF = createRDFAnnotation();     // Create XML structure.
success = RDF->addChild(...content...);   // Put some content into it.
...                                       // Check return code value.

XMLNode ann = createAnnotation();        // Create <annotation>.
success = ann->addChild(RDF);             // Put the annotation into it.
...                                       // Check return code value.

success = sbmlObject->setAnnotation(ann); // Set object's annotation.
...                                       // Check return code value.
@endcode
   * @endif@if java
@code{.java}
int success;                                   // Status code variable.

XMLNode RDF = createRDFAnnotation();          // Create XML structure.
success      = RDF.addChild(...content...);    // Put some content into it.
...                                            // Check return code value.

XMLNode ann = createAnnotation();             // Create <annotation>.
success      = ann.addChild(RDF);              // Put the annotation into it.
...                                            // Check return code value.

success      = sbmlObject.setAnnotation(ann); // Set object's annotation.
...                                            // Check return code value.
@endcode
   * @endif@if python
@code{.py}
RDF     = RDFAnnotationParser.createRDFAnnotation() # Create XML structure.
success = RDF.addChild(...content...)               # Put some content into it.
...                                                 # Check return code value.

annot   = RDFAnnotationParser.createAnnotation()    # Create <annotation>.
success = annot.addChild(RDF)                       # Put the annotation into it.
...                                                 # Check return code value.

success = sbmlObject.setAnnotation(annot)           # Set object's annotation.
...                                                 # Check return code value.
@endcode
   * @endif
   * The SBML specification contains more information about the format of
   * annotations.  We urge readers to consult Section&nbsp;6 of the SBML
   * Level&nbsp;2 (Versions 2&ndash;4) and SBML Level&nbsp;3 specification
   * documents.
   *
   * @return a pointer to an XMLNode for the annotation.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   *
   * @see @if clike createRDFAnnotation() @else RDFAnnotationParser::createRDFAnnotation() @endif
   */ public
 static XMLNode createAnnotation() {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_createAnnotation();
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Creates a blank RDF element suitable for use in SBML annotations.
   *
   * The annotation created by this method has namespace declarations for
   * all the relevant XML namespaces used in RDF annotations and also has
   * an empty RDF element.  The result is the following XML:
@verbatim
<rdf:RDF xmlns:rdf='http://www.w3.org/1999/02/22-rdf-syntax-ns#'
         xmlns:dc='http://purl.org/dc/elements/1.1/'
         xmlns:dcterms='http://purl.org/dc/terms/'
         xmlns:vCard='http://www.w3.org/2001/vcard-rdf/3.0#'
         xmlns:bqbiol='http://biomodels.net/biology-qualifiers/'
         xmlns:bqmodel='http://biomodels.net/model-qualifiers/' >

</rdf:RDF>
@endverbatim
   *
   * Note that this does not create the containing SBML
   * <code>&lt;annotation&gt;</code> element; the method
   * @if clike createAnnotation()@else RDFAnnotationParser::createAnnotation()@endif
   * is available for creating the container.
   *
   * @return a pointer to an XMLNode.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   *
   * @see @if clike createAnnotation() @else RDFAnnotationParser::createAnnotation() @endif
   */ public
 static XMLNode createRDFAnnotation(long level, long version) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_createRDFAnnotation__SWIG_0(level, version);
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Creates a blank RDF element suitable for use in SBML annotations.
   *
   * The annotation created by this method has namespace declarations for
   * all the relevant XML namespaces used in RDF annotations and also has
   * an empty RDF element.  The result is the following XML:
@verbatim
<rdf:RDF xmlns:rdf='http://www.w3.org/1999/02/22-rdf-syntax-ns#'
         xmlns:dc='http://purl.org/dc/elements/1.1/'
         xmlns:dcterms='http://purl.org/dc/terms/'
         xmlns:vCard='http://www.w3.org/2001/vcard-rdf/3.0#'
         xmlns:bqbiol='http://biomodels.net/biology-qualifiers/'
         xmlns:bqmodel='http://biomodels.net/model-qualifiers/' >

</rdf:RDF>
@endverbatim
   *
   * Note that this does not create the containing SBML
   * <code>&lt;annotation&gt;</code> element; the method
   * @if clike createAnnotation()@else RDFAnnotationParser::createAnnotation()@endif
   * is available for creating the container.
   *
   * @return a pointer to an XMLNode.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   *
   * @see @if clike createAnnotation() @else RDFAnnotationParser::createAnnotation() @endif
   */ public
 static XMLNode createRDFAnnotation(long level) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_createRDFAnnotation__SWIG_1(level);
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Creates a blank RDF element suitable for use in SBML annotations.
   *
   * The annotation created by this method has namespace declarations for
   * all the relevant XML namespaces used in RDF annotations and also has
   * an empty RDF element.  The result is the following XML:
@verbatim
<rdf:RDF xmlns:rdf='http://www.w3.org/1999/02/22-rdf-syntax-ns#'
         xmlns:dc='http://purl.org/dc/elements/1.1/'
         xmlns:dcterms='http://purl.org/dc/terms/'
         xmlns:vCard='http://www.w3.org/2001/vcard-rdf/3.0#'
         xmlns:bqbiol='http://biomodels.net/biology-qualifiers/'
         xmlns:bqmodel='http://biomodels.net/model-qualifiers/' >

</rdf:RDF>
@endverbatim
   *
   * Note that this does not create the containing SBML
   * <code>&lt;annotation&gt;</code> element; the method
   * @if clike createAnnotation()@else RDFAnnotationParser::createAnnotation()@endif
   * is available for creating the container.
   *
   * @return a pointer to an XMLNode.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   *
   * @see @if clike createAnnotation() @else RDFAnnotationParser::createAnnotation() @endif
   */ public
 static XMLNode createRDFAnnotation() {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_createRDFAnnotation__SWIG_2();
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Takes a list of CVTerm objects and creates a the RDF 'Description'
   * element.
   *
   * This essentially takes the given SBML object, reads out the CVTerm
   * objects attached to it, creates an RDF 'Description' element to hold
   * the terms, and adds each term with appropriate qualifiers.
   *
   * @param obj the SBML object to start from.
   *
   * @return the XMLNode tree corresponding to the Description element of
   * an RDF annotation.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   */ public
 static XMLNode createCVTerms(SBase obj) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_createCVTerms(SBase.getCPtr(obj));
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Takes a list of CVTerm objects and creates a complete SBML annotation
   * around it.
   *
   * This essentially takes the given SBML object, reads out the CVTerm
   * objects attached to it, calls @if clike createRDFAnnotation()@else
   * RDFAnnotationParser::createRDFAnnotation()@endif to create an RDF
   * annotation to hold the terms, and finally calls @if clike
   * createAnnotation()@else
   * RDFAnnotationParser::createAnnotation()@endif to wrap the result as
   * an SBML <code>&lt;annotation&gt;</code> element.
   *
   * @param obj the SBML object to start from.
   *
   * @return the XMLNode tree corresponding to the annotation.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   */ public
 static XMLNode parseCVTerms(SBase obj) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_parseCVTerms(SBase.getCPtr(obj));
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Reads the model history and cvTerms stored in @p obj and creates the
   * XML structure for an SBML annotation representing that metadata if 
   * there is a model history stored in @p obj.
   *
   * @param obj any SBase object.
   *
   * @return the XMLNode corresponding to an annotation containing 
   * MIRIAM-compliant model history and CV term information in RDF format.
   *
   * @note If the object does not have a history element stored then
   * @c null is returned even if CVTerms are present.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   */ public
 static XMLNode parseModelHistory(SBase obj) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_parseModelHistory(SBase.getCPtr(obj));
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Reads the model history stored in @p obj and creates the
   * XML structure for an SBML annotation representing that history.
   *
   * @param obj any SBase object.
   *
   * @return the XMLNode corresponding to an annotation containing 
   * MIRIAM-compliant model history information in RDF format.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   */ public
 static XMLNode parseOnlyModelHistory(SBase obj) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_parseOnlyModelHistory(SBase.getCPtr(obj));
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, false);
    return ret;
  }

  
/**
   * Deletes any SBML MIRIAM RDF annotation found in the given XMLNode 
   * tree and returns
   * any remaining annotation content.
   *
   * The name of the XMLNode given as parameter @p annotation must be
   * 'annotation', or else this method returns @c null.  The method will
   * walk down the XML structure looking for elements that are in the
   * RDF XML namespace, and remove them if they conform to the syntax
   * of a History or CVTerm element.
   *
   * @param annotation the XMLNode tree within which the RDF annotation is
   * to be found and deleted.
   *
   * @return the XMLNode structure that is left after RDF annotations are
   * deleted.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   */ public
 static XMLNode deleteRDFAnnotation(XMLNode annotation) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_deleteRDFAnnotation(XMLNode.getCPtr(annotation));
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, true);
    return ret;
  }

  
/**
   * Deletes any SBML MIRIAM RDF 'History' annotation found in the given 
   * XMLNode tree and returns
   * any remaining annotation content.
   *
   * The name of the XMLNode given as parameter @p annotation must be
   * 'annotation', or else this method returns @c null.  The method will
   * walk down the XML structure looking for elements that are in the
   * RDF XML namespace, and remove any that conform to the syntax of a
   * History element.
   *
   * @param annotation the XMLNode tree within which the RDF annotation is
   * to be found and deleted.
   *
   * @return the XMLNode structure that is left after RDF annotations are
   * deleted.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   */ public
 static XMLNode deleteRDFHistoryAnnotation(XMLNode annotation) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_deleteRDFHistoryAnnotation(XMLNode.getCPtr(annotation));
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, false);
    return ret;
  }

  
/**
   * Deletes any SBML MIRIAM RDF 'CVTerm' annotation found in the given 
   * XMLNode tree and returns
   * any remaining annotation content.
   *
   * The name of the XMLNode given as parameter @p annotation must be
   * 'annotation', or else this method returns @c null.  The method will
   * walk down the XML structure looking for elements that are in the
   * RDF XML namespace, and remove any that conform to the syntax of a
   * CVTerm element.
   *
   * @param annotation the XMLNode tree within which the RDF annotation is
   * to be found and deleted.
   *
   * @return the XMLNode structure that is left after RDF annotations are
   * deleted.
   *
   *
 * @if python @note Because this is a static method on a class, the Python
 * language interface for libSBML will contain two variants.  One will be the
 * expected, normal static method on the class (i.e., a regular
 * <em>methodName</em>), and the other will be a standalone top-level
 * function with the name <em>ClassName_methodName()</em>. This is merely an
 * artifact of how the language interfaces are created in libSBML.  The
 * methods are functionally identical. @endif
 *
 *
   */ public
 static XMLNode deleteRDFCVTermAnnotation(XMLNode annotation) {
    IntPtr cPtr = libsbmlPINVOKE.RDFAnnotationParser_deleteRDFCVTermAnnotation(XMLNode.getCPtr(annotation));
    XMLNode ret = (cPtr == IntPtr.Zero) ? null : new XMLNode(cPtr, false);
    return ret;
  }

  public static void parseRDFAnnotation(XMLNode annotation, CVTermList CVTerms) {
    libsbmlPINVOKE.RDFAnnotationParser_parseRDFAnnotation__SWIG_3(XMLNode.getCPtr(annotation), CVTermList.getCPtr(CVTerms));
  }

  public static void parseRDFAnnotation(XMLNode annotation, CVTermList CVTerms, string metaId, XMLInputStream stream) {
    libsbmlPINVOKE.RDFAnnotationParser_parseRDFAnnotation__SWIG_4(XMLNode.getCPtr(annotation), CVTermList.getCPtr(CVTerms), metaId, XMLInputStream.getCPtr(stream));
  }

  public static void parseRDFAnnotation(XMLNode annotation, CVTermList CVTerms, string metaId) {
    libsbmlPINVOKE.RDFAnnotationParser_parseRDFAnnotation__SWIG_5(XMLNode.getCPtr(annotation), CVTermList.getCPtr(CVTerms), metaId);
  }

  public RDFAnnotationParser() : this(libsbmlPINVOKE.new_RDFAnnotationParser(), true) {
  }

}

}
