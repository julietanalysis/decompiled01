
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0060aff8;
  if (PTR___gmon_start___0060aff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004008d0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0060b010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0060b018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0060b020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0060b028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0060b030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0060b038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0060b040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0060b048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0060b050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0060b058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0060b060)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0060b068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0060b070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0060b078)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0060b080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0060b088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0060b090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0060b098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0060b0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0060b0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0060b0b0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0060aff8)();
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
  printLine("Calling CWE843_Type_Confusion__char_45_good();");
  CWE843_Type_Confusion__char_45_good();
  printLine("Calling CWE843_Type_Confusion__short_06_good();");
  CWE843_Type_Confusion__short_06_good();
  printLine("Calling CWE843_Type_Confusion__short_15_good();");
  CWE843_Type_Confusion__short_15_good();
  printLine("Calling CWE843_Type_Confusion__char_01_good();");
  CWE843_Type_Confusion__char_01_good();
  printLine("Calling CWE843_Type_Confusion__short_03_good();");
  CWE843_Type_Confusion__short_03_good();
  printLine("Calling CWE843_Type_Confusion__char_67_good();");
  CWE843_Type_Confusion__char_67_good();
  printLine("Calling CWE843_Type_Confusion__short_12_good();");
  CWE843_Type_Confusion__short_12_good();
  printLine("Calling CWE843_Type_Confusion__char_52_good();");
  CWE843_Type_Confusion__char_52_good();
  printLine("Calling CWE843_Type_Confusion__char_08_good();");
  CWE843_Type_Confusion__char_08_good();
  printLine("Calling CWE843_Type_Confusion__short_04_good();");
  CWE843_Type_Confusion__short_04_good();
  printLine("Calling CWE843_Type_Confusion__short_32_good();");
  CWE843_Type_Confusion__short_32_good();
  printLine("Calling CWE843_Type_Confusion__short_17_good();");
  CWE843_Type_Confusion__short_17_good();
  printLine("Calling CWE843_Type_Confusion__char_51_good();");
  CWE843_Type_Confusion__char_51_good();
  printLine("Calling CWE843_Type_Confusion__short_14_good();");
  CWE843_Type_Confusion__short_14_good();
  printLine("Calling CWE843_Type_Confusion__short_66_good();");
  CWE843_Type_Confusion__short_66_good();
  printLine("Calling CWE843_Type_Confusion__short_08_good();");
  CWE843_Type_Confusion__short_08_good();
  printLine("Calling CWE843_Type_Confusion__short_13_good();");
  CWE843_Type_Confusion__short_13_good();
  printLine("Calling CWE843_Type_Confusion__char_15_good();");
  CWE843_Type_Confusion__char_15_good();
  printLine("Calling CWE843_Type_Confusion__char_64_good();");
  CWE843_Type_Confusion__char_64_good();
  printLine("Calling CWE843_Type_Confusion__short_09_good();");
  CWE843_Type_Confusion__short_09_good();
  printLine("Calling CWE843_Type_Confusion__short_01_good();");
  CWE843_Type_Confusion__short_01_good();
  printLine("Calling CWE843_Type_Confusion__char_10_good();");
  CWE843_Type_Confusion__char_10_good();
  printLine("Calling CWE843_Type_Confusion__short_41_good();");
  CWE843_Type_Confusion__short_41_good();
  printLine("Calling CWE843_Type_Confusion__char_68_good();");
  CWE843_Type_Confusion__char_68_good();
  printLine("Calling CWE843_Type_Confusion__short_10_good();");
  CWE843_Type_Confusion__short_10_good();
  printLine("Calling CWE843_Type_Confusion__short_34_good();");
  CWE843_Type_Confusion__short_34_good();
  printLine("Calling CWE843_Type_Confusion__char_32_good();");
  CWE843_Type_Confusion__char_32_good();
  printLine("Calling CWE843_Type_Confusion__char_09_good();");
  CWE843_Type_Confusion__char_09_good();
  printLine("Calling CWE843_Type_Confusion__short_63_good();");
  CWE843_Type_Confusion__short_63_good();
  printLine("Calling CWE843_Type_Confusion__char_13_good();");
  CWE843_Type_Confusion__char_13_good();
  printLine("Calling CWE843_Type_Confusion__char_14_good();");
  CWE843_Type_Confusion__char_14_good();
  printLine("Calling CWE843_Type_Confusion__char_34_good();");
  CWE843_Type_Confusion__char_34_good();
  printLine("Calling CWE843_Type_Confusion__char_04_good();");
  CWE843_Type_Confusion__char_04_good();
  printLine("Calling CWE843_Type_Confusion__char_07_good();");
  CWE843_Type_Confusion__char_07_good();
  printLine("Calling CWE843_Type_Confusion__short_53_good();");
  CWE843_Type_Confusion__short_53_good();
  printLine("Calling CWE843_Type_Confusion__char_06_good();");
  CWE843_Type_Confusion__char_06_good();
  printLine("Calling CWE843_Type_Confusion__char_66_good();");
  CWE843_Type_Confusion__char_66_good();
  printLine("Calling CWE843_Type_Confusion__short_65_good();");
  CWE843_Type_Confusion__short_65_good();
  printLine("Calling CWE843_Type_Confusion__short_45_good();");
  CWE843_Type_Confusion__short_45_good();
  printLine("Calling CWE843_Type_Confusion__char_02_good();");
  CWE843_Type_Confusion__char_02_good();
  printLine("Calling CWE843_Type_Confusion__short_11_good();");
  CWE843_Type_Confusion__short_11_good();
  printLine("Calling CWE843_Type_Confusion__char_54_good();");
  CWE843_Type_Confusion__char_54_good();
  printLine("Calling CWE843_Type_Confusion__short_67_good();");
  CWE843_Type_Confusion__short_67_good();
  printLine("Calling CWE843_Type_Confusion__char_17_good();");
  CWE843_Type_Confusion__char_17_good();
  printLine("Calling CWE843_Type_Confusion__short_31_good();");
  CWE843_Type_Confusion__short_31_good();
  printLine("Calling CWE843_Type_Confusion__short_02_good();");
  CWE843_Type_Confusion__short_02_good();
  printLine("Calling CWE843_Type_Confusion__char_05_good();");
  CWE843_Type_Confusion__char_05_good();
  printLine("Calling CWE843_Type_Confusion__char_03_good();");
  CWE843_Type_Confusion__char_03_good();
  printLine("Calling CWE843_Type_Confusion__char_41_good();");
  CWE843_Type_Confusion__char_41_good();
  printLine("Calling CWE843_Type_Confusion__char_53_good();");
  CWE843_Type_Confusion__char_53_good();
  printLine("Calling CWE843_Type_Confusion__short_05_good();");
  CWE843_Type_Confusion__short_05_good();
  printLine("Calling CWE843_Type_Confusion__short_18_good();");
  CWE843_Type_Confusion__short_18_good();
  printLine("Calling CWE843_Type_Confusion__char_11_good();");
  CWE843_Type_Confusion__char_11_good();
  printLine("Calling CWE843_Type_Confusion__char_63_good();");
  CWE843_Type_Confusion__char_63_good();
  printLine("Calling CWE843_Type_Confusion__short_68_good();");
  CWE843_Type_Confusion__short_68_good();
  printLine("Calling CWE843_Type_Confusion__char_65_good();");
  CWE843_Type_Confusion__char_65_good();
  printLine("Calling CWE843_Type_Confusion__short_44_good();");
  CWE843_Type_Confusion__short_44_good();
  printLine("Calling CWE843_Type_Confusion__char_18_good();");
  CWE843_Type_Confusion__char_18_good();
  printLine("Calling CWE843_Type_Confusion__char_31_good();");
  CWE843_Type_Confusion__char_31_good();
  printLine("Calling CWE843_Type_Confusion__char_44_good();");
  CWE843_Type_Confusion__char_44_good();
  printLine("Calling CWE843_Type_Confusion__char_12_good();");
  CWE843_Type_Confusion__char_12_good();
  printLine("Calling CWE843_Type_Confusion__char_16_good();");
  CWE843_Type_Confusion__char_16_good();
  printLine("Calling CWE843_Type_Confusion__short_07_good();");
  CWE843_Type_Confusion__short_07_good();
  printLine("Calling CWE843_Type_Confusion__short_64_good();");
  CWE843_Type_Confusion__short_64_good();
  printLine("Calling CWE843_Type_Confusion__short_51_good();");
  CWE843_Type_Confusion__short_51_good();
  printLine("Calling CWE843_Type_Confusion__short_16_good();");
  CWE843_Type_Confusion__short_16_good();
  printLine("Calling CWE843_Type_Confusion__short_54_good();");
  CWE843_Type_Confusion__short_54_good();
  printLine("Calling CWE843_Type_Confusion__short_52_good();");
  CWE843_Type_Confusion__short_52_good();
  printLine("Calling CWE843_Type_Confusion__char_45_bad();");
  CWE843_Type_Confusion__char_45_bad();
  printLine("Calling CWE843_Type_Confusion__short_06_bad();");
  CWE843_Type_Confusion__short_06_bad();
  printLine("Calling CWE843_Type_Confusion__short_15_bad();");
  CWE843_Type_Confusion__short_15_bad();
  printLine("Calling CWE843_Type_Confusion__char_01_bad();");
  CWE843_Type_Confusion__char_01_bad();
  printLine("Calling CWE843_Type_Confusion__short_03_bad();");
  CWE843_Type_Confusion__short_03_bad();
  printLine("Calling CWE843_Type_Confusion__char_67_bad();");
  CWE843_Type_Confusion__char_67_bad();
  printLine("Calling CWE843_Type_Confusion__short_12_bad();");
  CWE843_Type_Confusion__short_12_bad();
  printLine("Calling CWE843_Type_Confusion__char_52_bad();");
  CWE843_Type_Confusion__char_52_bad();
  printLine("Calling CWE843_Type_Confusion__char_08_bad();");
  CWE843_Type_Confusion__char_08_bad();
  printLine("Calling CWE843_Type_Confusion__short_04_bad();");
  CWE843_Type_Confusion__short_04_bad();
  printLine("Calling CWE843_Type_Confusion__short_32_bad();");
  CWE843_Type_Confusion__short_32_bad();
  printLine("Calling CWE843_Type_Confusion__short_17_bad();");
  CWE843_Type_Confusion__short_17_bad();
  printLine("Calling CWE843_Type_Confusion__char_51_bad();");
  CWE843_Type_Confusion__char_51_bad();
  printLine("Calling CWE843_Type_Confusion__short_14_bad();");
  CWE843_Type_Confusion__short_14_bad();
  printLine("Calling CWE843_Type_Confusion__short_66_bad();");
  CWE843_Type_Confusion__short_66_bad();
  printLine("Calling CWE843_Type_Confusion__short_08_bad();");
  CWE843_Type_Confusion__short_08_bad();
  printLine("Calling CWE843_Type_Confusion__short_13_bad();");
  CWE843_Type_Confusion__short_13_bad();
  printLine("Calling CWE843_Type_Confusion__char_15_bad();");
  CWE843_Type_Confusion__char_15_bad();
  printLine("Calling CWE843_Type_Confusion__char_64_bad();");
  CWE843_Type_Confusion__char_64_bad();
  printLine("Calling CWE843_Type_Confusion__short_09_bad();");
  CWE843_Type_Confusion__short_09_bad();
  printLine("Calling CWE843_Type_Confusion__short_01_bad();");
  CWE843_Type_Confusion__short_01_bad();
  printLine("Calling CWE843_Type_Confusion__char_10_bad();");
  CWE843_Type_Confusion__char_10_bad();
  printLine("Calling CWE843_Type_Confusion__short_41_bad();");
  CWE843_Type_Confusion__short_41_bad();
  printLine("Calling CWE843_Type_Confusion__char_68_bad();");
  CWE843_Type_Confusion__char_68_bad();
  printLine("Calling CWE843_Type_Confusion__short_10_bad();");
  CWE843_Type_Confusion__short_10_bad();
  printLine("Calling CWE843_Type_Confusion__short_34_bad();");
  CWE843_Type_Confusion__short_34_bad();
  printLine("Calling CWE843_Type_Confusion__char_32_bad();");
  CWE843_Type_Confusion__char_32_bad();
  printLine("Calling CWE843_Type_Confusion__char_09_bad();");
  CWE843_Type_Confusion__char_09_bad();
  printLine("Calling CWE843_Type_Confusion__short_63_bad();");
  CWE843_Type_Confusion__short_63_bad();
  printLine("Calling CWE843_Type_Confusion__char_13_bad();");
  CWE843_Type_Confusion__char_13_bad();
  printLine("Calling CWE843_Type_Confusion__char_14_bad();");
  CWE843_Type_Confusion__char_14_bad();
  printLine("Calling CWE843_Type_Confusion__char_34_bad();");
  CWE843_Type_Confusion__char_34_bad();
  printLine("Calling CWE843_Type_Confusion__char_04_bad();");
  CWE843_Type_Confusion__char_04_bad();
  printLine("Calling CWE843_Type_Confusion__char_07_bad();");
  CWE843_Type_Confusion__char_07_bad();
  printLine("Calling CWE843_Type_Confusion__short_53_bad();");
  CWE843_Type_Confusion__short_53_bad();
  printLine("Calling CWE843_Type_Confusion__char_06_bad();");
  CWE843_Type_Confusion__char_06_bad();
  printLine("Calling CWE843_Type_Confusion__char_66_bad();");
  CWE843_Type_Confusion__char_66_bad();
  printLine("Calling CWE843_Type_Confusion__short_65_bad();");
  CWE843_Type_Confusion__short_65_bad();
  printLine("Calling CWE843_Type_Confusion__short_45_bad();");
  CWE843_Type_Confusion__short_45_bad();
  printLine("Calling CWE843_Type_Confusion__char_02_bad();");
  CWE843_Type_Confusion__char_02_bad();
  printLine("Calling CWE843_Type_Confusion__short_11_bad();");
  CWE843_Type_Confusion__short_11_bad();
  printLine("Calling CWE843_Type_Confusion__char_54_bad();");
  CWE843_Type_Confusion__char_54_bad();
  printLine("Calling CWE843_Type_Confusion__short_67_bad();");
  CWE843_Type_Confusion__short_67_bad();
  printLine("Calling CWE843_Type_Confusion__char_17_bad();");
  CWE843_Type_Confusion__char_17_bad();
  printLine("Calling CWE843_Type_Confusion__short_31_bad();");
  CWE843_Type_Confusion__short_31_bad();
  printLine("Calling CWE843_Type_Confusion__short_02_bad();");
  CWE843_Type_Confusion__short_02_bad();
  printLine("Calling CWE843_Type_Confusion__char_05_bad();");
  CWE843_Type_Confusion__char_05_bad();
  printLine("Calling CWE843_Type_Confusion__char_03_bad();");
  CWE843_Type_Confusion__char_03_bad();
  printLine("Calling CWE843_Type_Confusion__char_41_bad();");
  CWE843_Type_Confusion__char_41_bad();
  printLine("Calling CWE843_Type_Confusion__char_53_bad();");
  CWE843_Type_Confusion__char_53_bad();
  printLine("Calling CWE843_Type_Confusion__short_05_bad();");
  CWE843_Type_Confusion__short_05_bad();
  printLine("Calling CWE843_Type_Confusion__short_18_bad();");
  CWE843_Type_Confusion__short_18_bad();
  printLine("Calling CWE843_Type_Confusion__char_11_bad();");
  CWE843_Type_Confusion__char_11_bad();
  printLine("Calling CWE843_Type_Confusion__char_63_bad();");
  CWE843_Type_Confusion__char_63_bad();
  printLine("Calling CWE843_Type_Confusion__short_68_bad();");
  CWE843_Type_Confusion__short_68_bad();
  printLine("Calling CWE843_Type_Confusion__char_65_bad();");
  CWE843_Type_Confusion__char_65_bad();
  printLine("Calling CWE843_Type_Confusion__short_44_bad();");
  CWE843_Type_Confusion__short_44_bad();
  printLine("Calling CWE843_Type_Confusion__char_18_bad();");
  CWE843_Type_Confusion__char_18_bad();
  printLine("Calling CWE843_Type_Confusion__char_31_bad();");
  CWE843_Type_Confusion__char_31_bad();
  printLine("Calling CWE843_Type_Confusion__char_44_bad();");
  CWE843_Type_Confusion__char_44_bad();
  printLine("Calling CWE843_Type_Confusion__char_12_bad();");
  CWE843_Type_Confusion__char_12_bad();
  printLine("Calling CWE843_Type_Confusion__char_16_bad();");
  CWE843_Type_Confusion__char_16_bad();
  printLine("Calling CWE843_Type_Confusion__short_07_bad();");
  CWE843_Type_Confusion__short_07_bad();
  printLine("Calling CWE843_Type_Confusion__short_64_bad();");
  CWE843_Type_Confusion__short_64_bad();
  printLine("Calling CWE843_Type_Confusion__short_51_bad();");
  CWE843_Type_Confusion__short_51_bad();
  printLine("Calling CWE843_Type_Confusion__short_16_bad();");
  CWE843_Type_Confusion__short_16_bad();
  printLine("Calling CWE843_Type_Confusion__short_54_bad();");
  CWE843_Type_Confusion__short_54_bad();
  printLine("Calling CWE843_Type_Confusion__short_52_bad();");
  CWE843_Type_Confusion__short_52_bad();
  return 0;
}


