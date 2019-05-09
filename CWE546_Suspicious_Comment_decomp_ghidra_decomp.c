
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0060bff8;
  if (PTR___gmon_start___0060bff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004008d0(void)

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

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0060c020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0060c028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0060c030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0060c038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0060c040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0060c048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0060c050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0060c058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0060c060)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0060c068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0060c070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0060c078)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0060c080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0060c088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0060c090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0060c098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0060c0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0060c0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0060c0b0)();
  return tVar1;
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


/* WARNING: Removing unreachable block (ram,0x00400a77) */
/* WARNING: Removing unreachable block (ram,0x00400a81) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400ab4) */
/* WARNING: Removing unreachable block (ram,0x00400abe) */

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


/* WARNING: Removing unreachable block (ram,0x00400b04) */
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
  printLine("Calling CWE546_Suspicious_Comment__LATER_15_good();");
  CWE546_Suspicious_Comment__LATER_15_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_16_good();");
  CWE546_Suspicious_Comment__LATER_16_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_14_good();");
  CWE546_Suspicious_Comment__HACK_14_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_10_good();");
  CWE546_Suspicious_Comment__BUG_10_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_05_good();");
  CWE546_Suspicious_Comment__BUG_05_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_17_good();");
  CWE546_Suspicious_Comment__HACK_17_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_09_good();");
  CWE546_Suspicious_Comment__BUG_09_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_04_good();");
  CWE546_Suspicious_Comment__HACK_04_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_14_good();");
  CWE546_Suspicious_Comment__TODO_14_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_04_good();");
  CWE546_Suspicious_Comment__FIXME_04_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_04_good();");
  CWE546_Suspicious_Comment__TODO_04_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_13_good();");
  CWE546_Suspicious_Comment__TODO_13_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_11_good();");
  CWE546_Suspicious_Comment__HACK_11_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_16_good();");
  CWE546_Suspicious_Comment__TODO_16_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_15_good();");
  CWE546_Suspicious_Comment__BUG_15_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_15_good();");
  CWE546_Suspicious_Comment__HACK_15_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_15_good();");
  CWE546_Suspicious_Comment__TODO_15_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_02_good();");
  CWE546_Suspicious_Comment__FIXME_02_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_08_good();");
  CWE546_Suspicious_Comment__LATER_08_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_10_good();");
  CWE546_Suspicious_Comment__HACK_10_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_07_good();");
  CWE546_Suspicious_Comment__HACK_07_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_02_good();");
  CWE546_Suspicious_Comment__TODO_02_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_13_good();");
  CWE546_Suspicious_Comment__HACK_13_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_17_good();");
  CWE546_Suspicious_Comment__BUG_17_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_11_good();");
  CWE546_Suspicious_Comment__LATER_11_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_12_good();");
  CWE546_Suspicious_Comment__LATER_12_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_17_good();");
  CWE546_Suspicious_Comment__TODO_17_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_07_good();");
  CWE546_Suspicious_Comment__TODO_07_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_04_good();");
  CWE546_Suspicious_Comment__BUG_04_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_18_good();");
  CWE546_Suspicious_Comment__FIXME_18_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_14_good();");
  CWE546_Suspicious_Comment__BUG_14_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_02_good();");
  CWE546_Suspicious_Comment__BUG_02_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_18_good();");
  CWE546_Suspicious_Comment__BUG_18_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_16_good();");
  CWE546_Suspicious_Comment__BUG_16_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_01_good();");
  CWE546_Suspicious_Comment__TODO_01_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_03_good();");
  CWE546_Suspicious_Comment__LATER_03_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_10_good();");
  CWE546_Suspicious_Comment__TODO_10_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_18_good();");
  CWE546_Suspicious_Comment__LATER_18_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_02_good();");
  CWE546_Suspicious_Comment__LATER_02_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_17_good();");
  CWE546_Suspicious_Comment__LATER_17_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_03_good();");
  CWE546_Suspicious_Comment__BUG_03_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_10_good();");
  CWE546_Suspicious_Comment__LATER_10_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_18_good();");
  CWE546_Suspicious_Comment__TODO_18_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_12_good();");
  CWE546_Suspicious_Comment__HACK_12_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_01_good();");
  CWE546_Suspicious_Comment__BUG_01_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_06_good();");
  CWE546_Suspicious_Comment__TODO_06_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_12_good();");
  CWE546_Suspicious_Comment__TODO_12_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_01_good();");
  CWE546_Suspicious_Comment__FIXME_01_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_01_good();");
  CWE546_Suspicious_Comment__HACK_01_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_09_good();");
  CWE546_Suspicious_Comment__HACK_09_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_03_good();");
  CWE546_Suspicious_Comment__FIXME_03_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_08_good();");
  CWE546_Suspicious_Comment__TODO_08_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_09_good();");
  CWE546_Suspicious_Comment__FIXME_09_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_04_good();");
  CWE546_Suspicious_Comment__LATER_04_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_10_good();");
  CWE546_Suspicious_Comment__FIXME_10_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_16_good();");
  CWE546_Suspicious_Comment__FIXME_16_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_01_good();");
  CWE546_Suspicious_Comment__LATER_01_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_05_good();");
  CWE546_Suspicious_Comment__LATER_05_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_13_good();");
  CWE546_Suspicious_Comment__LATER_13_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_08_good();");
  CWE546_Suspicious_Comment__HACK_08_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_13_good();");
  CWE546_Suspicious_Comment__BUG_13_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_08_good();");
  CWE546_Suspicious_Comment__FIXME_08_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_07_good();");
  CWE546_Suspicious_Comment__BUG_07_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_03_good();");
  CWE546_Suspicious_Comment__HACK_03_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_15_good();");
  CWE546_Suspicious_Comment__FIXME_15_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_06_good();");
  CWE546_Suspicious_Comment__BUG_06_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_16_good();");
  CWE546_Suspicious_Comment__HACK_16_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_09_good();");
  CWE546_Suspicious_Comment__TODO_09_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_11_good();");
  CWE546_Suspicious_Comment__FIXME_11_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_06_good();");
  CWE546_Suspicious_Comment__LATER_06_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_13_good();");
  CWE546_Suspicious_Comment__FIXME_13_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_17_good();");
  CWE546_Suspicious_Comment__FIXME_17_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_08_good();");
  CWE546_Suspicious_Comment__BUG_08_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_06_good();");
  CWE546_Suspicious_Comment__HACK_06_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_07_good();");
  CWE546_Suspicious_Comment__FIXME_07_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_05_good();");
  CWE546_Suspicious_Comment__HACK_05_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_09_good();");
  CWE546_Suspicious_Comment__LATER_09_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_06_good();");
  CWE546_Suspicious_Comment__FIXME_06_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_11_good();");
  CWE546_Suspicious_Comment__BUG_11_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_02_good();");
  CWE546_Suspicious_Comment__HACK_02_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_12_good();");
  CWE546_Suspicious_Comment__FIXME_12_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_14_good();");
  CWE546_Suspicious_Comment__FIXME_14_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_07_good();");
  CWE546_Suspicious_Comment__LATER_07_good();
  printLine("Calling CWE546_Suspicious_Comment__HACK_18_good();");
  CWE546_Suspicious_Comment__HACK_18_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_03_good();");
  CWE546_Suspicious_Comment__TODO_03_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_14_good();");
  CWE546_Suspicious_Comment__LATER_14_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_11_good();");
  CWE546_Suspicious_Comment__TODO_11_good();
  printLine("Calling CWE546_Suspicious_Comment__TODO_05_good();");
  CWE546_Suspicious_Comment__TODO_05_good();
  printLine("Calling CWE546_Suspicious_Comment__BUG_12_good();");
  CWE546_Suspicious_Comment__BUG_12_good();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_05_good();");
  CWE546_Suspicious_Comment__FIXME_05_good();
  printLine("Calling CWE546_Suspicious_Comment__LATER_15_bad();");
  CWE546_Suspicious_Comment__LATER_15_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_16_bad();");
  CWE546_Suspicious_Comment__LATER_16_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_14_bad();");
  CWE546_Suspicious_Comment__HACK_14_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_10_bad();");
  CWE546_Suspicious_Comment__BUG_10_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_05_bad();");
  CWE546_Suspicious_Comment__BUG_05_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_17_bad();");
  CWE546_Suspicious_Comment__HACK_17_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_09_bad();");
  CWE546_Suspicious_Comment__BUG_09_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_04_bad();");
  CWE546_Suspicious_Comment__HACK_04_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_14_bad();");
  CWE546_Suspicious_Comment__TODO_14_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_04_bad();");
  CWE546_Suspicious_Comment__FIXME_04_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_04_bad();");
  CWE546_Suspicious_Comment__TODO_04_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_13_bad();");
  CWE546_Suspicious_Comment__TODO_13_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_11_bad();");
  CWE546_Suspicious_Comment__HACK_11_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_16_bad();");
  CWE546_Suspicious_Comment__TODO_16_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_15_bad();");
  CWE546_Suspicious_Comment__BUG_15_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_15_bad();");
  CWE546_Suspicious_Comment__HACK_15_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_15_bad();");
  CWE546_Suspicious_Comment__TODO_15_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_02_bad();");
  CWE546_Suspicious_Comment__FIXME_02_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_08_bad();");
  CWE546_Suspicious_Comment__LATER_08_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_10_bad();");
  CWE546_Suspicious_Comment__HACK_10_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_07_bad();");
  CWE546_Suspicious_Comment__HACK_07_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_02_bad();");
  CWE546_Suspicious_Comment__TODO_02_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_13_bad();");
  CWE546_Suspicious_Comment__HACK_13_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_17_bad();");
  CWE546_Suspicious_Comment__BUG_17_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_11_bad();");
  CWE546_Suspicious_Comment__LATER_11_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_12_bad();");
  CWE546_Suspicious_Comment__LATER_12_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_17_bad();");
  CWE546_Suspicious_Comment__TODO_17_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_07_bad();");
  CWE546_Suspicious_Comment__TODO_07_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_04_bad();");
  CWE546_Suspicious_Comment__BUG_04_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_18_bad();");
  CWE546_Suspicious_Comment__FIXME_18_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_14_bad();");
  CWE546_Suspicious_Comment__BUG_14_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_02_bad();");
  CWE546_Suspicious_Comment__BUG_02_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_18_bad();");
  CWE546_Suspicious_Comment__BUG_18_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_16_bad();");
  CWE546_Suspicious_Comment__BUG_16_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_01_bad();");
  CWE546_Suspicious_Comment__TODO_01_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_03_bad();");
  CWE546_Suspicious_Comment__LATER_03_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_10_bad();");
  CWE546_Suspicious_Comment__TODO_10_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_18_bad();");
  CWE546_Suspicious_Comment__LATER_18_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_02_bad();");
  CWE546_Suspicious_Comment__LATER_02_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_17_bad();");
  CWE546_Suspicious_Comment__LATER_17_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_03_bad();");
  CWE546_Suspicious_Comment__BUG_03_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_10_bad();");
  CWE546_Suspicious_Comment__LATER_10_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_18_bad();");
  CWE546_Suspicious_Comment__TODO_18_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_12_bad();");
  CWE546_Suspicious_Comment__HACK_12_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_01_bad();");
  CWE546_Suspicious_Comment__BUG_01_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_06_bad();");
  CWE546_Suspicious_Comment__TODO_06_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_12_bad();");
  CWE546_Suspicious_Comment__TODO_12_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_01_bad();");
  CWE546_Suspicious_Comment__FIXME_01_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_01_bad();");
  CWE546_Suspicious_Comment__HACK_01_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_09_bad();");
  CWE546_Suspicious_Comment__HACK_09_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_03_bad();");
  CWE546_Suspicious_Comment__FIXME_03_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_08_bad();");
  CWE546_Suspicious_Comment__TODO_08_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_09_bad();");
  CWE546_Suspicious_Comment__FIXME_09_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_04_bad();");
  CWE546_Suspicious_Comment__LATER_04_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_10_bad();");
  CWE546_Suspicious_Comment__FIXME_10_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_16_bad();");
  CWE546_Suspicious_Comment__FIXME_16_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_01_bad();");
  CWE546_Suspicious_Comment__LATER_01_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_05_bad();");
  CWE546_Suspicious_Comment__LATER_05_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_13_bad();");
  CWE546_Suspicious_Comment__LATER_13_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_08_bad();");
  CWE546_Suspicious_Comment__HACK_08_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_13_bad();");
  CWE546_Suspicious_Comment__BUG_13_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_08_bad();");
  CWE546_Suspicious_Comment__FIXME_08_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_07_bad();");
  CWE546_Suspicious_Comment__BUG_07_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_03_bad();");
  CWE546_Suspicious_Comment__HACK_03_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_15_bad();");
  CWE546_Suspicious_Comment__FIXME_15_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_06_bad();");
  CWE546_Suspicious_Comment__BUG_06_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_16_bad();");
  CWE546_Suspicious_Comment__HACK_16_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_09_bad();");
  CWE546_Suspicious_Comment__TODO_09_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_11_bad();");
  CWE546_Suspicious_Comment__FIXME_11_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_06_bad();");
  CWE546_Suspicious_Comment__LATER_06_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_13_bad();");
  CWE546_Suspicious_Comment__FIXME_13_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_17_bad();");
  CWE546_Suspicious_Comment__FIXME_17_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_08_bad();");
  CWE546_Suspicious_Comment__BUG_08_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_06_bad();");
  CWE546_Suspicious_Comment__HACK_06_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_07_bad();");
  CWE546_Suspicious_Comment__FIXME_07_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_05_bad();");
  CWE546_Suspicious_Comment__HACK_05_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_09_bad();");
  CWE546_Suspicious_Comment__LATER_09_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_06_bad();");
  CWE546_Suspicious_Comment__FIXME_06_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_11_bad();");
  CWE546_Suspicious_Comment__BUG_11_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_02_bad();");
  CWE546_Suspicious_Comment__HACK_02_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_12_bad();");
  CWE546_Suspicious_Comment__FIXME_12_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_14_bad();");
  CWE546_Suspicious_Comment__FIXME_14_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_07_bad();");
  CWE546_Suspicious_Comment__LATER_07_bad();
  printLine("Calling CWE546_Suspicious_Comment__HACK_18_bad();");
  CWE546_Suspicious_Comment__HACK_18_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_03_bad();");
  CWE546_Suspicious_Comment__TODO_03_bad();
  printLine("Calling CWE546_Suspicious_Comment__LATER_14_bad();");
  CWE546_Suspicious_Comment__LATER_14_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_11_bad();");
  CWE546_Suspicious_Comment__TODO_11_bad();
  printLine("Calling CWE546_Suspicious_Comment__TODO_05_bad();");
  CWE546_Suspicious_Comment__TODO_05_bad();
  printLine("Calling CWE546_Suspicious_Comment__BUG_12_bad();");
  CWE546_Suspicious_Comment__BUG_12_bad();
  printLine("Calling CWE546_Suspicious_Comment__FIXME_05_bad();");
  CWE546_Suspicious_Comment__FIXME_05_bad();
  return 0;
}


