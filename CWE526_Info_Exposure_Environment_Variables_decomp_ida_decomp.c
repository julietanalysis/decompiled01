/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2018 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void *init_proc();
__int64 sub_400900();
// int printf(const char *format, ...);
// int puts(const char *s);
// __int64 __fastcall __isoc99_sscanf(_QWORD, _QWORD, _QWORD); weak
// void *malloc(size_t size);
// int __fastcall __libc_start_main(int (__fastcall *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *mutexattr);
// int iswxdigit(wint_t wc);
// void free(void *ptr);
// int pthread_create(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
// const unsigned __int16 **__ctype_b_loc(void);
// int pthread_join(pthread_t th, void **thread_return);
// void __noreturn pthread_exit(void *retval);
// char *getenv(const char *name);
// int wprintf(const wchar_t *format, ...);
// __int64 __fastcall __isoc99_swscanf(_QWORD, _QWORD, _QWORD); weak
// void srand(unsigned int seed);
// int pthread_mutex_lock(pthread_mutex_t *mutex);
// int rand(void);
// int pthread_mutex_destroy(pthread_mutex_t *mutex);
// int pthread_mutex_unlock(pthread_mutex_t *mutex);
// time_t time(time_t *timer);
// __int64 _gmon_start__(void); weak
// void __usercall __noreturn start(__int64 a1@<rax>, void (*a2)(void)@<rdx>);
__int64 deregister_tm_clones();
__int64 register_tm_clones();
__int64 _do_global_dtors_aux();
__int64 frame_dummy();
int __cdecl main(int argc, const char **argv, const char **envp);
int CWE526_Info_Exposure_Environment_Variables__basic_06_bad();
int good1();
int good2();
int CWE526_Info_Exposure_Environment_Variables__basic_06_good();
int CWE526_Info_Exposure_Environment_Variables__basic_03_bad();
int good1_0();
int good2_0();
int CWE526_Info_Exposure_Environment_Variables__basic_03_good();
int CWE526_Info_Exposure_Environment_Variables__basic_12_bad();
int good1_1();
int CWE526_Info_Exposure_Environment_Variables__basic_12_good();
int CWE526_Info_Exposure_Environment_Variables__basic_16_bad();
int good1_2();
int CWE526_Info_Exposure_Environment_Variables__basic_16_good();
int CWE526_Info_Exposure_Environment_Variables__basic_07_bad();
int good1_3();
int good2_1();
int CWE526_Info_Exposure_Environment_Variables__basic_07_good();
int CWE526_Info_Exposure_Environment_Variables__basic_10_bad();
int good1_4();
int good2_2();
int CWE526_Info_Exposure_Environment_Variables__basic_10_good();
int CWE526_Info_Exposure_Environment_Variables__basic_09_bad();
int good1_5();
int good2_3();
int CWE526_Info_Exposure_Environment_Variables__basic_09_good();
__int64 staticReturnsTrue();
__int64 staticReturnsFalse();
int CWE526_Info_Exposure_Environment_Variables__basic_08_bad();
int good1_6();
int good2_4();
int CWE526_Info_Exposure_Environment_Variables__basic_08_good();
int CWE526_Info_Exposure_Environment_Variables__basic_15_bad();
int good1_7();
int good2_5();
int CWE526_Info_Exposure_Environment_Variables__basic_15_good();
int CWE526_Info_Exposure_Environment_Variables__basic_14_bad();
int good1_8();
int good2_6();
int CWE526_Info_Exposure_Environment_Variables__basic_14_good();
int CWE526_Info_Exposure_Environment_Variables__basic_13_bad();
int good1_9();
int good2_7();
int CWE526_Info_Exposure_Environment_Variables__basic_13_good();
int CWE526_Info_Exposure_Environment_Variables__basic_04_bad();
int good1_10();
int good2_8();
int CWE526_Info_Exposure_Environment_Variables__basic_04_good();
void CWE526_Info_Exposure_Environment_Variables__basic_17_bad();
int good1_11();
int CWE526_Info_Exposure_Environment_Variables__basic_17_good();
int CWE526_Info_Exposure_Environment_Variables__basic_01_bad();
int good1_12();
int CWE526_Info_Exposure_Environment_Variables__basic_01_good();
int CWE526_Info_Exposure_Environment_Variables__basic_18_bad();
int good1_13();
int CWE526_Info_Exposure_Environment_Variables__basic_18_good();
int CWE526_Info_Exposure_Environment_Variables__basic_05_bad();
int good1_14();
int good2_9();
int CWE526_Info_Exposure_Environment_Variables__basic_05_good();
int CWE526_Info_Exposure_Environment_Variables__basic_11_bad();
int good1_15();
int good2_10();
int CWE526_Info_Exposure_Environment_Variables__basic_11_good();
int CWE526_Info_Exposure_Environment_Variables__basic_02_bad();
int good1_16();
int good2_11();
int CWE526_Info_Exposure_Environment_Variables__basic_02_good();
int __fastcall printLine(const char *a1);
int __fastcall printWLine(__int64 a1);
int __fastcall printIntLine(unsigned int a1);
int __fastcall printShortLine(__int16 a1);
int __fastcall printFloatLine(float a1);
int __fastcall printLongLine(__int64 a1);
int __fastcall printLongLongLine(__int64 a1);
int __fastcall printSizeTLine(__int64 a1);
int __fastcall printHexCharLine(char a1);
int __fastcall printWcharLine(int a1);
int __fastcall printUnsignedLine(unsigned int a1);
int __fastcall printHexUnsignedCharLine(unsigned __int8 a1);
int __fastcall printDoubleLine(double a1);
int __fastcall printStructLine(unsigned int *a1);
int __fastcall printBytesLine(__int64 a1, unsigned __int64 a2);
unsigned __int64 __fastcall decodeHexChars(__int64 a1, unsigned __int64 a2, __int64 a3);
unsigned __int64 __fastcall decodeHexWChars(__int64 a1, unsigned __int64 a2, __int64 a3);
__int64 globalReturnsTrue();
__int64 globalReturnsFalse();
__int64 globalReturnsTrueOrFalse();
void good1_17();
void good2_12();
void good3();
void good4();
void good5();
void good6();
void good7();
void good8();
void good9();
void bad1();
void bad2();
void bad3();
void bad4();
void bad5();
void bad6();
void bad7();
void bad8();
void bad9();
void __fastcall __noreturn internal_start(void *a1);
__int64 __fastcall stdThreadCreate(__int64 a1, __int64 a2, void **a3);
_BOOL8 __fastcall stdThreadJoin(pthread_t *a1);
__int64 __fastcall stdThreadDestroy(void *a1);
__int64 __fastcall stdThreadLockCreate(pthread_mutex_t **a1);
int __fastcall stdThreadLockAcquire(pthread_mutex_t *a1);
int __fastcall stdThreadLockRelease(pthread_mutex_t *a1);
void __fastcall stdThreadLockDestroy(pthread_mutex_t *a1);
void _libc_csu_init(void); // idb
void _libc_csu_fini(void); // idb
void term_proc();