void CWE843_Type_Confusion__short_10_bad(void)

{
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFalse == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_10_good(void)

{
  goodG2B1();
  goodG2B2();
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


void CWE843_Type_Confusion__short_08_bad(void)

{
  int iVar1;
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_15_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_04_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004018a7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_31_bad(void)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 local_21;
  undefined5 uStack29;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_21._0_1_ = 0x61;
  local_18 = &local_21;
  local_21._1_3_ = SUB83(local_18,0);
  local_21 = CONCAT31(local_21._1_3_,0x61);
  uVar2 = (ulong)local_21;
  local_21._1_3_ = SUB83(puVar1,0);
  local_21 = CONCAT31(local_21._1_3_,0x61);
  uStack29 = (undefined5)((ulong)puVar1 >> 0x18);
  local_10 = local_18;
  printIntLine(uVar2);
  puVar1 = local_18;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_24 = 8;
  local_20 = &local_24;
  local_18 = local_20;
  local_10 = local_20;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_31_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_06_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004019fa) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_54c_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_54d_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_54c_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_54d_goodG2BSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_65b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_65b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined2 local_1a;
  undefined2 *local_18;
  code *local_10;
  
  local_10 = CWE843_Type_Confusion__short_65b_badSink;
  local_1a = 8;
  local_18 = &local_1a;
  CWE843_Type_Confusion__short_65b_badSink(local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_10;
  
  local_10 = CWE843_Type_Confusion__short_65b_goodG2BSink;
  local_1c = 8;
  local_18 = &local_1c;
  CWE843_Type_Confusion__short_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE843_Type_Confusion__short_65_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_01_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_01_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_54d_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_54e_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_54d_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_54e_goodG2BSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_53d_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_53d_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_17_bad(void)

{
  undefined local_19;
  uint *local_18;
  int local_c;
  
  local_18 = (uint *)0x0;
  local_c = 0;
  while (local_c < 1) {
    local_19 = 0x61;
    local_18 = (uint *)&local_19;
    local_c = local_c + 1;
  }
  printIntLine((ulong)*local_18);
  return;
}


void goodG2B(void)

{
  uint local_1c;
  uint *local_18;
  int local_c;
  
  local_18 = (uint *)0x0;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 8;
    local_18 = &local_1c;
    local_c = local_c + 1;
  }
  printIntLine((ulong)*local_18);
  return;
}


void CWE843_Type_Confusion__char_17_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_68b_badSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__short_68_badData);
  return;
}


