/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) casadi_gen_ ## ID
#endif

#include <math.h>
#include <casadi/mem.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_f1 CASADI_PREFIX(f1)
#define casadi_f2 CASADI_PREFIX(f2)
#define casadi_f3 CASADI_PREFIX(f3)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s1[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s2[20] = {16, 1, 0, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
static const casadi_int casadi_s3[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s4[5] = {1, 1, 0, 1, 0};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* state_from_gz:(x_gz[14])->(x[14]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0] ? arg[0][0] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0] ? arg[0][1] : 0;
  a0=(-a0);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][2] : 0;
  a0=(-a0);
  if (res[0]!=0) res[0][2]=a0;
  a0=1.;
  a1=0.;
  a2=2.;
  a3=arg[0] ? arg[0][4] : 0;
  a4=arg[0] ? arg[0][5] : 0;
  a5=(a3*a4);
  a6=arg[0] ? arg[0][3] : 0;
  a7=arg[0] ? arg[0][6] : 0;
  a8=(a6*a7);
  a9=(a5+a8);
  a9=(a2*a9);
  a5=(a5-a8);
  a5=(a2*a5);
  a8=(a9-a5);
  a10=casadi_sq(a6);
  a11=casadi_sq(a7);
  a12=(a10+a11);
  a13=casadi_sq(a3);
  a12=(a12-a13);
  a14=casadi_sq(a4);
  a12=(a12-a14);
  a8=(a8+a12);
  a8=(a1<a8);
  a15=(a4*a7);
  a16=(a6*a3);
  a17=(a15+a16);
  a17=(a2*a17);
  a3=(a3*a7);
  a6=(a6*a4);
  a4=(a3+a6);
  a4=(a2*a4);
  a7=(a17+a4);
  a18=4.;
  a19=5.0000000000000000e-01;
  a20=(a0+a9);
  a20=(a20-a5);
  a20=(a20+a12);
  a20=sqrt(a20);
  a20=(a19*a20);
  a21=(a18*a20);
  a7=(a7/a21);
  a7=(a8?a7:0);
  a21=(!a8);
  a22=(-a5);
  a23=(a22<a9);
  a24=(a12<a9);
  a23=(a23&&a24);
  a24=(a0+a9);
  a24=(a24+a5);
  a24=(a24-a12);
  a24=sqrt(a24);
  a24=(a19*a24);
  a25=(a23?a24:0);
  a26=(!a23);
  a22=(a12<a22);
  a27=(a10+a13);
  a27=(a27-a14);
  a27=(a27-a11);
  a10=(a10+a14);
  a10=(a10-a13);
  a10=(a10-a11);
  a11=(a27-a10);
  a13=(a0-a9);
  a13=(a13-a5);
  a13=(a13-a12);
  a13=sqrt(a13);
  a13=(a19*a13);
  a14=(a18*a13);
  a11=(a11/a14);
  a11=(a22?a11:0);
  a14=(!a22);
  a15=(a15-a16);
  a15=(a2*a15);
  a3=(a3-a6);
  a2=(a2*a3);
  a3=(a15+a2);
  a9=(a0-a9);
  a9=(a9+a5);
  a9=(a9+a12);
  a9=sqrt(a9);
  a19=(a19*a9);
  a9=(a18*a19);
  a3=(a3/a9);
  a3=(-a3);
  a3=(a14?a3:0);
  a11=(a11+a3);
  a11=(a26?a11:0);
  a25=(a25+a11);
  a25=(a21?a25:0);
  a7=(a7+a25);
  a25=(a8?a20:0);
  a11=(a17+a4);
  a3=(a18*a24);
  a11=(a11/a3);
  a11=(a23?a11:0);
  a3=(a2-a15);
  a9=(a18*a13);
  a3=(a3/a9);
  a3=(a22?a3:0);
  a9=(a27+a10);
  a12=(a18*a19);
  a9=(a9/a12);
  a9=(a14?a9:0);
  a3=(a3+a9);
  a3=(a26?a3:0);
  a11=(a11+a3);
  a11=(a21?a11:0);
  a25=(a25+a11);
  a25=(a0+a25);
  a7=(a7/a25);
  a11=casadi_sq(a7);
  a3=(a2-a15);
  a9=(a18*a20);
  a3=(a3/a9);
  a3=(a8?a3:0);
  a9=(a27-a10);
  a12=(a18*a24);
  a9=(a9/a12);
  a9=(a23?a9:0);
  a12=(a22?a13:0);
  a5=(a17-a4);
  a6=(a18*a19);
  a5=(a5/a6);
  a5=(a14?a5:0);
  a12=(a12+a5);
  a12=(a26?a12:0);
  a9=(a9+a12);
  a9=(a21?a9:0);
  a3=(a3+a9);
  a3=(a3/a25);
  a9=casadi_sq(a3);
  a11=(a11+a9);
  a27=(a27+a10);
  a20=(a18*a20);
  a27=(a27/a20);
  a8=(a8?a27:0);
  a15=(a15+a2);
  a24=(a18*a24);
  a15=(a15/a24);
  a15=(-a15);
  a23=(a23?a15:0);
  a17=(a17-a4);
  a18=(a18*a13);
  a17=(a17/a18);
  a22=(a22?a17:0);
  a14=(a14?a19:0);
  a22=(a22+a14);
  a26=(a26?a22:0);
  a23=(a23+a26);
  a21=(a21?a23:0);
  a8=(a8+a21);
  a8=(a8/a25);
  a25=casadi_sq(a8);
  a11=(a11+a25);
  a11=sqrt(a11);
  a0=(a0<a11);
  a11=casadi_sq(a7);
  a25=casadi_sq(a3);
  a11=(a11+a25);
  a25=casadi_sq(a8);
  a11=(a11+a25);
  a25=(a7/a11);
  a25=(-a25);
  a25=(a0?a25:0);
  a21=(!a0);
  a7=(a21?a7:0);
  a25=(a25+a7);
  if (res[0]!=0) res[0][3]=a25;
  a25=(a3/a11);
  a25=(-a25);
  a25=(a0?a25:0);
  a3=(a21?a3:0);
  a25=(a25+a3);
  if (res[0]!=0) res[0][4]=a25;
  a11=(a8/a11);
  a11=(-a11);
  a0=(a0?a11:0);
  a21=(a21?a8:0);
  a0=(a0+a21);
  if (res[0]!=0) res[0][5]=a0;
  if (res[0]!=0) res[0][6]=a1;
  a1=arg[0] ? arg[0][7] : 0;
  if (res[0]!=0) res[0][7]=a1;
  a1=arg[0] ? arg[0][8] : 0;
  a1=(-a1);
  if (res[0]!=0) res[0][8]=a1;
  a1=arg[0] ? arg[0][9] : 0;
  a1=(-a1);
  if (res[0]!=0) res[0][9]=a1;
  a1=arg[0] ? arg[0][11] : 0;
  if (res[0]!=0) res[0][10]=a1;
  a1=arg[0] ? arg[0][10] : 0;
  if (res[0]!=0) res[0][11]=a1;
  a1=arg[0] ? arg[0][12] : 0;
  a1=(-a1);
  if (res[0]!=0) res[0][12]=a1;
  a1=arg[0] ? arg[0][13] : 0;
  if (res[0]!=0) res[0][13]=a1;
  return 0;
}

