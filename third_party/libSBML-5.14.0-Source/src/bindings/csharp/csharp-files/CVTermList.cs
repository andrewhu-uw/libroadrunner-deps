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

public class CVTermList : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal CVTermList(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(CVTermList obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~CVTermList() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_CVTermList(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public CVTermList() : this(libsbmlPINVOKE.new_CVTermList(), true) {
  }

  public void add(CVTerm item) {
    libsbmlPINVOKE.CVTermList_add(swigCPtr, CVTerm.getCPtr(item));
  }

  public CVTerm get(uint n) {
    IntPtr cPtr = libsbmlPINVOKE.CVTermList_get(swigCPtr, n);
    CVTerm ret = (cPtr == IntPtr.Zero) ? null : new CVTerm(cPtr, false);
    return ret;
  }

  public void prepend(CVTerm item) {
    libsbmlPINVOKE.CVTermList_prepend(swigCPtr, CVTerm.getCPtr(item));
  }

  public CVTerm remove(uint n) {
    IntPtr cPtr = libsbmlPINVOKE.CVTermList_remove(swigCPtr, n);
    CVTerm ret = (cPtr == IntPtr.Zero) ? null : new CVTerm(cPtr, false);
    return ret;
  }

  public uint getSize() {
    uint ret = libsbmlPINVOKE.CVTermList_getSize(swigCPtr);
    return ret;
  }

}

}