void CWE843_Type_Confusion__short_68b_goodG2BSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__short_68_goodG2BData);
  return;
}


void CWE843_Type_Confusion__short_51_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  local_10 = &local_12;
  CWE843_Type_Confusion__short_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__short_51b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__short_51_good(void)

{
  goodG2B();
  return;
}


void badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_19;
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_19 = 0x61;
  local_18 = &local_19;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_1c = 8;
  local_18 = &local_1c;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE843_Type_Confusion__char_44_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_67_bad(void)

{
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_19 = 0x61;
  local_18 = &local_19;
  local_10 = local_18;
  CWE843_Type_Confusion__char_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_1c = 8;
  local_18 = &local_1c;
  local_10 = local_18;
  CWE843_Type_Confusion__char_67b_goodG2BSink(local_18);
  return;
}


void CWE843_Type_Confusion__char_67_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcf : 0x00401ee3 */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_32_bad(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_31;
  undefined5 uStack45;
  undefined4 *local_28;
  undefined4 *local_20;
  long local_18;
  long local_10;
  
  local_10 = (long)&local_31 + 1;
  local_18 = (long)&local_31 + 1;
  local_31._0_1_ = 0x61;
  local_28 = &local_31;
  uVar2 = 0;
  local_31 = CONCAT31((int3)uVar1,0x61);
  uStack45 = (undefined5)((ulong)uVar1 >> 0x18);
  local_20 = local_28;
  printIntLine(0x61);
  uVar1 = uVar2;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcc : 0x00401f42 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_34 = 8;
  local_28 = &local_34;
  local_20 = local_28;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_32_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_53c_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_53d_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_53c_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_53d_goodG2BSink(uParm1);
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_02_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__char_52_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  local_10 = &local_11;
  CWE843_Type_Confusion__char_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__char_52b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__char_52_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_68b_badSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__char_68_badData);
  return;
}


