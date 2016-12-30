//
// File generated by rootcint at Fri Dec 30 15:06:11 2016

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME SclassDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "SclassDict.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOTShadow {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOTShadow
// END OF SHADOWS

namespace ROOTDict {
   void Sclass_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void *new_Sclass(void *p = 0);
   static void *newArray_Sclass(Long_t size, void *p);
   static void delete_Sclass(void *p);
   static void deleteArray_Sclass(void *p);
   static void destruct_Sclass(void *p);

   // Function generating the singleton type initializer
   static ROOT::TGenericClassInfo *GenerateInitInstanceLocal(const ::Sclass*)
   {
      ::Sclass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Sclass >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Sclass", ::Sclass::Class_Version(), "./Sclass.h", 4,
                  typeid(::Sclass), ::ROOT::DefineBehavior(ptr, ptr),
                  &::Sclass::Dictionary, isa_proxy, 4,
                  sizeof(::Sclass) );
      instance.SetNew(&new_Sclass);
      instance.SetNewArray(&newArray_Sclass);
      instance.SetDelete(&delete_Sclass);
      instance.SetDeleteArray(&deleteArray_Sclass);
      instance.SetDestructor(&destruct_Sclass);
      return &instance;
   }
   ROOT::TGenericClassInfo *GenerateInitInstance(const ::Sclass*)
   {
      return GenerateInitInstanceLocal((::Sclass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Sclass*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOTDict

//______________________________________________________________________________
atomic_TClass_ptr Sclass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Sclass::Class_Name()
{
   return "Sclass";
}

//______________________________________________________________________________
const char *Sclass::ImplFileName()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::Sclass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Sclass::ImplFileLine()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::Sclass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void Sclass::Dictionary()
{
   fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::Sclass*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *Sclass::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gCINTMutex); if(!fgIsA) {fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::Sclass*)0x0)->GetClass();} }
   return fgIsA;
}

//______________________________________________________________________________
void Sclass::Streamer(TBuffer &R__b)
{
   // Stream an object of class Sclass.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Sclass::Class(),this);
   } else {
      R__b.WriteClassBuffer(Sclass::Class(),this);
   }
}

//______________________________________________________________________________
void Sclass::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class Sclass.
      TClass *R__cl = ::Sclass::IsA();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fX", &fX);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fY", &fY);
      TObject::ShowMembers(R__insp);
}

namespace ROOTDict {
   // Wrappers around operator new
   static void *new_Sclass(void *p) {
      return  p ? new(p) ::Sclass : new ::Sclass;
   }
   static void *newArray_Sclass(Long_t nElements, void *p) {
      return p ? new(p) ::Sclass[nElements] : new ::Sclass[nElements];
   }
   // Wrapper around operator delete
   static void delete_Sclass(void *p) {
      delete ((::Sclass*)p);
   }
   static void deleteArray_Sclass(void *p) {
      delete [] ((::Sclass*)p);
   }
   static void destruct_Sclass(void *p) {
      typedef ::Sclass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOTDict for class ::Sclass

/********************************************************
* SclassDict.cpp
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableSclassDict();

extern "C" void G__set_cpp_environmentSclassDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("Sclass.h");
  G__cpp_reset_tagtableSclassDict();
}
#include <new>
extern "C" int G__cpp_dllrevSclassDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* Sclass */
static int G__SclassDict_168_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   Sclass* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new Sclass[n];
     } else {
       p = new((void*) gvp) Sclass[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new Sclass;
     } else {
       p = new((void*) gvp) Sclass;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__SclassDictLN_Sclass));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((Sclass*) G__getstructoffset())->SetX((float) G__double(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((Sclass*) G__getstructoffset())->SetY((float) G__double(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) Sclass::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) Sclass::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) Sclass::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      Sclass::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((Sclass*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) Sclass::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) Sclass::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) Sclass::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__SclassDict_168_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) Sclass::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__SclassDict_168_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   Sclass* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new Sclass(*(Sclass*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__SclassDictLN_Sclass));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef Sclass G__TSclass;