void CWE546_Suspicious_Comment__BUG_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_10_bad(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_05_bad(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_05_bad(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_15_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_12_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__HACK_01_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_01_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__TODO_04_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401cb6) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_03_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_15_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_12_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__FIXME_14_bad(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_16_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_16_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__FIXME_18_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_18_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__LATER_03_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_07_bad(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_02_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_13_good(void)

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


void CWE546_Suspicious_Comment__HACK_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_05_bad(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_07_bad(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_18_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_18_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__FIXME_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_12_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__HACK_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_14_bad(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_10_bad(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_02_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_15_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_07_bad(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_07_good(void)

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


void CWE546_Suspicious_Comment__BUG_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_06_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402792) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_04_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402804) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_04_good(void)

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


void CWE546_Suspicious_Comment__LATER_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_06_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040290d) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_17_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__TODO_03_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_02_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_17_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__HACK_03_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_03_good(void)

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


void CWE546_Suspicious_Comment__TODO_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_05_bad(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_14_bad(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_17_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__FIXME_16_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_16_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__LATER_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_02_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_18_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_18_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__HACK_18_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_18_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__FIXME_10_bad(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_14_bad(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_01_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_01_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__TODO_06_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402ff5) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_15_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_16_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_16_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__LATER_04_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004030e6) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_10_bad(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_07_bad(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_01_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_01_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__BUG_15_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_04_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403336) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__FIXME_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_01_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_01_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__BUG_03_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_04_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403421) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_07_bad(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_12_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__LATER_06_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040356f) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__LATER_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_17_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__TODO_01_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_01_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__HACK_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("Hello");
    local_c = local_c + 1;
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_17_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__HACK_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__HACK_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_12_good(void)

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


void CWE546_Suspicious_Comment__FIXME_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_16_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_16_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__FIXME_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_02_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_14_bad(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalFive == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__TODO_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__LATER_05_bad(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (staticFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__FIXME_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__FIXME_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__TODO_18_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__TODO_18_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__BUG_06_bad(void)

{
  printLine("Hello");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403ac1) */

void good1(void)

{
  printLine("Hello");
  return;
}


void good2(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__BUG_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__BUG_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__BUG_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE546_Suspicious_Comment__HACK_16_bad(void)

{
  printLine("Hello");
  return;
}


void good1(void)

{
  printLine("Hello");
  return;
}


void CWE546_Suspicious_Comment__HACK_16_good(void)

{
  good1();
  return;
}


void CWE546_Suspicious_Comment__LATER_10_bad(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void good1(void)

{
  if (globalFalse == 0) {
    printLine("Hello");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalTrue != 0) {
    printLine("Hello");
  }
  return;
}


void CWE546_Suspicious_Comment__LATER_10_good(void)

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
  printf((char *)(double)fParm1,&DAT_00407135);
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
  printf(pcParm1,&DAT_00407152);
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
    __isoc99_sscanf(lVar1,&DAT_00407160,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00407168,&local_14);
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