//-------------------------------------------------------------------------
// Data declarations

char s[3] = { '\0', '\0', '\0' }; // idb
int GLOBAL_CONST_TRUE = 1; // weak
int GLOBAL_CONST_FALSE = 0; // weak
int GLOBAL_CONST_FIVE = 5; // weak
__int64 (__fastcall *_frame_dummy_init_array_entry[2])() = { &frame_dummy, &_do_global_dtors_aux }; // weak
__int64 (__fastcall *_do_global_dtors_aux_fini_array_entry)() = &_do_global_dtors_aux; // weak
__int64 (*qword_604010)(void) = NULL; // weak
int staticFive = 5; // weak
int staticTrue = 1; // weak
int globalTrue = 1; // weak
int globalFive = 5; // weak
char completed_6355; // weak
int staticFalse; // weak
int globalFalse; // weak
int globalArgc; // weak
__int64 globalArgv; // weak
// extern _UNKNOWN __gmon_start__; weak


//----- (00000000004008E0) ----------------------------------------------------
void *init_proc()
{
  void *result; // rax

  result = &__gmon_start__;
  if ( &__gmon_start__ )
    result = (void *)_gmon_start__();
  return result;
}
// 400A60: using guessed type __int64 _gmon_start__(void);

//----- (0000000000400900) ----------------------------------------------------
__int64 sub_400900()
{
  return qword_604010();
}
// 604010: using guessed type __int64 (*qword_604010)(void);