CASADI_SYMBOL_EXPORT int state_from_gz(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void state_from_gz_incref(void) {
}

CASADI_SYMBOL_EXPORT void state_from_gz_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int state_from_gz_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int state_from_gz_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* state_from_gz_name_in(casadi_int i){
  switch (i) {
    case 0: return "x_gz";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* state_from_gz_name_out(casadi_int i){
  switch (i) {
    case 0: return "x";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* state_from_gz_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* state_from_gz_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int state_from_gz_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT casadi_functions* state_from_gz_functions(void) {
  static casadi_functions fun = {
    state_from_gz_incref,
    state_from_gz_decref,
    state_from_gz_n_in,
    state_from_gz_n_out,
    state_from_gz_name_in,
    state_from_gz_name_out,
    state_from_gz_sparsity_in,
    state_from_gz_sparsity_out,
    state_from_gz_work,
    state_from_gz
  };
  return &fun;
}
/* rocket_force_moment:(x[14],u[4],p[16])->(F_FLT[3],M_FLT[3]) */
static int casadi_f1(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a5, a6, a7, a8, a9;
  a0=1.0000000000000000e-03;
  a1=arg[0] ? arg[0][7] : 0;
  a2=casadi_sq(a1);
  a3=arg[0] ? arg[0][8] : 0;
  a4=casadi_sq(a3);
  a2=(a2+a4);
  a4=arg[0] ? arg[0][9] : 0;
  a5=casadi_sq(a4);
  a2=(a2+a5);
  a2=sqrt(a2);
  a5=fabs(a2);
  a5=(a0<a5);
  a6=fabs(a1);
  a6=(a0<a6);
  a7=(a3/a1);
  a7=atan(a7);
  a7=(-a7);
  a6=(a6?a7:0);
  a7=fabs(a6);
  a8=4.0000000000000002e-01;
  a7=(a7<a8);
  a9=(a3/a2);
  a10=casadi_sq(a9);
  a11=(a1/a2);
  a12=casadi_sq(a11);
  a10=(a10+a12);
  a10=sqrt(a10);
  a12=fabs(a10);
  a12=(a0<a12);
  a13=(a9/a10);
  a14=arg[2] ? arg[2][9] : 0;
  a15=arg[2] ? arg[2][8] : 0;
  a16=arg[1] ? arg[1][1] : 0;
  a17=arg[1] ? arg[1][3] : 0;
  a18=(a16-a17);
  a6=(a6+a18);
  a6=(a15*a6);
  a6=(a14+a6);
  a18=5.0000000000000000e-01;
  a19=arg[2] ? arg[2][13] : 0;
  a18=(a18*a19);
  a19=casadi_sq(a1);
  a20=casadi_sq(a3);
  a19=(a19+a20);
  a20=casadi_sq(a4);
  a19=(a19+a20);
  a18=(a18*a19);
  a19=(a6*a18);
  a20=arg[2] ? arg[2][12] : 0;
  a19=(a19*a20);
  a13=(a13*a19);
  a13=(-a13);
  a13=(a12?a13:0);
  a13=(a7?a13:0);
  a21=arg[2] ? arg[2][10] : 0;
  a22=arg[2] ? arg[2][11] : 0;
  a6=(a7?a6:0);
  a6=(a6-a14);
  a6=casadi_sq(a6);
  a6=(a22*a6);
  a6=(a21+a6);
  a6=(a6*a18);
  a6=(a6*a20);
  a23=(a6*a11);
  a13=(a13-a23);
  a23=fabs(a1);
  a23=(a0<a23);
  a24=(a4/a1);
  a24=(-a24);
  a24=atan(a24);
  a24=(-a24);
  a23=(a23?a24:0);
  a24=fabs(a23);
  a24=(a24<a8);
  a25=(a4/a2);
  a26=casadi_sq(a25);
  a27=casadi_sq(a11);
  a26=(a26+a27);
  a26=sqrt(a26);
  a27=fabs(a26);
  a27=(a0<a27);
  a28=(a25/a26);
  a29=arg[1] ? arg[1][2] : 0;
  a30=(a16-a29);
  a23=(a23+a30);
  a23=(a15*a23);
  a23=(a14+a23);
  a30=(a23*a18);
  a30=(a30*a20);
  a28=(a28*a30);
  a28=(a27?a28:0);
  a28=(a24?a28:0);
  a23=(a24?a23:0);
  a23=(a23-a14);
  a23=casadi_sq(a23);
  a23=(a22*a23);
  a23=(a21+a23);
  a23=(a23*a18);
  a23=(a23*a20);
  a31=(a23*a11);
  a28=(a28-a31);
  a31=(a13+a28);
  a32=fabs(a1);
  a32=(a0<a32);
  a3=(a3/a1);
  a3=(-a3);
  a3=atan(a3);
  a3=(-a3);
  a32=(a32?a3:0);
  a3=fabs(a32);
  a3=(a3<a8);
  a33=casadi_sq(a9);
  a34=casadi_sq(a11);
  a33=(a33+a34);
  a33=sqrt(a33);
  a34=fabs(a33);
  a34=(a0<a34);
  a35=(a9/a33);
  a17=(a16+a17);
  a32=(a32+a17);
  a32=(a15*a32);
  a32=(a14+a32);
  a17=(a32*a18);
  a17=(a17*a20);
  a35=(a35*a17);
  a35=(a34?a35:0);
  a35=(a3?a35:0);
  a32=(a3?a32:0);
  a32=(a32-a14);
  a32=casadi_sq(a32);
  a32=(a22*a32);
  a32=(a21+a32);
  a32=(a32*a18);
  a32=(a32*a20);
  a36=(a32*a11);
  a35=(a35-a36);
  a31=(a31+a35);
  a36=fabs(a1);
  a36=(a0<a36);
  a4=(a4/a1);
  a4=atan(a4);
  a4=(-a4);
  a36=(a36?a4:0);
  a4=fabs(a36);
  a4=(a4<a8);
  a8=casadi_sq(a25);
  a1=casadi_sq(a11);
  a8=(a8+a1);
  a8=sqrt(a8);
  a1=fabs(a8);
  a1=(a0<a1);
  a37=(a25/a8);
  a16=(a16+a29);
  a36=(a36+a16);
  a15=(a15*a36);
  a15=(a14+a15);
  a36=(a15*a18);
  a36=(a36*a20);
  a37=(a37*a36);
  a37=(-a37);
  a37=(a1?a37:0);
  a37=(a4?a37:0);
  a15=(a4?a15:0);
  a15=(a15-a14);
  a15=casadi_sq(a15);
  a22=(a22*a15);
  a21=(a21+a22);
  a21=(a21*a18);
  a21=(a21*a20);
  a20=(a21*a11);
  a37=(a37-a20);
  a31=(a31+a37);
  a31=(a5?a31:0);
  a20=0.;
  a18=arg[0] ? arg[0][13] : 0;
  a20=(a20<a18);
  a22=arg[1] ? arg[1][0] : 0;
  a15=arg[2] ? arg[2][5] : 0;
  a22=(a22*a15);
  a20=(a20?a22:0);
  a31=(a31+a20);
  a20=8.;
  a22=arg[0] ? arg[0][5] : 0;
  a15=arg[0] ? arg[0][3] : 0;
  a14=(a22*a15);
  a14=(a20*a14);
  a16=4.;
  a29=1.;
  a38=casadi_sq(a15);
  a39=arg[0] ? arg[0][4] : 0;
  a40=casadi_sq(a39);
  a38=(a38+a40);
  a40=casadi_sq(a22);
  a38=(a38+a40);
  a40=(a29-a38);
  a16=(a16*a40);
  a40=(a16*a39);
  a14=(a14-a40);
  a38=(a29+a38);
  a38=casadi_sq(a38);
  a14=(a14/a38);
  a40=arg[2] ? arg[2][14] : 0;
  a40=(a40+a18);
  a18=arg[2] ? arg[2][0] : 0;
  a40=(a40*a18);
  a14=(a14*a40);
  a31=(a31+a14);
  if (res[0]!=0) res[0][0]=a31;
  a10=(a11/a10);
  a10=(a12?a10:0);
  a12=(!a12);
  a12=(a12?a29:0);
  a10=(a10+a12);
  a19=(a19*a10);
  a7=(a7?a19:0);
  a19=(a6*a9);
  a7=(a7-a19);
  a19=(a23*a9);
  a10=(a7-a19);
  a33=(a11/a33);
  a33=(-a33);
  a33=(a34?a33:0);
  a34=(!a34);
  a12=-1.;
  a34=(a34?a12:0);
  a33=(a33+a34);
  a17=(a17*a33);
  a3=(a3?a17:0);
  a17=(a32*a9);
  a3=(a3-a17);
  a10=(a10+a3);
  a9=(a21*a9);
  a10=(a10-a9);
  a10=(a5?a10:0);
  a22=(a22*a39);
  a22=(a20*a22);
  a16=(a16*a15);
  a22=(a22+a16);
  a22=(a22/a38);
  a22=(a22*a40);
  a10=(a10+a22);
  a10=(-a10);
  if (res[0]!=0) res[0][1]=a10;
  a26=(a11/a26);
  a26=(-a26);
  a26=(a27?a26:0);
  a27=(!a27);
  a27=(a27?a12:0);
  a26=(a26+a27);
  a30=(a30*a26);
  a24=(a24?a30:0);
  a23=(a23*a25);
  a24=(a24-a23);
  a6=(a6*a25);
  a23=(a24-a6);
  a32=(a32*a25);
  a23=(a23-a32);
  a11=(a11/a8);
  a11=(a1?a11:0);
  a1=(!a1);
  a1=(a1?a29:0);
  a11=(a11+a1);
  a36=(a36*a11);
  a4=(a4?a36:0);
  a21=(a21*a25);
  a4=(a4-a21);
  a23=(a23+a4);
  a5=(a5?a23:0);
  a39=casadi_sq(a39);
  a15=casadi_sq(a15);
  a39=(a39+a15);
  a20=(a20*a39);
  a20=(a20/a38);
  a29=(a29-a20);
  a29=(a29*a40);
  a5=(a5+a29);
  a5=(-a5);
  if (res[0]!=0) res[0][2]=a5;
  a2=fabs(a2);
  a0=(a0<a2);
  a2=arg[2] ? arg[2][7] : 0;
  a5=(a2*a7);
  a29=(a2*a24);
  a5=(a5-a29);
  a29=(a2*a3);
  a5=(a5-a29);
  a29=(a2*a4);
  a5=(a5+a29);
  a5=(a0?a5:0);
  if (res[1]!=0) res[1][0]=a5;
  a5=arg[2] ? arg[2][6] : 0;
  a24=(a5*a24);
  a13=(a2*a13);
  a6=(a5*a6);
  a13=(a13+a6);
  a24=(a24-a13);
  a35=(a2*a35);
  a32=(a5*a32);
  a35=(a35-a32);
  a24=(a24+a35);
  a4=(a5*a4);
  a24=(a24+a4);
  a24=(-a24);
  a24=(a0?a24:0);
  if (res[1]!=0) res[1][1]=a24;
  a19=(a5*a19);
  a28=(a2*a28);
  a19=(a19+a28);
  a7=(a5*a7);
  a19=(a19-a7);
  a3=(a5*a3);
  a19=(a19-a3);
  a5=(a5*a9);
  a2=(a2*a37);
  a5=(a5-a2);
  a19=(a19+a5);
  a19=(-a19);
  a0=(a0?a19:0);
  if (res[1]!=0) res[1][2]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int rocket_force_moment(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f1(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void rocket_force_moment_incref(void) {
}

CASADI_SYMBOL_EXPORT void rocket_force_moment_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int rocket_force_moment_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int rocket_force_moment_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT const char* rocket_force_moment_name_in(casadi_int i){
  switch (i) {
    case 0: return "x";
    case 1: return "u";
    case 2: return "p";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rocket_force_moment_name_out(casadi_int i){
  switch (i) {
    case 0: return "F_FLT";
    case 1: return "M_FLT";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rocket_force_moment_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rocket_force_moment_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    case 1: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int rocket_force_moment_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT casadi_functions* rocket_force_moment_functions(void) {
  static casadi_functions fun = {
    rocket_force_moment_incref,
    rocket_force_moment_decref,
    rocket_force_moment_n_in,
    rocket_force_moment_n_out,
    rocket_force_moment_name_in,
    rocket_force_moment_name_out,
    rocket_force_moment_sparsity_in,
    rocket_force_moment_sparsity_out,
    rocket_force_moment_work,
    rocket_force_moment
  };
  return &fun;
}
/* rocket_control:(x[14],p[16],t,dt)->(u[4]) */
static int casadi_f2(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a3, a4, a5, a6, a7, a8, a9;
  a0=1.0000000000000001e-01;
  if (res[0]!=0) res[0][0]=a0;
  a1=25.;
  a2=arg[2] ? arg[2][0] : 0;
  a1=(a1<a2);
  a1=(!a1);
  a3=20.;
  a3=(a3<a2);
  a4=-1.0000000000000001e-01;
  a5=(a3?a4:0);
  a3=(!a3);
  a6=15.;
  a6=(a6<a2);
  a6=(a6?a0:0);
  a3=(a3?a6:0);
  a5=(a5+a3);
  a1=(a1?a5:0);
  if (res[0]!=0) res[0][1]=a1;
  a1=1.4199999999999999e+01;
  a1=(a1<a2);
  a1=(!a1);
  a5=14.;
  a5=(a5<a2);
  a3=(a5?a0:0);
  a5=(!a5);
  a6=5.4000000000000004e+00;
  a6=(a6<a2);
  a7=2.0000000000000001e-01;
  a8=(a6?a7:0);
  a6=(!a6);
  a9=5.2999999999999998e+00;
  a9=(a9<a2);
  a10=(a9?a0:0);
  a9=(!a9);
  a11=5.2000000000000002e+00;
  a11=(a11<a2);
  a11=(!a11);
  a12=5.0999999999999996e+00;
  a12=(a12<a2);
  a13=(a12?a4:0);
  a12=(!a12);
  a14=5.;
  a14=(a14<a2);
  a15=-2.0000000000000001e-01;
  a16=(a14?a15:0);
  a14=(!a14);
  a17=1.2000000000000000e+00;
  a17=(a17<a2);
  a18=-2.9999999999999999e-01;
  a18=(a17?a18:0);
  a17=(!a17);
  a19=1.1000000000000001e+00;
  a19=(a19<a2);
  a15=(a19?a15:0);
  a19=(!a19);
  a20=1.;
  a20=(a20<a2);
  a20=(a20?a4:0);
  a19=(a19?a20:0);
  a15=(a15+a19);
  a17=(a17?a15:0);
  a18=(a18+a17);
  a14=(a14?a18:0);
  a16=(a16+a14);
  a12=(a12?a16:0);
  a13=(a13+a12);
  a11=(a11?a13:0);
  a9=(a9?a11:0);
  a10=(a10+a9);
  a6=(a6?a10:0);
  a8=(a8+a6);
  a5=(a5?a8:0);
  a3=(a3+a5);
  a1=(a1?a3:0);
  if (res[0]!=0) res[0][2]=a1;
  a1=7.;
  a1=(a1<a2);
  a1=(!a1);
  a3=6.9000000000000004e+00;
  a3=(a3<a2);
  a5=(a3?a0:0);
  a3=(!a3);
  a8=6.7999999999999998e+00;
  a8=(a8<a2);
  a6=(a8?a7:0);
  a8=(!a8);
  a10=6.7000000000000002e+00;
  a10=(a10<a2);
  a9=2.9999999999999999e-01;
  a11=(a10?a9:0);
  a10=(!a10);
  a13=6.5999999999999996e+00;
  a13=(a13<a2);
  a12=4.0000000000000002e-01;
  a16=(a13?a12:0);
  a13=(!a13);
  a14=6.5000000000000000e+00;
  a14=(a14<a2);
  a18=5.0000000000000000e-01;
  a18=(a14?a18:0);
  a14=(!a14);
  a17=6.4000000000000004e+00;
  a17=(a17<a2);
  a12=(a17?a12:0);
  a17=(!a17);
  a15=6.2999999999999998e+00;
  a15=(a15<a2);
  a9=(a15?a9:0);
  a15=(!a15);
  a19=6.0999999999999996e+00;
  a19=(a19<a2);
  a7=(a19?a7:0);
  a19=(!a19);
  a20=6.;
  a20=(a20<a2);
  a20=(a20?a0:0);
  a19=(a19?a20:0);
  a7=(a7+a19);
  a15=(a15?a7:0);
  a9=(a9+a15);
  a17=(a17?a9:0);
  a12=(a12+a17);
  a14=(a14?a12:0);
  a18=(a18+a14);
  a13=(a13?a18:0);
  a16=(a16+a13);
  a10=(a10?a16:0);
  a11=(a11+a10);
  a8=(a8?a11:0);
  a6=(a6+a8);
  a3=(a3?a6:0);
  a5=(a5+a3);
  a1=(a1?a5:0);
  if (res[0]!=0) res[0][3]=a1;
  return 0;
}

CASADI_SYMBOL_EXPORT int rocket_control(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f2(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void rocket_control_incref(void) {
}

CASADI_SYMBOL_EXPORT void rocket_control_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int rocket_control_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int rocket_control_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* rocket_control_name_in(casadi_int i){
  switch (i) {
    case 0: return "x";
    case 1: return "p";
    case 2: return "t";
    case 3: return "dt";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rocket_control_name_out(casadi_int i){
  switch (i) {
    case 0: return "u";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rocket_control_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s2;
    case 2: return casadi_s4;
    case 3: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rocket_control_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int rocket_control_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT casadi_functions* rocket_control_functions(void) {
  static casadi_functions fun = {
    rocket_control_incref,
    rocket_control_decref,
    rocket_control_n_in,
    rocket_control_n_out,
    rocket_control_name_in,
    rocket_control_name_out,
    rocket_control_sparsity_in,
    rocket_control_sparsity_out,
    rocket_control_work,
    rocket_control
  };
  return &fun;
}
/* rocket_u_to_fin:(u[4])->(fin[4]) */
static int casadi_f3(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a2, a3;
  a0=arg[0] ? arg[0][1] : 0;
  a1=arg[0] ? arg[0][3] : 0;
  a2=(a0-a1);
  if (res[0]!=0) res[0][0]=a2;
  a2=arg[0] ? arg[0][2] : 0;
  a3=(a0-a2);
  if (res[0]!=0) res[0][1]=a3;
  a1=(a0+a1);
  if (res[0]!=0) res[0][2]=a1;
  a0=(a0+a2);
  if (res[0]!=0) res[0][3]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int rocket_u_to_fin(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f3(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void rocket_u_to_fin_incref(void) {
}

CASADI_SYMBOL_EXPORT void rocket_u_to_fin_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int rocket_u_to_fin_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int rocket_u_to_fin_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* rocket_u_to_fin_name_in(casadi_int i){
  switch (i) {
    case 0: return "u";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rocket_u_to_fin_name_out(casadi_int i){
  switch (i) {
    case 0: return "fin";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rocket_u_to_fin_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rocket_u_to_fin_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int rocket_u_to_fin_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT casadi_functions* rocket_u_to_fin_functions(void) {
  static casadi_functions fun = {
    rocket_u_to_fin_incref,
    rocket_u_to_fin_decref,
    rocket_u_to_fin_n_in,
    rocket_u_to_fin_n_out,
    rocket_u_to_fin_name_in,
    rocket_u_to_fin_name_out,
    rocket_u_to_fin_sparsity_in,
    rocket_u_to_fin_sparsity_out,
    rocket_u_to_fin_work,
    rocket_u_to_fin
  };
  return &fun;
}

#ifdef __cplusplus
} /* extern "C" */
#endif