void CWE843_Type_Confusion__char_68b_goodG2BSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__char_68_goodG2BData);
  return;
}


void CWE843_Type_Confusion__char_51b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_51b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_54d_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_54e_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_54d_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_54e_goodG2BSink(uParm1);
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_16_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_16_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_04_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402201) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_01_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_01_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__short_45_badData);
  return;
}


void CWE843_Type_Confusion__short_45_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  CWE843_Type_Confusion__short_45_badData = &local_12;
  local_10 = CWE843_Type_Confusion__short_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__short_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  CWE843_Type_Confusion__short_45_goodG2BData = &local_14;
  local_10 = CWE843_Type_Confusion__short_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE843_Type_Confusion__short_45_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_10_bad(void)

{
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFalse == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__char_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_19;
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE843_Type_Confusion__char_65b_badSink;
  local_19 = 0x61;
  local_18 = &local_19;
  CWE843_Type_Confusion__char_65b_badSink(local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_10;
  
  local_10 = CWE843_Type_Confusion__char_65b_goodG2BSink;
  local_1c = 8;
  local_18 = &local_1c;
  CWE843_Type_Confusion__char_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE843_Type_Confusion__char_65_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_05_bad(void)

{
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFalse == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_41_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_41_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  local_10 = &local_12;
  CWE843_Type_Confusion__short_41_badSink(local_10);
  return;
}


void CWE843_Type_Confusion__short_41_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__short_41_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__short_41_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_15_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_53b_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_53c_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_53b_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_53c_goodG2BSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_07_bad(void)

{
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__char_54c_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_54d_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_54c_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_54d_goodG2BSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_13_bad(void)

{
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_52c_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_52c_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_63b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__short_63b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__char_66_bad(void)

{
  undefined local_39;
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_39 = 0x61;
  local_28 = &local_39;
  local_10 = local_28;
  CWE843_Type_Confusion__char_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined4 local_3c;
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_3c = 8;
  local_28 = &local_3c;
  local_10 = local_28;
  CWE843_Type_Confusion__char_66b_goodG2BSink(local_38);
  return;
}


void CWE843_Type_Confusion__char_66_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_34_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 local_2a;
  undefined2 local_28;
  undefined6 uStack38;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_2a = 8;
  local_18 = &local_2a;
  local_28 = SUB82(local_18,0);
  uVar1 = CONCAT22(local_28,8);
  local_28 = SUB82(puVar2,0);
  uStack38 = (undefined6)((ulong)puVar2 >> 0x10);
  local_10 = local_18;
  printIntLine((ulong)uVar1);
  puVar2 = local_18;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_2c = 8;
  local_28 = &local_2c;
  local_18 = local_28;
  local_10 = local_28;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_34_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_51_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  local_10 = &local_11;
  CWE843_Type_Confusion__char_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__char_51b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__char_51_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_09_bad(void)

{
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_54b_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_54c_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_54b_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_54c_goodG2BSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_09_bad(void)

{
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_64b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__short_64b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__short_53_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  local_10 = &local_12;
  CWE843_Type_Confusion__short_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__short_53b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__short_53_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__char_45_badData);
  return;
}


void CWE843_Type_Confusion__char_45_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  CWE843_Type_Confusion__char_45_badData = &local_11;
  local_10 = CWE843_Type_Confusion__char_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)*CWE843_Type_Confusion__char_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  CWE843_Type_Confusion__char_45_goodG2BData = &local_14;
  local_10 = CWE843_Type_Confusion__char_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE843_Type_Confusion__char_45_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_13_bad(void)

{
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_03_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__char_05_bad(void)

{
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFalse == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_63_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  local_10 = &local_12;
  CWE843_Type_Confusion__short_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__short_63b_goodG2BSink(&local_10);
  return;
}


void CWE843_Type_Confusion__short_63_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_41_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_41_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  local_10 = &local_11;
  CWE843_Type_Confusion__char_41_badSink(local_10);
  return;
}


void CWE843_Type_Confusion__char_41_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__char_41_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__char_41_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_14_bad(void)

{
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__char_53b_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_53c_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_53b_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_53c_goodG2BSink(uParm1);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffce : 0x004032d0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_32_bad(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 local_32;
  undefined2 local_30;
  undefined6 uStack46;
  undefined2 *local_28;
  undefined2 *local_20;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_32 = 8;
  local_28 = &local_32;
  uVar2 = 0;
  local_30 = (undefined2)uVar1;
  uStack46 = (undefined6)((ulong)uVar1 >> 0x10);
  local_20 = local_28;
  printIntLine(8);
  uVar1 = uVar2;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcc : 0x0040332f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_34 = 8;
  local_28 = &local_34;
  local_20 = local_28;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_32_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_52c_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_52c_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_54e_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_54e_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_66_bad(void)

{
  undefined2 local_3a;
  undefined local_38 [16];
  undefined2 *local_28;
  undefined2 *local_10;
  
  local_3a = 8;
  local_28 = &local_3a;
  local_10 = local_28;
  CWE843_Type_Confusion__short_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined4 local_3c;
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_3c = 8;
  local_28 = &local_3c;
  local_10 = local_28;
  CWE843_Type_Confusion__short_66b_goodG2BSink(local_38);
  return;
}


void CWE843_Type_Confusion__short_66_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_68_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  CWE843_Type_Confusion__char_68_badData = &local_11;
  local_10 = CWE843_Type_Confusion__char_68_badData;
  CWE843_Type_Confusion__char_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  CWE843_Type_Confusion__char_68_goodG2BData = &local_14;
  local_10 = CWE843_Type_Confusion__char_68_goodG2BData;
  CWE843_Type_Confusion__char_68b_goodG2BSink();
  return;
}


void CWE843_Type_Confusion__char_68_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_34_bad(void)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 local_29;
  undefined5 uStack37;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_29._0_1_ = 0x61;
  local_18 = &local_29;
  local_29._1_3_ = SUB83(local_18,0);
  local_29 = CONCAT31(local_29._1_3_,0x61);
  uVar2 = (ulong)local_29;
  local_29._1_3_ = SUB83(puVar1,0);
  local_29 = CONCAT31(local_29._1_3_,0x61);
  uStack37 = (undefined5)((ulong)puVar1 >> 0x18);
  local_10 = local_18;
  printIntLine(uVar2);
  puVar1 = local_18;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_2c = 8;
  local_28 = &local_2c;
  local_18 = local_28;
  local_10 = local_28;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_34_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_67b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_67b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_54_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  local_10 = &local_12;
  CWE843_Type_Confusion__short_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__short_54b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__short_54_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_66b_badSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE843_Type_Confusion__char_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE843_Type_Confusion__char_63b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__char_63b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__short_68_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  CWE843_Type_Confusion__short_68_badData = &local_12;
  local_10 = CWE843_Type_Confusion__short_68_badData;
  CWE843_Type_Confusion__short_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  CWE843_Type_Confusion__short_68_goodG2BData = &local_14;
  local_10 = CWE843_Type_Confusion__short_68_goodG2BData;
  CWE843_Type_Confusion__short_68b_goodG2BSink();
  return;
}


void CWE843_Type_Confusion__short_68_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_67b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_67b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_06_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040378c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_64_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  local_10 = &local_12;
  CWE843_Type_Confusion__short_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__short_64b_goodG2BSink(&local_10);
  return;
}


void CWE843_Type_Confusion__short_64_good(void)

{
  goodG2B();
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


void CWE843_Type_Confusion__char_08_bad(void)

{
  int iVar1;
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_12_bad(void)

{
  int iVar1;
  uint local_18;
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 8;
    local_10 = &local_18;
  }
  else {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  uint local_18;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 8;
    local_10 = &local_18;
  }
  else {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_12_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_52b_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_52c_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_52b_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_52c_goodG2BSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_54b_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_54c_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_54b_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_54c_goodG2BSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_64b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__char_64b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE843_Type_Confusion__short_66b_badSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE843_Type_Confusion__short_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE843_Type_Confusion__char_53_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  local_10 = &local_11;
  CWE843_Type_Confusion__char_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__char_53b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__char_53_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_18_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_18_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_31_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 local_22;
  undefined2 local_20;
  undefined6 uStack30;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_22 = 8;
  local_18 = &local_22;
  local_20 = SUB82(local_18,0);
  uVar1 = CONCAT22(local_20,8);
  local_20 = SUB82(puVar2,0);
  uStack30 = (undefined6)((ulong)puVar2 >> 0x10);
  local_10 = local_18;
  printIntLine((ulong)uVar1);
  puVar2 = local_18;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_24 = 8;
  local_20 = &local_24;
  local_18 = local_20;
  local_10 = local_20;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_31_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_03_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_65b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_65b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_63_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  local_10 = &local_11;
  CWE843_Type_Confusion__char_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__char_63b_goodG2BSink(&local_10);
  return;
}


void CWE843_Type_Confusion__char_63_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_14_bad(void)

{
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__short_17_bad(void)

{
  undefined2 local_1a;
  uint *local_18;
  int local_c;
  
  local_18 = (uint *)0x0;
  local_c = 0;
  while (local_c < 1) {
    local_1a = 8;
    local_18 = (uint *)&local_1a;
    local_c = local_c + 1;
  }
  printIntLine((ulong)*local_18);
  return;
}


void goodG2B(void)

{
  uint local_1c;
  uint *local_18;
  int local_c;
  
  local_18 = (uint *)0x0;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 8;
    local_18 = &local_1c;
    local_c = local_c + 1;
  }
  printIntLine((ulong)*local_18);
  return;
}


void CWE843_Type_Confusion__short_17_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_11_bad(void)

{
  int iVar1;
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__char_18_bad(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 local_11;
  undefined5 uStack13;
  
  local_11._0_1_ = 0x61;
  local_11._1_3_ = SUB83(&local_11,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uVar3 = (ulong)local_11;
  puVar2 = &local_11;
  local_11._1_3_ = SUB83(puVar1,0);
  local_11 = CONCAT31(local_11._1_3_,0x61);
  uStack13 = (undefined5)((ulong)puVar1 >> 0x18);
  printIntLine(uVar3);
  puVar1 = puVar2;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__char_18_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_07_bad(void)

{
  undefined2 local_12;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_12 = 8;
    local_10 = (uint *)&local_12;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__short_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined2 local_1a;
  undefined2 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_1a = 8;
  local_18 = &local_1a;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_1c = 8;
  local_18 = &local_1c;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE843_Type_Confusion__short_44_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_67_bad(void)

{
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_1a = 8;
  local_18 = &local_1a;
  local_10 = local_18;
  CWE843_Type_Confusion__short_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_1c = 8;
  local_18 = &local_1c;
  local_10 = local_18;
  CWE843_Type_Confusion__short_67b_goodG2BSink(local_18);
  return;
}


void CWE843_Type_Confusion__short_67_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_54e_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_54e_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_52_bad(void)

{
  undefined2 local_12;
  undefined2 *local_10;
  
  local_12 = 8;
  local_10 = &local_12;
  CWE843_Type_Confusion__short_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__short_52b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__short_52_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_53c_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_53d_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__short_53c_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__short_53d_goodG2BSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_02_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__char_11_bad(void)

{
  int iVar1;
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE843_Type_Confusion__char_54_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  local_10 = &local_11;
  CWE843_Type_Confusion__char_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__char_54b_goodG2BSink(local_10);
  return;
}


void CWE843_Type_Confusion__char_54_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__short_51b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__short_51b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_53d_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_53d_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE843_Type_Confusion__char_64_bad(void)

{
  undefined local_11;
  undefined *local_10;
  
  local_11 = 0x61;
  local_10 = &local_11;
  CWE843_Type_Confusion__char_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  CWE843_Type_Confusion__char_64b_goodG2BSink(&local_10);
  return;
}


void CWE843_Type_Confusion__char_64_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE843_Type_Confusion__short_16_bad(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_12;
  undefined2 local_10;
  undefined6 uStack14;
  
  local_12 = 8;
  local_10 = SUB82(&local_12,0);
  uVar1 = CONCAT22(local_10,8);
  puVar3 = &local_12;
  local_10 = SUB82(puVar2,0);
  uStack14 = (undefined6)((ulong)puVar2 >> 0x10);
  printIntLine((ulong)uVar1);
  puVar2 = puVar3;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 8;
  local_10 = &local_14;
  printIntLine(8);
  return;
}


void CWE843_Type_Confusion__short_16_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_12_bad(void)

{
  int iVar1;
  uint local_18;
  undefined local_11;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 8;
    local_10 = &local_18;
  }
  else {
    local_11 = 0x61;
    local_10 = (uint *)&local_11;
  }
  printIntLine((ulong)*local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  uint local_18;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 8;
    local_10 = &local_18;
  }
  else {
    local_14 = 8;
    local_10 = &local_14;
  }
  printIntLine((ulong)*local_10);
  return;
}


void CWE843_Type_Confusion__char_12_good(void)

{
  goodG2B();
  return;
}


void CWE843_Type_Confusion__char_52b_badSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_52c_badSink(uParm1);
  return;
}


void CWE843_Type_Confusion__char_52b_goodG2BSink(undefined8 uParm1)

{
  CWE843_Type_Confusion__char_52c_goodG2BSink(uParm1);
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
  printf((char *)(double)fParm1,&DAT_004069a5);
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
  printf(pcParm1,&DAT_004069c2);
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
    __isoc99_sscanf(lVar1,&DAT_004069d0,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_004069d8,&local_14);
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