//----- (0000000000400A70) ----------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(__int64 a1@<rax>, void (*a2)(void)@<rdx>)
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  __libc_start_main(
    (int (__fastcall *)(int, char **, char **))main,
    v2,
    (char **)&_0,
    _libc_csu_init,
    _libc_csu_fini,
    a2,
    &v3);
  __halt();
}
// 400A76: positive sp value 8 has been found

//----- (0000000000400AA0) ----------------------------------------------------
__int64 deregister_tm_clones()
{
  __int64 result; // rax

  result = 6308063LL - (_QWORD)&completed_6355;
  if ( (unsigned __int64)(6308063LL - (_QWORD)&completed_6355) > 0xE )
    result = 0LL;
  return result;
}
// 6040D8: using guessed type char completed_6355;

//----- (0000000000400AD0) ----------------------------------------------------
__int64 register_tm_clones()
{
  return 0LL;
}

//----- (0000000000400B10) ----------------------------------------------------
__int64 _do_global_dtors_aux()
{
  __int64 result; // rax

  if ( !completed_6355 )
  {
    result = deregister_tm_clones();
    completed_6355 = 1;
  }
  return result;
}
// 6040D8: using guessed type char completed_6355;

//----- (0000000000400B30) ----------------------------------------------------
__int64 frame_dummy()
{
  return register_tm_clones();
}
// 400B30: could not find valid save-restore pair for rbp

//----- (0000000000400B5D) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v3; // eax

  v3 = time(0LL);
  srand(v3);
  globalArgc = argc;
  globalArgv = (__int64)argv;
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_01_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_01_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_11_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_11_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_03_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_03_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_13_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_13_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_17_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_17_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_07_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_07_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_15_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_15_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_12_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_12_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_04_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_04_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_08_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_08_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_14_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_14_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_05_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_05_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_18_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_18_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_16_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_16_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_09_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_09_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_06_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_06_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_10_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_10_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_02_good();");
  CWE526_Info_Exposure_Environment_Variables__basic_02_good();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_01_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_01_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_11_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_11_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_03_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_03_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_13_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_13_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_17_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_17_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_07_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_07_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_15_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_15_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_12_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_12_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_04_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_04_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_08_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_08_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_14_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_14_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_05_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_05_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_18_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_18_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_16_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_16_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_09_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_09_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_06_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_06_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_10_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_10_bad();
  printLine("Calling CWE526_Info_Exposure_Environment_Variables__basic_02_bad();");
  CWE526_Info_Exposure_Environment_Variables__basic_02_bad();
  return 0;
}
// 6040E4: using guessed type int globalArgc;
// 6040E8: using guessed type __int64 globalArgv;

//----- (0000000000400E68) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_06_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (0000000000400E8A) ----------------------------------------------------
int good1()
{
  return printLine("Not in path");
}

//----- (0000000000400EB0) ----------------------------------------------------
int good2()
{
  return printLine("Not in path");
}

//----- (0000000000400ECA) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_06_good()
{
  good1();
  return good2();
}

//----- (0000000000400EE4) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_03_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (0000000000400EFC) ----------------------------------------------------
int good1_0()
{
  return printLine("Not in path");
}

//----- (0000000000400F0C) ----------------------------------------------------
int good2_0()
{
  return printLine("Not in path");
}

//----- (0000000000400F1C) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_03_good()
{
  good1_0();
  return good2_0();
}

