/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2018 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void *init_proc();
__int64 sub_4008D0();
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
signed __int64 deregister_tm_clones();
__int64 register_tm_clones();
signed __int64 _do_global_dtors_aux();
__int64 frame_dummy();
int __cdecl main(int argc, const char **argv, const char **envp);
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
void good1();
void good2();
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

wchar_t format = 37; // idb
char s[3] = { '\0', '\0', '\0' }; // idb
__int64 (__fastcall *_frame_dummy_init_array_entry[2])() = { &frame_dummy, &_do_global_dtors_aux }; // weak
__int64 (__fastcall *_do_global_dtors_aux_fini_array_entry)() = &_do_global_dtors_aux; // weak
__int64 (*qword_602010)(void) = NULL; // weak
char completed_6355; // weak
_UNKNOWN unk_6020CF; // weak
int globalArgc; // weak
__int64 globalArgv; // weak
// extern _UNKNOWN __gmon_start__; weak


//----- (00000000004008A8) ----------------------------------------------------
void *init_proc()
{
  void *result; // rax

  result = &__gmon_start__;
  if ( &__gmon_start__ )
    result = (void *)_gmon_start__();
  return result;
}
// 400A20: using guessed type __int64 _gmon_start__(void);

//----- (00000000004008D0) ----------------------------------------------------
__int64 sub_4008D0()
{
  return qword_602010();
}
// 602010: using guessed type __int64 (*qword_602010)(void);

//----- (0000000000400A30) ----------------------------------------------------
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
// 400A36: positive sp value 8 has been found

//----- (0000000000400A60) ----------------------------------------------------
signed __int64 deregister_tm_clones()
{
  signed __int64 result; // rax

  result = &unk_6020CF - (_UNKNOWN *)&completed_6355;
  if ( (unsigned __int64)(&unk_6020CF - (_UNKNOWN *)&completed_6355) > 0xE )
    result = 0LL;
  return result;
}
// 6020C8: using guessed type char completed_6355;

//----- (0000000000400A90) ----------------------------------------------------
__int64 register_tm_clones()
{
  return 0LL;
}

//----- (0000000000400AD0) ----------------------------------------------------
signed __int64 _do_global_dtors_aux()
{
  signed __int64 result; // rax

  if ( !completed_6355 )
  {
    result = deregister_tm_clones();
    completed_6355 = 1;
  }
  return result;
}
// 6020C8: using guessed type char completed_6355;

//----- (0000000000400AF0) ----------------------------------------------------
__int64 frame_dummy()
{
  return register_tm_clones();
}
// 400AF0: could not find valid save-restore pair for rbp

//----- (0000000000400B1D) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v3; // eax

  v3 = time(0LL);
  srand(v3);
  globalArgc = argc;
  globalArgv = (__int64)argv;
  return 0;
}
// 6020D4: using guessed type int globalArgc;
// 6020D8: using guessed type __int64 globalArgv;

//----- (0000000000400B58) ----------------------------------------------------
int __fastcall printLine(const char *a1)
{
  int result; // eax

  if ( a1 )
    result = puts(a1);
  return result;
}

//----- (0000000000400B79) ----------------------------------------------------
int __fastcall printWLine(__int64 a1)
{
  int result; // eax

  if ( a1 )
    result = wprintf(&format, a1);
  return result;
}

//----- (0000000000400BA4) ----------------------------------------------------
int __fastcall printIntLine(unsigned int a1)
{
  return printf("%d\n", a1);
}

//----- (0000000000400BC5) ----------------------------------------------------
int __fastcall printShortLine(__int16 a1)
{
  return printf("%hd\n", (unsigned int)a1);
}

//----- (0000000000400BEA) ----------------------------------------------------
int __fastcall printFloatLine(float a1)
{
  return printf("%f\n", a1);
}

//----- (0000000000400C10) ----------------------------------------------------
int __fastcall printLongLine(__int64 a1)
{
  return printf("%ld\n", a1);
}

//----- (0000000000400C34) ----------------------------------------------------
int __fastcall printLongLongLine(__int64 a1)
{
  return printf("%ld\n", a1);
}

//----- (0000000000400C58) ----------------------------------------------------
int __fastcall printSizeTLine(__int64 a1)
{
  return printf("%zu\n", a1);
}

//----- (0000000000400C7C) ----------------------------------------------------
int __fastcall printHexCharLine(char a1)
{
  return printf("%02x\n", (unsigned int)a1);
}

//----- (0000000000400CA0) ----------------------------------------------------
int __fastcall printWcharLine(int a1)
{
  int v2; // [rsp+10h] [rbp-10h]
  int v3; // [rsp+14h] [rbp-Ch]

  v2 = a1;
  v3 = 0;
  return printf("%ls\n", &v2);
}

//----- (0000000000400CD0) ----------------------------------------------------
int __fastcall printUnsignedLine(unsigned int a1)
{
  return printf("%u\n", a1);
}

