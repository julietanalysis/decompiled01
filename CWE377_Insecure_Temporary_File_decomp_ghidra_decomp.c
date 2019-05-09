
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0060bff8;
  if (PTR___gmon_start___0060bff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400a50(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0060c010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0060c018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0060c020)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0060c028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0060c030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0060c038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0060c040)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0060c048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0060c050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * tmpnam(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_tmpnam_0060c058)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0060c060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0060c068)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0060c070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0060c078)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0060c080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0060c088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0060c090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int mkstemp(char *__template)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkstemp_0060c098)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0060c0a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0060c0a8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * mktemp(char *__template)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_mktemp_0060c0b0)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0060c0b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0060c0c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0060c0c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0060c0d0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0060c0d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0060c0e0)();
  return tVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * tempnam(char *__dir,char *__pfx)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_tempnam_0060c0e8)();
  return pcVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0060bff8)();
  return;
}


void _start(undefined8 uParm1,undefined8 uParm2,undefined8 uParm3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,uParm3,
                    auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00400c67) */
/* WARNING: Removing unreachable block (ram,0x00400c71) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400ca4) */
/* WARNING: Removing unreachable block (ram,0x00400cae) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_6355 == 0) {
    deregister_tm_clones();
    completed_6355 = 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400cf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}


undefined8 main(undefined4 uParm1,undefined8 uParm2)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  globalArgc = uParm1;
  globalArgv = uParm2;
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_09_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_09_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_10_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_10_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_12_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_12_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_10_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_10_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_04_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_04_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_07_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_07_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_17_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_17_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_14_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_14_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_09_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_09_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_01_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_01_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_07_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_07_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_11_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_11_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_06_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_06_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_03_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_03_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_06_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_06_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_11_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_11_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_02_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_02_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_13_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_13_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_09_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_09_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_04_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_04_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_15_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_15_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_04_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_04_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_15_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_15_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_01_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_01_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_02_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_02_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_18_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_18_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_05_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_05_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_12_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_12_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_15_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_15_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_06_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_06_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_03_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_03_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_01_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_01_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_08_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_08_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_03_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_03_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_10_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_10_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_14_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_14_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_14_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_14_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_17_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_17_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_18_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_18_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_05_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_05_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_11_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_11_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_08_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_08_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_18_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_18_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_16_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_16_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_16_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_16_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_17_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_17_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_05_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_05_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_16_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_16_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_08_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_08_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_02_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_02_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_13_good();");
  CWE377_Insecure_Temporary_File__char_tmpnam_13_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_12_good();");
  CWE377_Insecure_Temporary_File__char_mktemp_12_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_07_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_07_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_13_good();");
  CWE377_Insecure_Temporary_File__char_tempnam_13_good();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_09_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_09_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_10_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_10_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_12_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_12_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_10_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_10_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_04_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_04_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_07_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_07_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_17_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_17_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_14_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_14_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_09_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_09_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_01_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_01_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_07_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_07_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_11_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_11_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_06_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_06_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_03_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_03_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_06_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_06_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_11_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_11_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_02_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_02_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_13_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_13_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_09_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_09_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_04_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_04_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_15_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_15_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_04_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_04_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_15_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_15_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_01_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_01_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_02_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_02_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_18_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_18_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_05_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_05_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_12_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_12_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_15_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_15_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_06_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_06_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_03_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_03_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_01_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_01_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_08_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_08_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_03_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_03_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_10_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_10_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_14_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_14_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_14_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_14_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_17_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_17_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_18_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_18_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_05_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_05_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_11_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_11_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_08_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_08_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_18_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_18_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_16_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_16_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_16_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_16_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_17_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_17_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_05_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_05_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_16_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_16_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_08_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_08_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_02_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_02_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tmpnam_13_bad();");
  CWE377_Insecure_Temporary_File__char_tmpnam_13_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_mktemp_12_bad();");
  CWE377_Insecure_Temporary_File__char_mktemp_12_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_07_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_07_bad();
  printLine("Calling CWE377_Insecure_Temporary_File__char_tempnam_13_bad();");
  CWE377_Insecure_Temporary_File__char_tempnam_13_bad();
  return 0;
}


void CWE377_Insecure_Temporary_File__char_mktemp_03_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  local_14 = open(local_10,0x42,0x180);
  if (local_14 != -1) {
    printLine();
    close(local_14);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_14_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  if (globalFive == 5) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_02_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  free(__file);
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_12_bad(void)

{
  int __fd;
  char *__file;
  
  __fd = globalReturnsTrueOrFalse();
  if (__fd == 0) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0xc2,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  else {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_38 = 0x6c69662f706d742f;
    local_30 = 0x58585858585865;
    local_10 = mkstemp((char *)&local_38);
    printLine(&local_38);
    if (local_10 != -1) {
      printLine();
      close(local_10);
    }
  }
  else {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_12_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_04_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file != (char *)0x0) {
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00401c2c) */