//----- (0000000000400F36) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_12_bad()
{
  char *v0; // rax

  if ( !(unsigned int)globalReturnsTrueOrFalse() )
    return printLine("Not in path");
  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (0000000000400F68) ----------------------------------------------------
int good1_1()
{
  globalReturnsTrueOrFalse();
  return printLine("Not in path");
}

//----- (0000000000400F92) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_12_good()
{
  return good1_1();
}

//----- (0000000000400FA2) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_16_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (0000000000400FBB) ----------------------------------------------------
int good1_2()
{
  return printLine("Not in path");
}

//----- (0000000000400FCC) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_16_good()
{
  return good1_2();
}

//----- (0000000000400FDC) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_07_bad()
{
  int result; // eax
  char *v1; // rax

  result = staticFive;
  if ( staticFive == 5 )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}
// 6040C4: using guessed type int staticFive;

//----- (0000000000400FFF) ----------------------------------------------------
int good1_3()
{
  int result; // eax

  if ( staticFive == 5 )
    result = printLine("Not in path");
  else
    result = printLine("Benign, fixed string");
  return result;
}
// 6040C4: using guessed type int staticFive;

//----- (0000000000401026) ----------------------------------------------------
int good2_1()
{
  int result; // eax

  result = staticFive;
  if ( staticFive == 5 )
    result = printLine("Not in path");
  return result;
}
// 6040C4: using guessed type int staticFive;

//----- (0000000000401041) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_07_good()
{
  good1_3();
  return good2_1();
}

//----- (000000000040105B) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_10_bad()
{
  int result; // eax
  char *v1; // rax

  result = globalTrue;
  if ( globalTrue )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}
// 6040CC: using guessed type int globalTrue;

//----- (000000000040107D) ----------------------------------------------------
int good1_4()
{
  int result; // eax

  if ( globalFalse )
    result = printLine("Benign, fixed string");
  else
    result = printLine("Not in path");
  return result;
}
// 6040E0: using guessed type int globalFalse;

//----- (00000000004010A3) ----------------------------------------------------
int good2_2()
{
  int result; // eax

  result = globalTrue;
  if ( globalTrue )
    result = printLine("Not in path");
  return result;
}
// 6040CC: using guessed type int globalTrue;

//----- (00000000004010BD) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_10_good()
{
  good1_4();
  return good2_2();
}

//----- (00000000004010D7) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_09_bad()
{
  int result; // eax
  char *v1; // rax

  result = GLOBAL_CONST_TRUE;
  if ( GLOBAL_CONST_TRUE )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}
// 4029A4: using guessed type int GLOBAL_CONST_TRUE;

//----- (00000000004010F9) ----------------------------------------------------
int good1_5()
{
  int result; // eax

  if ( GLOBAL_CONST_FALSE )
    result = printLine("Benign, fixed string");
  else
    result = printLine("Not in path");
  return result;
}
// 4029A8: using guessed type int GLOBAL_CONST_FALSE;

//----- (000000000040111F) ----------------------------------------------------
int good2_3()
{
  int result; // eax

  result = GLOBAL_CONST_TRUE;
  if ( GLOBAL_CONST_TRUE )
    result = printLine("Not in path");
  return result;
}
// 4029A4: using guessed type int GLOBAL_CONST_TRUE;

//----- (0000000000401139) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_09_good()
{
  good1_5();
  return good2_3();
}

//----- (0000000000401153) ----------------------------------------------------
__int64 staticReturnsTrue()
{
  return 1LL;
}

//----- (000000000040115E) ----------------------------------------------------
__int64 staticReturnsFalse()
{
  return 0LL;
}

//----- (0000000000401169) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_08_bad()
{
  int result; // eax
  char *v1; // rax

  result = staticReturnsTrue();
  if ( result )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}

//----- (000000000040118F) ----------------------------------------------------
int good1_6()
{
  int result; // eax

  if ( (unsigned int)staticReturnsFalse() )
    result = printLine("Benign, fixed string");
  else
    result = printLine("Not in path");
  return result;
}

//----- (00000000004011B9) ----------------------------------------------------
int good2_4()
{
  int result; // eax

  result = staticReturnsTrue();
  if ( result )
    result = printLine("Not in path");
  return result;
}

//----- (00000000004011D7) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_08_good()
{
  good1_6();
  return good2_4();
}

//----- (00000000004011F1) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_15_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (000000000040120A) ----------------------------------------------------
int good1_7()
{
  return printLine("Not in path");
}

//----- (000000000040121B) ----------------------------------------------------
int good2_5()
{
  return printLine("Not in path");
}

//----- (000000000040122C) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_15_good()
{
  good1_7();
  return good2_5();
}

//----- (0000000000401246) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_14_bad()
{
  int result; // eax
  char *v1; // rax

  result = globalFive;
  if ( globalFive == 5 )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}
// 6040D0: using guessed type int globalFive;

//----- (0000000000401269) ----------------------------------------------------
int good1_8()
{
  int result; // eax

  if ( globalFive == 5 )
    result = printLine("Not in path");
  else
    result = printLine("Benign, fixed string");
  return result;
}
// 6040D0: using guessed type int globalFive;

//----- (0000000000401290) ----------------------------------------------------
int good2_6()
{
  int result; // eax

  result = globalFive;
  if ( globalFive == 5 )
    result = printLine("Not in path");
  return result;
}
// 6040D0: using guessed type int globalFive;

//----- (00000000004012AB) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_14_good()
{
  good1_8();
  return good2_6();
}

//----- (00000000004012C5) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_13_bad()
{
  int result; // eax
  char *v1; // rax

  result = GLOBAL_CONST_FIVE;
  if ( GLOBAL_CONST_FIVE == 5 )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}
// 4029AC: using guessed type int GLOBAL_CONST_FIVE;

//----- (00000000004012E8) ----------------------------------------------------
int good1_9()
{
  int result; // eax

  if ( GLOBAL_CONST_FIVE == 5 )
    result = printLine("Not in path");
  else
    result = printLine("Benign, fixed string");
  return result;
}
// 4029AC: using guessed type int GLOBAL_CONST_FIVE;

//----- (000000000040130F) ----------------------------------------------------
int good2_7()
{
  int result; // eax

  result = GLOBAL_CONST_FIVE;
  if ( GLOBAL_CONST_FIVE == 5 )
    result = printLine("Not in path");
  return result;
}
// 4029AC: using guessed type int GLOBAL_CONST_FIVE;

//----- (000000000040132A) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_13_good()
{
  good1_9();
  return good2_7();
}

//----- (0000000000401344) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_04_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (0000000000401365) ----------------------------------------------------
int good1_10()
{
  return printLine("Not in path");
}

//----- (000000000040138A) ----------------------------------------------------
int good2_8()
{
  return printLine("Not in path");
}

//----- (00000000004013A3) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_04_good()
{
  good1_10();
  return good2_8();
}

//----- (00000000004013BD) ----------------------------------------------------
void CWE526_Info_Exposure_Environment_Variables__basic_17_bad()
{
  char *v0; // rax
  int i; // [rsp+Ch] [rbp-4h]

  for ( i = 0; i <= 0; ++i )
  {
    v0 = getenv("PATH");
    printLine(v0);
  }
}

//----- (00000000004013EC) ----------------------------------------------------
int good1_11()
{
  int result; // eax
  int i; // [rsp+Ch] [rbp-4h]

  for ( i = 0; i <= 0; ++i )
    result = printLine("Not in path");
  return result;
}

//----- (0000000000401413) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_17_good()
{
  return good1_11();
}

//----- (0000000000401423) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_01_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (000000000040143B) ----------------------------------------------------
int good1_12()
{
  return printLine("Not in path");
}

//----- (000000000040144B) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_01_good()
{
  return good1_12();
}

//----- (000000000040145B) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_18_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (0000000000401474) ----------------------------------------------------
int good1_13()
{
  return printLine("Not in path");
}

//----- (0000000000401485) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_18_good()
{
  return good1_13();
}

//----- (0000000000401495) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_05_bad()
{
  int result; // eax
  char *v1; // rax

  result = staticTrue;
  if ( staticTrue )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}
// 6040C8: using guessed type int staticTrue;

//----- (00000000004014B7) ----------------------------------------------------
int good1_14()
{
  int result; // eax

  if ( staticFalse )
    result = printLine("Benign, fixed string");
  else
    result = printLine("Not in path");
  return result;
}
// 6040DC: using guessed type int staticFalse;

//----- (00000000004014DD) ----------------------------------------------------
int good2_9()
{
  int result; // eax

  result = staticTrue;
  if ( staticTrue )
    result = printLine("Not in path");
  return result;
}
// 6040C8: using guessed type int staticTrue;

//----- (00000000004014F7) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_05_good()
{
  good1_14();
  return good2_9();
}

//----- (0000000000401511) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_11_bad()
{
  int result; // eax
  char *v1; // rax

  result = globalReturnsTrue();
  if ( result )
  {
    v1 = getenv("PATH");
    result = printLine(v1);
  }
  return result;
}

//----- (0000000000401537) ----------------------------------------------------
int good1_15()
{
  int result; // eax

  if ( (unsigned int)globalReturnsFalse() )
    result = printLine("Benign, fixed string");
  else
    result = printLine("Not in path");
  return result;
}

//----- (0000000000401561) ----------------------------------------------------
int good2_10()
{
  int result; // eax

  result = globalReturnsTrue();
  if ( result )
    result = printLine("Not in path");
  return result;
}

//----- (000000000040157F) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_11_good()
{
  good1_15();
  return good2_10();
}

//----- (0000000000401599) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_02_bad()
{
  char *v0; // rax

  v0 = getenv("PATH");
  return printLine(v0);
}

//----- (00000000004015B1) ----------------------------------------------------
int good1_16()
{
  return printLine("Not in path");
}

//----- (00000000004015C1) ----------------------------------------------------
int good2_11()
{
  return printLine("Not in path");
}

//----- (00000000004015D1) ----------------------------------------------------
int CWE526_Info_Exposure_Environment_Variables__basic_02_good()
{
  good1_16();
  return good2_11();
}

//----- (00000000004015EB) ----------------------------------------------------
int __fastcall printLine(const char *a1)
{
  int result; // eax

  if ( a1 )
    result = puts(a1);
  return result;
}

//----- (000000000040160C) ----------------------------------------------------
int __fastcall printWLine(__int64 a1)
{
  int result; // eax

  if ( a1 )
    result = wprintf("%", a1);
  return result;
}

//----- (0000000000401637) ----------------------------------------------------
int __fastcall printIntLine(unsigned int a1)
{
  return printf("%d\n", a1);
}

//----- (0000000000401658) ----------------------------------------------------
int __fastcall printShortLine(__int16 a1)
{
  return printf("%hd\n", (unsigned int)a1);
}

//----- (000000000040167D) ----------------------------------------------------
int __fastcall printFloatLine(float a1)
{
  return printf("%f\n", a1);
}

//----- (00000000004016A3) ----------------------------------------------------
int __fastcall printLongLine(__int64 a1)
{
  return printf("%ld\n", a1);
}

//----- (00000000004016C7) ----------------------------------------------------
int __fastcall printLongLongLine(__int64 a1)
{
  return printf("%ld\n", a1);
}

//----- (00000000004016EB) ----------------------------------------------------
int __fastcall printSizeTLine(__int64 a1)
{
  return printf("%zu\n", a1);
}

//----- (000000000040170F) ----------------------------------------------------
int __fastcall printHexCharLine(char a1)
{
  return printf("%02x\n", (unsigned int)a1);
}

//----- (0000000000401733) ----------------------------------------------------
int __fastcall printWcharLine(int a1)
{
  int v2; // [rsp+10h] [rbp-10h]
  int v3; // [rsp+14h] [rbp-Ch]

  v2 = a1;
  v3 = 0;
  return printf("%ls\n", &v2);
}

//----- (0000000000401763) ----------------------------------------------------
int __fastcall printUnsignedLine(unsigned int a1)
{
  return printf("%u\n", a1);
}

//----- (0000000000401784) ----------------------------------------------------
int __fastcall printHexUnsignedCharLine(unsigned __int8 a1)
{
  return printf("%02x\n", a1);
}

//----- (00000000004017A8) ----------------------------------------------------
int __fastcall printDoubleLine(double a1)
{
  return printf("%g\n", a1);
}

//----- (00000000004017D3) ----------------------------------------------------
int __fastcall printStructLine(unsigned int *a1)
{
  return printf("%d -- %d\n", *a1, a1[1]);
}

//----- (00000000004017FF) ----------------------------------------------------
int __fastcall printBytesLine(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0LL; i < a2; ++i )
    printf("%02x", *(unsigned __int8 *)(a1 + i));
  return puts(s);
}