//----- (0000000000400CF1) ----------------------------------------------------
int __fastcall printHexUnsignedCharLine(unsigned __int8 a1)
{
  return printf("%02x\n", a1);
}

//----- (0000000000400D15) ----------------------------------------------------
int __fastcall printDoubleLine(double a1)
{
  return printf("%g\n", a1);
}

//----- (0000000000400D40) ----------------------------------------------------
int __fastcall printStructLine(unsigned int *a1)
{
  return printf("%d -- %d\n", *a1, a1[1]);
}

//----- (0000000000400D6C) ----------------------------------------------------
int __fastcall printBytesLine(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0LL; i < a2; ++i )
    printf("%02x", *(unsigned __int8 *)(a1 + i));
  return puts(s);
}

//----- (0000000000400DC3) ----------------------------------------------------
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
// 400900: using guessed type __int64 __fastcall __isoc99_sscanf(_QWORD, _QWORD, _QWORD);

//----- (0000000000400E9C) ----------------------------------------------------
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
// 4009B0: using guessed type __int64 __fastcall __isoc99_swscanf(_QWORD, _QWORD, _QWORD);

//----- (0000000000400F50) ----------------------------------------------------
__int64 globalReturnsTrue()
{
  return 1LL;
}

//----- (0000000000400F5B) ----------------------------------------------------
__int64 globalReturnsFalse()
{
  return 0LL;
}

//----- (0000000000400F66) ----------------------------------------------------
__int64 globalReturnsTrueOrFalse()
{
  return (unsigned int)(rand() % 2);
}

//----- (0000000000400F7C) ----------------------------------------------------
void good1()
{
  ;
}

//----- (0000000000400F82) ----------------------------------------------------
void good2()
{
  ;
}

//----- (0000000000400F88) ----------------------------------------------------
void good3()
{
  ;
}

//----- (0000000000400F8E) ----------------------------------------------------
void good4()
{
  ;
}

//----- (0000000000400F94) ----------------------------------------------------
void good5()
{
  ;
}

//----- (0000000000400F9A) ----------------------------------------------------
void good6()
{
  ;
}

//----- (0000000000400FA0) ----------------------------------------------------
void good7()
{
  ;
}

//----- (0000000000400FA6) ----------------------------------------------------
void good8()
{
  ;
}

//----- (0000000000400FAC) ----------------------------------------------------
void good9()
{
  ;
}

//----- (0000000000400FB2) ----------------------------------------------------
void bad1()
{
  ;
}

//----- (0000000000400FB8) ----------------------------------------------------
void bad2()
{
  ;
}

//----- (0000000000400FBE) ----------------------------------------------------
void bad3()
{
  ;
}

//----- (0000000000400FC4) ----------------------------------------------------
void bad4()
{
  ;
}

//----- (0000000000400FCA) ----------------------------------------------------
void bad5()
{
  ;
}

//----- (0000000000400FD0) ----------------------------------------------------
void bad6()
{
  ;
}

//----- (0000000000400FD6) ----------------------------------------------------
void bad7()
{
  ;
}

//----- (0000000000400FDC) ----------------------------------------------------
void bad8()
{
  ;
}

//----- (0000000000400FE2) ----------------------------------------------------
void bad9()
{
  ;
}

//----- (0000000000400FE8) ----------------------------------------------------
void __fastcall __noreturn internal_start(void *a1)
{
  (*((void (__fastcall **)(_QWORD))a1 + 1))(*((_QWORD *)a1 + 2));
  pthread_exit(0LL);
}

//----- (000000000040101B) ----------------------------------------------------
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

//----- (00000000004010BF) ----------------------------------------------------
_BOOL8 __fastcall stdThreadJoin(pthread_t *a1)
{
  void *thread_return; // [rsp+18h] [rbp-8h]

  return pthread_join(*a1, &thread_return) == 0;
}

//----- (00000000004010F3) ----------------------------------------------------
__int64 __fastcall stdThreadDestroy(void *a1)
{
  free(a1);
  return 1LL;
}

//----- (0000000000401112) ----------------------------------------------------
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

//----- (0000000000401187) ----------------------------------------------------
int __fastcall stdThreadLockAcquire(pthread_mutex_t *a1)
{
  return pthread_mutex_lock(a1);
}

//----- (00000000004011A1) ----------------------------------------------------
int __fastcall stdThreadLockRelease(pthread_mutex_t *a1)
{
  return pthread_mutex_unlock(a1);
}

//----- (00000000004011BB) ----------------------------------------------------
void __fastcall stdThreadLockDestroy(pthread_mutex_t *a1)
{
  pthread_mutex_destroy(a1);
  free(a1);
}

//----- (00000000004011F0) ----------------------------------------------------
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
// 601DD0: using guessed type __int64 (__fastcall *_frame_dummy_init_array_entry[2])();
// 601DD8: using guessed type __int64 (__fastcall *_do_global_dtors_aux_fini_array_entry)();

//----- (0000000000401264) ----------------------------------------------------
void term_proc()
{
  ;
}

// ALL OK, 56 function(s) have been successfully decompiled
