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
@htmlinclude pkg-marker-core.html 
 * @internal
 */

public class SBMLExternalValidator : SBMLValidator {
	private HandleRef swigCPtr;
	
	internal SBMLExternalValidator(IntPtr cPtr, bool cMemoryOwn) : base(libsbmlPINVOKE.SBMLExternalValidator_SWIGUpcast(cPtr), cMemoryOwn)
	{
		//super(libsbmlPINVOKE.SBMLExternalValidatorUpcast(cPtr), cMemoryOwn);
		swigCPtr = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(SBMLExternalValidator obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (SBMLExternalValidator obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~SBMLExternalValidator() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_SBMLExternalValidator(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  
/** */ /* libsbml-internal */ public
 SBMLExternalValidator() : this(libsbmlPINVOKE.new_SBMLExternalValidator__SWIG_0(), true) {
  }

  
/** */ /* libsbml-internal */ public
 SBMLExternalValidator(SBMLExternalValidator orig) : this(libsbmlPINVOKE.new_SBMLExternalValidator__SWIG_1(SBMLExternalValidator.getCPtr(orig)), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/** */ /* libsbml-internal */ public new
 SBMLValidator clone() {
    IntPtr cPtr = libsbmlPINVOKE.SBMLExternalValidator_clone(swigCPtr);
    SBMLValidator ret = (cPtr == IntPtr.Zero) ? null : new SBMLValidator(cPtr, true);
    return ret;
  }

  
/** */ /* libsbml-internal */ public new
 long validate() { return (long)libsbmlPINVOKE.SBMLExternalValidator_validate(swigCPtr); }

  
/** */ /* libsbml-internal */ public
 string getProgram() {
    string ret = libsbmlPINVOKE.SBMLExternalValidator_getProgram(swigCPtr);
    return ret;
  }

  
/** */ /* libsbml-internal */ public
 void setProgram(string program) {
    libsbmlPINVOKE.SBMLExternalValidator_setProgram(swigCPtr, program);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/** */ /* libsbml-internal */ public
 string getOutputFileName() {
    string ret = libsbmlPINVOKE.SBMLExternalValidator_getOutputFileName(swigCPtr);
    return ret;
  }

  
/** */ /* libsbml-internal */ public
 void setOutputFileName(string outputFileName) {
    libsbmlPINVOKE.SBMLExternalValidator_setOutputFileName(swigCPtr, outputFileName);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/** */ /* libsbml-internal */ public
 string getSBMLFileName() {
    string ret = libsbmlPINVOKE.SBMLExternalValidator_getSBMLFileName(swigCPtr);
    return ret;
  }

  
/** */ /* libsbml-internal */ public
 void setSBMLFileName(string sbmlFileName) {
    libsbmlPINVOKE.SBMLExternalValidator_setSBMLFileName(swigCPtr, sbmlFileName);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/** */ /* libsbml-internal */ public
 void clearArguments() {
    libsbmlPINVOKE.SBMLExternalValidator_clearArguments(swigCPtr);
  }

  
/** */ /* libsbml-internal */ public
 void addArgument(string arg) {
    libsbmlPINVOKE.SBMLExternalValidator_addArgument(swigCPtr, arg);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/** */ /* libsbml-internal */ public
 long getNumArguments() { return (long)libsbmlPINVOKE.SBMLExternalValidator_getNumArguments(swigCPtr); }

  
/** */ /* libsbml-internal */ public
 string getArgument(long n) {
    string ret = libsbmlPINVOKE.SBMLExternalValidator_getArgument(swigCPtr, n);
    return ret;
  }

}

}