//----- (0000000000401856) ----------------------------------------------------
unsigned __int64 __fastcall decodeHexChars(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+8h] [rbp-28h]
  int v5; // [rsp+24h] [rbp-Ch]
  unsigned __int64 i; // [rsp+28h] [rbp-8h]

  v4 = a3;
  for ( i = 0LL;
        i < a2
     && (*__ctype_b_loc())[*(char *)(2 * i + v4)] & 0x1000
     && (*__ctype_b_loc())[*(char *)(2 * i + 1 + v4)] & 0x1000;
        ++i )
  {
    __isoc99_sscanf(2 * i + v4, "%02x", &v5);
    *(_BYTE *)(i + a1) = v5;
  }
  return i;
}
// 400930: using guessed type __int64 __fastcall __isoc99_sscanf(_QWORD, _QWORD, _QWORD);

//----- (000000000040192F) ----------------------------------------------------
unsigned __int64 __fastcall decodeHexWChars(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+8h] [rbp-28h]
  int v5; // [rsp+24h] [rbp-Ch]
  unsigned __int64 i; // [rsp+28h] [rbp-8h]

  v4 = a3;
  for ( i = 0LL; i < a2 && iswxdigit(*(_DWORD *)(8 * i + v4)) && iswxdigit(*(_DWORD *)(8 * i + 4 + v4)); ++i )
  {
    __isoc99_swscanf(8 * i + v4, "%", &v5);
    *(_BYTE *)(i + a1) = v5;
  }
  return i;
}
// 4009F0: using guessed type __int64 __fastcall __isoc99_swscanf(_QWORD, _QWORD, _QWORD);