void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_14_bad(void)

{
  int __fd;
  char *__file;
  
  if (globalFive == 5) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_12_bad(void)

{
  int iVar1;
  undefined8 local_48;
  undefined local_40;
  undefined8 local_38;
  undefined local_30;
  int local_24;
  char *local_20;
  int local_14;
  char *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_48 = 0x5858585858586e66;
    local_40 = 0;
    local_20 = mktemp((char *)&local_48);
    if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_20);
    local_24 = open(local_20,0xc2,0x180);
    if (local_24 != -1) {
      printLine();
      close(local_24);
    }
  }
  else {
    local_38 = 0x5858585858586e66;
    local_30 = 0;
    local_10 = mktemp((char *)&local_38);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_38 = 0x6c69662f706d742f;
    local_30 = 0x58585858585865;
    local_10 = mkstemp((char *)&local_38);
    printLine(&local_38);
    if (local_10 != -1) {
      printLine();
      close(local_10);
    }
  }
  else {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_12_good(void)

{
  good1();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_08_bad(void)

{
  int __fd;
  char *__file;
  
  __fd = staticReturnsTrue();
  if (__fd != 0) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_14_bad(void)

{
  int __fd;
  char *__file;
  
  if (globalFive == 5) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_03_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  free(__file);
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_05_bad(void)

{
  int __fd;
  char *__file;
  
  if (staticTrue != 0) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFalse == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticTrue != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_04_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 != (char *)0x0) {
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x0040269f) */

void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_17_bad(void)

{
  int __fd;
  char *__file;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) break;
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_10 = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_10 != -1) {
      printLine();
      close(local_10);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_17_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_05_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  if (staticTrue != 0) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFalse == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticTrue != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_17_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_1c;
  char *local_18;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_18 = mktemp((char *)&local_28);
    if (local_18 == (char *)0x0) break;
    printLine(local_18);
    local_1c = open(local_18,0x42,0x180);
    if (local_1c != -1) {
      printLine();
      close(local_1c);
    }
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_10 = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_10 != -1) {
      printLine();
      close(local_10);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_17_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_11_bad(void)

{
  int __fd;
  char *__file;
  
  __fd = globalReturnsTrue();
  if (__fd != 0) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_10_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  if (globalTrue != 0) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFalse == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalTrue != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_10_good(void)

{
  good1();
  good2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE377_Insecure_Temporary_File__char_tempnam_08_bad(void)

{
  int __fd;
  char *__file;
  
  __fd = staticReturnsTrue();
  if (__fd != 0) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_09_bad(void)

{
  int __fd;
  char *__file;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_11_bad(void)

{
  int iVar1;
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_02_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  local_14 = open(local_10,0x42,0x180);
  if (local_14 != -1) {
    printLine();
    close(local_14);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_12_bad(void)

{
  int __fd;
  char *__file;
  
  __fd = globalReturnsTrueOrFalse();
  if (__fd == 0) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0xc2,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  else {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_38 = 0x6c69662f706d742f;
    local_30 = 0x58585858585865;
    local_10 = mkstemp((char *)&local_38);
    printLine(&local_38);
    if (local_10 != -1) {
      printLine();
      close(local_10);
    }
  }
  else {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_12_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_16_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  free(__file);
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_16_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_13_bad(void)

{
  int __fd;
  char *__file;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_04_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file != (char *)0x0) {
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00403891) */

void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_15_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  free(__file);
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_05_bad(void)

{
  int __fd;
  char *__file;
  
  if (staticTrue != 0) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFalse == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticTrue != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_15_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  local_14 = open(local_10,0x42,0x180);
  if (local_14 != -1) {
    printLine();
    close(local_14);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_01_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  free(__file);
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_01_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_17_bad(void)

{
  int __fd;
  char *__file;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) break;
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_10 = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_10 != -1) {
      printLine();
      close(local_10);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_17_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_06_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 != (char *)0x0) {
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x0040400f) */

void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_10_bad(void)

{
  int __fd;
  char *__file;
  
  if (globalTrue != 0) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFalse == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalTrue != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_10_bad(void)

{
  int __fd;
  char *__file;
  
  if (globalTrue != 0) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalFalse == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (globalTrue != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_01_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  local_14 = open(local_10,0x42,0x180);
  if (local_14 != -1) {
    printLine();
    close(local_14);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_01_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_11_bad(void)

{
  int __fd;
  char *__file;
  
  __fd = globalReturnsTrue();
  if (__fd != 0) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_09_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_16_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_16_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_07_bad(void)

{
  int __fd;
  char *__file;
  
  if (staticFive == 5) {
    __file = tmpnam((char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_16_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  local_14 = open(local_10,0x42,0x180);
  if (local_14 != -1) {
    printLine();
    close(local_14);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_16_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_02_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_06_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file != (char *)0x0) {
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00404caf) */

void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_15_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_18_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_18_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_13_bad(void)

{
  int __fd;
  char *__file;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_13_good(void)

{
  good1();
  good2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE377_Insecure_Temporary_File__char_mktemp_08_bad(void)

{
  int iVar1;
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_01_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_01_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_07_bad(void)

{
  int __fd;
  char *__file;
  
  if (staticFive == 5) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_03_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_13_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_09_bad(void)

{
  int __fd;
  char *__file;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __file = tempnam((char *)0x0,(char *)0x0);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    free(__file);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_18_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  local_28 = 0x5858585858586e66;
  local_20 = 0;
  local_10 = mktemp((char *)&local_28);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  local_14 = open(local_10,0x42,0x180);
  if (local_14 != -1) {
    printLine();
    close(local_14);
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_18_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_06_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tmpnam((char *)0x0);
  if (__file != (char *)0x0) {
    printLine(__file);
    __fd = open(__file,0x42,0x180);
    if (__fd != -1) {
      printLine();
      close(__fd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00405abc) */

void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tmpnam_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_18_bad(void)

{
  int __fd;
  char *__file;
  
  __file = tempnam((char *)0x0,(char *)0x0);
  if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(__file);
  __fd = open(__file,0x42,0x180);
  if (__fd != -1) {
    printLine();
    close(__fd);
  }
  free(__file);
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  local_28 = 0x6c69662f706d742f;
  local_20 = 0x58585858585865;
  local_c = mkstemp((char *)&local_28);
  printLine(&local_28);
  if (local_c != -1) {
    printLine();
    close(local_c);
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_tempnam_18_good(void)

{
  good1();
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_07_bad(void)

{
  undefined8 local_28;
  undefined local_20;
  int local_14;
  char *local_10;
  
  if (staticFive == 5) {
    local_28 = 0x5858585858586e66;
    local_20 = 0;
    local_10 = mktemp((char *)&local_28);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
    local_14 = open(local_10,0x42,0x180);
    if (local_14 != -1) {
      printLine();
      close(local_14);
    }
  }
  return;
}


void good1(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  if (staticFive == 5) {
    local_28 = 0x6c69662f706d742f;
    local_20 = 0x58585858585865;
    local_c = mkstemp((char *)&local_28);
    printLine(&local_28);
    if (local_c != -1) {
      printLine();
      close(local_c);
    }
  }
  return;
}


void CWE377_Insecure_Temporary_File__char_mktemp_07_good(void)

{
  good1();
  good2();
  return;
}


void printLine(char *pcParm1)

{
  if (pcParm1 != (char *)0x0) {
    puts(pcParm1);
  }
  return;
}


void printWLine(long lParm1)

{
  if (lParm1 != 0) {
    wprintf(L"%ls\n",lParm1);
  }
  return;
}


void printIntLine(uint uParm1)

{
  printf("%d\n",(ulong)uParm1);
  return;
}


void printShortLine(short sParm1)

{
  printf("%hd\n",(ulong)(uint)(int)sParm1);
  return;
}


void printFloatLine(float fParm1)

{
  printf((char *)(double)fParm1,&DAT_00408d59);
  return;
}


void printLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printLongLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printSizeTLine(undefined8 uParm1)

{
  printf("%zu\n",uParm1);
  return;
}


void printHexCharLine(char cParm1)

{
  printf("%02x\n",(ulong)(uint)(int)cParm1);
  return;
}


void printWcharLine(undefined4 uParm1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = uParm1;
  printf("%ls\n",&local_18);
  return;
}


void printUnsignedLine(uint uParm1)

{
  printf("%u\n",(ulong)uParm1);
  return;
}


void printHexUnsignedCharLine(byte bParm1)

{
  printf("%02x\n",(ulong)bParm1);
  return;
}


void printDoubleLine(char *pcParm1)

{
  printf(pcParm1,&DAT_00408d76);
  return;
}


void printStructLine(uint *puParm1)

{
  printf("%d -- %d\n",(ulong)*puParm1,(ulong)puParm1[1]);
  return;
}


void printBytesLine(long lParm1,ulong uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < uParm2) {
    printf("%02x",(ulong)*(byte *)(local_10 + lParm1));
    local_10 = local_10 + 1;
  }
  puts("");
  return;
}


ulong decodeHexChars(long lParm1,ulong uParm2,long lParm3)

{
  long lVar1;
  ushort **ppuVar2;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2)] & 0x1000) == 0) break;
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2 + 1)] & 0x1000) == 0) {
      return local_10;
    }
    lVar1 = local_10 * 2 + lParm3;
    __isoc99_sscanf(lVar1,&DAT_00408d84,&local_14,lVar1);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


ulong decodeHexWChars(long lParm1,ulong uParm2,long lParm3)

{
  int iVar1;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8 + 4));
    if (iVar1 == 0) {
      return local_10;
    }
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00408d8c,&local_14);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


undefined8 globalReturnsTrue(void)

{
  return 1;
}


undefined8 globalReturnsFalse(void)

{
  return 0;
}


ulong globalReturnsTrueOrFalse(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = rand();
  uVar2 = (uint)(iVar1 >> 0x1f) >> 0x1f;
  return (ulong)((iVar1 + uVar2 & 1) - uVar2);
}


void good1(void)

{
  return;
}


void good2(void)

{
  return;
}


void good3(void)

{
  return;
}


void good4(void)

{
  return;
}


void good5(void)

{
  return;
}


void good6(void)

{
  return;
}


void good7(void)

{
  return;
}


void good8(void)

{
  return;
}


void good9(void)

{
  return;
}


void bad1(void)

{
  return;
}


void bad2(void)

{
  return;
}


void bad3(void)

{
  return;
}


void bad4(void)

{
  return;
}


void bad5(void)

{
  return;
}


void bad6(void)

{
  return;
}


void bad7(void)

{
  return;
}


void bad8(void)

{
  return;
}


void bad9(void)

{
  return;
}


void internal_start(long lParm1,undefined8 uParm2)

{
  (**(code **)(lParm1 + 8))(*(undefined8 *)(lParm1 + 0x10),uParm2,*(undefined8 *)(lParm1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


undefined8 stdThreadCreate(pthread_t pParm1,pthread_t pParm2,pthread_t **pppParm3)

{
  int iVar1;
  undefined8 uVar2;
  pthread_t local_18;
  pthread_t *local_10;
  
  *pppParm3 = (pthread_t *)0x0;
  local_10 = (pthread_t *)malloc(0x18);
  if (local_10 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10[1] = pParm1;
    local_10[2] = pParm2;
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,internal_start,local_10);
    if (iVar1 == 0) {
      *local_10 = local_18;
      *pppParm3 = local_10;
      uVar2 = 1;
    }
    else {
      free(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}


ulong stdThreadJoin(pthread_t *ppParm1)

{
  int iVar1;
  void *local_10;
  
  iVar1 = pthread_join(*ppParm1,&local_10);
  return (ulong)(iVar1 == 0);
}


undefined8 stdThreadDestroy(void *pvParm1)

{
  free(pvParm1);
  return 1;
}


undefined8 stdThreadLockCreate(pthread_mutex_t **ppabParm1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *ppabParm1 = (pthread_mutex_t *)0x0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *ppabParm1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(ppabParm1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


void stdThreadLockAcquire(pthread_mutex_t *pabParm1)

{
  pthread_mutex_lock(pabParm1);
  return;
}


void stdThreadLockRelease(pthread_mutex_t *pabParm1)

{
  pthread_mutex_unlock(pabParm1);
  return;
}


void stdThreadLockDestroy(pthread_mutex_t *pabParm1)

{
  pthread_mutex_destroy(pabParm1);
  free(pabParm1);
  return;
}


void __libc_csu_init(EVP_PKEY_CTX *pEParm1,undefined8 uParm2,undefined8 uParm3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(pEParm1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)pEParm1 & 0xffffffff,uParm2,uParm3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void _fini(void)

{
  return;
}