static int G__SclassDict_168_0_18(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (Sclass*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((Sclass*) (soff+(sizeof(Sclass)*i)))->~G__TSclass();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (Sclass*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((Sclass*) (soff))->~G__TSclass();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__SclassDict_168_0_19(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   Sclass* dest = (Sclass*) G__getstructoffset();
   *dest = *(Sclass*) libp->para[0].ref;
   const Sclass& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* Sclass */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncSclassDict {
 public:
  G__Sizep2memfuncSclassDict(): p(&G__Sizep2memfuncSclassDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncSclassDict::*p)();
};

size_t G__get_sizep2memfuncSclassDict()
{
  G__Sizep2memfuncSclassDict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceSclassDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__SclassDictLN_Sclass))) {
     Sclass *G__Lderived;
     G__Lderived=(Sclass*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__SclassDictLN_Sclass),G__get_linked_tagnum(&G__SclassDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableSclassDict() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__SclassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__SclassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__SclassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__SclassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__SclassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__SclassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__SclassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__SclassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__SclassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__SclassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* Sclass */
static void G__setup_memvarSclass(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__SclassDictLN_Sclass));
   { Sclass *p; p=(Sclass*)0x1000; if (p) { }
   G__memvar_setup((void*)0,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fX=",0,(char*)NULL);
   G__memvar_setup((void*)0,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fY=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__SclassDictLN_TClass),G__defined_typename("atomic_TClass_ptr"),-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarSclassDict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncSclass(void) {
   /* Sclass */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__SclassDictLN_Sclass));
   G__memfunc_setup("Sclass",617,G__SclassDict_168_0_1, 105, G__get_linked_tagnum(&G__SclassDictLN_Sclass), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Print",525,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 8, "C - 'Option_t' 10 '\"\"' opt", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("SetX",388,G__SclassDict_168_0_3, 121, -1, -1, 0, 1, 1, 1, 0, "f - - 0 - x", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("SetY",389,G__SclassDict_168_0_4, 121, -1, -1, 0, 1, 1, 1, 0, "f - - 0 - y", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__SclassDict_168_0_5, 85, G__get_linked_tagnum(&G__SclassDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&Sclass::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__SclassDict_168_0_6, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&Sclass::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__SclassDict_168_0_7, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&Sclass::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__SclassDict_168_0_8, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&Sclass::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__SclassDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__SclassDict_168_0_12, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__SclassDict_168_0_13, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&Sclass::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__SclassDict_168_0_14, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&Sclass::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__SclassDict_168_0_15, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&Sclass::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__SclassDict_168_0_16, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&Sclass::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("Sclass", 617, G__SclassDict_168_0_17, (int) ('i'), G__get_linked_tagnum(&G__SclassDictLN_Sclass), -1, 0, 1, 1, 1, 0, "u 'Sclass' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~Sclass", 743, G__SclassDict_168_0_18, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__SclassDict_168_0_19, (int) ('u'), G__get_linked_tagnum(&G__SclassDictLN_Sclass), -1, 1, 1, 1, 1, 0, "u 'Sclass' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncSclassDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalSclassDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {
}

static void G__cpp_setup_func19() {
}

static void G__cpp_setup_func20() {
}

static void G__cpp_setup_func21() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcSclassDict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
  G__cpp_setup_func18();
  G__cpp_setup_func19();
  G__cpp_setup_func20();
  G__cpp_setup_func21();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__SclassDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__SclassDictLN_Sclass = { "Sclass" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableSclassDict() {
  G__SclassDictLN_TClass.tagnum = -1 ;
  G__SclassDictLN_TBuffer.tagnum = -1 ;
  G__SclassDictLN_TMemberInspector.tagnum = -1 ;
  G__SclassDictLN_TObject.tagnum = -1 ;
  G__SclassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__SclassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__SclassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__SclassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__SclassDictLN_Sclass.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableSclassDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__SclassDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__SclassDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__SclassDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__SclassDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__SclassDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__SclassDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__SclassDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__SclassDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__SclassDictLN_Sclass),sizeof(Sclass),-1,291072,(char*)NULL,G__setup_memvarSclass,G__setup_memfuncSclass);
}
extern "C" void G__cpp_setupSclassDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupSclassDict()");
  G__set_cpp_environmentSclassDict();
  G__cpp_setup_tagtableSclassDict();

  G__cpp_setup_inheritanceSclassDict();

  G__cpp_setup_typetableSclassDict();

  G__cpp_setup_memvarSclassDict();

  G__cpp_setup_memfuncSclassDict();
  G__cpp_setup_globalSclassDict();
  G__cpp_setup_funcSclassDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncSclassDict();
  return;
}
class G__cpp_setup_initSclassDict {
  public:
    G__cpp_setup_initSclassDict() { G__add_setup_func("SclassDict",(G__incsetup)(&G__cpp_setupSclassDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initSclassDict() { G__remove_setup_func("SclassDict"); }
};
G__cpp_setup_initSclassDict G__cpp_setup_initializerSclassDict;