//----- (00000000004019E3) ----------------------------------------------------
__int64 globalReturnsTrue()
{
  return 1LL;
}

//----- (00000000004019EE) ----------------------------------------------------
__int64 globalReturnsFalse()
{
  return 0LL;
}

//----- (00000000004019F9) ----------------------------------------------------
__int64 globalReturnsTrueOrFalse()
{
  return (unsigned int)(rand() % 2);
}

//----- (0000000000401A0F) ----------------------------------------------------
void good1_17()
{
  ;
}

//----- (0000000000401A15) ----------------------------------------------------
void good2_12()
{
  ;
}

//----- (0000000000401A1B) ----------------------------------------------------
void good3()
{
  ;
}

//----- (0000000000401A21) ----------------------------------------------------
void good4()
{
  ;
}

//----- (0000000000401A27) ----------------------------------------------------
void good5()
{
  ;
}

//----- (0000000000401A2D) ----------------------------------------------------
void good6()
{
  ;
}

//----- (0000000000401A33) ----------------------------------------------------
void good7()
{
  ;
}

//----- (0000000000401A39) ----------------------------------------------------
void good8()
{
  ;
}

//----- (0000000000401A3F) ----------------------------------------------------
void good9()
{
  ;
}

//----- (0000000000401A45) ----------------------------------------------------
void bad1()
{
  ;
}

//----- (0000000000401A4B) ----------------------------------------------------
void bad2()
{
  ;
}

//----- (0000000000401A51) ----------------------------------------------------
void bad3()
{
  ;
}

//----- (0000000000401A57) ----------------------------------------------------
void bad4()
{
  ;
}

//----- (0000000000401A5D) ----------------------------------------------------
void bad5()
{
  ;
}

//----- (0000000000401A63) ----------------------------------------------------
void bad6()
{
  ;
}

//----- (0000000000401A69) ----------------------------------------------------
void bad7()
{
  ;
}

//----- (0000000000401A6F) ----------------------------------------------------
void bad8()
{
  ;
}

//----- (0000000000401A75) ----------------------------------------------------
void bad9()
{
  ;
}

//----- (0000000000401A7B) ----------------------------------------------------
void __fastcall __noreturn internal_start(void *a1)
{
  (*((void (__fastcall **)(_QWORD))a1 + 1))(*((_QWORD *)a1 + 2));
  pthread_exit(0LL);
}

//----- (0000000000401AAE) ----------------------------------------------------
__int64 __fastcall stdThreadCreate(__int64 a1, __int64 a2, void **a3)
{
  __int64 result; // rax
  void **v4; // [rsp+8h] [rbp-28h]
  pthread_t newthread; // [rsp+20h] [rbp-10h]
  void *arg; // [rsp+28h] [rbp-8h]

  v4 = a3;
  *a3 = 0LL;
  arg = malloc(0x18uLL);
  if ( !arg )
    return 0LL;
  *((_QWORD *)arg + 1) = a1;
  *((_QWORD *)arg + 2) = a2;
  if ( pthread_create(&newthread, 0LL, (void *(*)(void *))internal_start, arg) )
  {
    free(arg);
    result = 0LL;
  }
  else
  {
    *(_QWORD *)arg = newthread;
    *v4 = arg;
    result = 1LL;
  }
  return result;
}

//----- (0000000000401B52) ----------------------------------------------------
_BOOL8 __fastcall stdThreadJoin(pthread_t *a1)
{
  void *thread_return; // [rsp+18h] [rbp-8h]

  return pthread_join(*a1, &thread_return) == 0;
}

//----- (0000000000401B86) ----------------------------------------------------
__int64 __fastcall stdThreadDestroy(void *a1)
{
  free(a1);
  return 1LL;
}

//----- (0000000000401BA5) ----------------------------------------------------
__int64 __fastcall stdThreadLockCreate(pthread_mutex_t **a1)
{
  __int64 result; // rax
  pthread_mutex_t *mutex; // [rsp+18h] [rbp-8h]

  *a1 = 0LL;
  mutex = (pthread_mutex_t *)malloc(0x28uLL);
  if ( !mutex )
    return 0LL;
  if ( pthread_mutex_init(mutex, 0LL) )
  {
    free(a1);
    result = 0LL;
  }
  else
  {
    *a1 = mutex;
    result = 1LL;
  }
  return result;
}

//----- (0000000000401C1A) ----------------------------------------------------
int __fastcall stdThreadLockAcquire(pthread_mutex_t *a1)
{
  return pthread_mutex_lock(a1);
}

//----- (0000000000401C34) ----------------------------------------------------
int __fastcall stdThreadLockRelease(pthread_mutex_t *a1)
{
  return pthread_mutex_unlock(a1);
}

//----- (0000000000401C4E) ----------------------------------------------------
void __fastcall stdThreadLockDestroy(pthread_mutex_t *a1)
{
  pthread_mutex_destroy(a1);
  free(a1);
}

//----- (0000000000401C80) ----------------------------------------------------
void _libc_csu_init(void)
{
  __int64 v0; // rbx
  signed __int64 v1; // rbp

  v0 = 0LL;
  v1 = &_do_global_dtors_aux_fini_array_entry - _frame_dummy_init_array_entry;
  init_proc();
  if ( v1 )
  {
    do
      _frame_dummy_init_array_entry[v0++]();
    while ( v0 != v1 );
  }
}
// 603DD0: using guessed type __int64 (__fastcall *_frame_dummy_init_array_entry[2])();
// 603DD8: using guessed type __int64 (__fastcall *_do_global_dtors_aux_fini_array_entry)();

//----- (0000000000401CF4) ----------------------------------------------------
void term_proc()
{
  ;
}

// ALL OK, 125 function(s) have been successfully decompiled
