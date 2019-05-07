
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0062aff8;
  if (PTR___gmon_start___0062aff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004008d0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0062b010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0062b018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0062b020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0062b028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0062b030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0062b038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0062b040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0062b048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0062b050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0062b058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0062b060)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0062b068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0062b070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0062b078)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0062b080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0062b088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0062b090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0062b098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0062b0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0062b0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0062b0b0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0062aff8)();
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
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_05_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_45_good();");
  CWE476_NULL_Pointer_Dereference__int_45_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_10_good();");
  CWE476_NULL_Pointer_Dereference__long_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_32_good();");
  CWE476_NULL_Pointer_Dereference__struct_32_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_03_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_52_good();");
  CWE476_NULL_Pointer_Dereference__char_52_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_68_good();");
  CWE476_NULL_Pointer_Dereference__long_68_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_53_good();");
  CWE476_NULL_Pointer_Dereference__long_53_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_16_good();");
  CWE476_NULL_Pointer_Dereference__char_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_07_good();");
  CWE476_NULL_Pointer_Dereference__int_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_11_good();");
  CWE476_NULL_Pointer_Dereference__char_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_64_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_64_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_14_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_08_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_45_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_45_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_15_good();");
  CWE476_NULL_Pointer_Dereference__int_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_05_good();");
  CWE476_NULL_Pointer_Dereference__long_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_53_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_53_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_67_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_67_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_64_good();");
  CWE476_NULL_Pointer_Dereference__int_64_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_63_good();");
  CWE476_NULL_Pointer_Dereference__long_63_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_21_good();");
  CWE476_NULL_Pointer_Dereference__char_21_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_04_good();");
  CWE476_NULL_Pointer_Dereference__long_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_09_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_12_good();");
  CWE476_NULL_Pointer_Dereference__int_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_06_good();");
  CWE476_NULL_Pointer_Dereference__struct_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_32_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_32_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_17_good();");
  CWE476_NULL_Pointer_Dereference__char_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_16_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_16_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_03_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_31_good();");
  CWE476_NULL_Pointer_Dereference__struct_31_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_63_good();");
  CWE476_NULL_Pointer_Dereference__struct_63_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_14_good();");
  CWE476_NULL_Pointer_Dereference__struct_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_10_good();");
  CWE476_NULL_Pointer_Dereference__int_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_05_good();");
  CWE476_NULL_Pointer_Dereference__char_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_54_good();");
  CWE476_NULL_Pointer_Dereference__long_54_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_34_good();");
  CWE476_NULL_Pointer_Dereference__char_34_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_66_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_66_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_51_good();");
  CWE476_NULL_Pointer_Dereference__struct_51_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_01_good();");
  CWE476_NULL_Pointer_Dereference__long_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_45_good();");
  CWE476_NULL_Pointer_Dereference__struct_45_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_34_good();");
  CWE476_NULL_Pointer_Dereference__long_34_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_06_good();");
  CWE476_NULL_Pointer_Dereference__char_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_06_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_65_good();");
  CWE476_NULL_Pointer_Dereference__long_65_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_12_good();");
  CWE476_NULL_Pointer_Dereference__char_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_64_good();");
  CWE476_NULL_Pointer_Dereference__char_64_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_11_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_04_good();");
  CWE476_NULL_Pointer_Dereference__struct_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_07_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_53_good();");
  CWE476_NULL_Pointer_Dereference__char_53_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_41_good();");
  CWE476_NULL_Pointer_Dereference__char_41_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_02_good();");
  CWE476_NULL_Pointer_Dereference__struct_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_08_good();");
  CWE476_NULL_Pointer_Dereference__struct_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_63_good();");
  CWE476_NULL_Pointer_Dereference__int_63_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_11_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_12_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_41_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_41_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_08_good();");
  CWE476_NULL_Pointer_Dereference__char_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_18_good();");
  CWE476_NULL_Pointer_Dereference__int_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_14_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_08_good();");
  CWE476_NULL_Pointer_Dereference__long_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_54_good();");
  CWE476_NULL_Pointer_Dereference__int_54_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_07_good();");
  CWE476_NULL_Pointer_Dereference__char_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_31_good();");
  CWE476_NULL_Pointer_Dereference__long_31_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_17_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_07_good();");
  CWE476_NULL_Pointer_Dereference__struct_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_12_good();");
  CWE476_NULL_Pointer_Dereference__long_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_15_good();");
  CWE476_NULL_Pointer_Dereference__long_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_18_good();");
  CWE476_NULL_Pointer_Dereference__struct_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_32_good();");
  CWE476_NULL_Pointer_Dereference__char_32_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_52_good();");
  CWE476_NULL_Pointer_Dereference__int_52_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_18_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_03_good();");
  CWE476_NULL_Pointer_Dereference__struct_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_13_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_44_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_44_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_04_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_53_good();");
  CWE476_NULL_Pointer_Dereference__int_53_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_16_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_10_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_31_good();");
  CWE476_NULL_Pointer_Dereference__char_31_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_21_good();");
  CWE476_NULL_Pointer_Dereference__int_21_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_41_good();");
  CWE476_NULL_Pointer_Dereference__struct_41_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_11_good();");
  CWE476_NULL_Pointer_Dereference__long_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_09_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_18_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_05_good();");
  CWE476_NULL_Pointer_Dereference__int_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_44_good();");
  CWE476_NULL_Pointer_Dereference__long_44_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_53_good();");
  CWE476_NULL_Pointer_Dereference__struct_53_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_02_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_03_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_10_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_17_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_16_good();");
  CWE476_NULL_Pointer_Dereference__long_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_13_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_13_good();");
  CWE476_NULL_Pointer_Dereference__struct_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_22_good();");
  CWE476_NULL_Pointer_Dereference__long_22_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_07_good();");
  CWE476_NULL_Pointer_Dereference__long_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_22_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_22_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_01_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_66_good();");
  CWE476_NULL_Pointer_Dereference__struct_66_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_09_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_22_good();");
  CWE476_NULL_Pointer_Dereference__char_22_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_65_good();");
  CWE476_NULL_Pointer_Dereference__struct_65_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_05_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_18_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_05_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_02_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_16_good();");
  CWE476_NULL_Pointer_Dereference__int_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_06_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_41_good();");
  CWE476_NULL_Pointer_Dereference__long_41_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_67_good();");
  CWE476_NULL_Pointer_Dereference__long_67_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_12_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_07_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_04_good();");
  CWE476_NULL_Pointer_Dereference__char_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_45_good();");
  CWE476_NULL_Pointer_Dereference__char_45_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_10_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_51_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_51_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_08_good();");
  CWE476_NULL_Pointer_Dereference__int_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_12_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_16_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_17_good();");
  CWE476_NULL_Pointer_Dereference__long_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_01_good();");
  CWE476_NULL_Pointer_Dereference__char_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_08_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_14_good();");
  CWE476_NULL_Pointer_Dereference__int_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_54_good();");
  CWE476_NULL_Pointer_Dereference__char_54_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_65_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_65_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_17_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_34_good();");
  CWE476_NULL_Pointer_Dereference__struct_34_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_67_good();");
  CWE476_NULL_Pointer_Dereference__struct_67_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_15_good();");
  CWE476_NULL_Pointer_Dereference__struct_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_02_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_15_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_01_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_06_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_14_good();");
  CWE476_NULL_Pointer_Dereference__char_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_04_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_34_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_34_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_66_good();");
  CWE476_NULL_Pointer_Dereference__long_66_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_04_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_68_good();");
  CWE476_NULL_Pointer_Dereference__int_68_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_51_good();");
  CWE476_NULL_Pointer_Dereference__long_51_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_68_good();");
  CWE476_NULL_Pointer_Dereference__struct_68_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_32_good();");
  CWE476_NULL_Pointer_Dereference__long_32_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_01_good();");
  CWE476_NULL_Pointer_Dereference__int_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_21_good();");
  CWE476_NULL_Pointer_Dereference__struct_21_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_13_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_09_good();");
  CWE476_NULL_Pointer_Dereference__struct_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_63_good();");
  CWE476_NULL_Pointer_Dereference__char_63_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_07_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_09_good();");
  CWE476_NULL_Pointer_Dereference__int_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_02_good();");
  CWE476_NULL_Pointer_Dereference__char_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_11_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_13_good();");
  CWE476_NULL_Pointer_Dereference__int_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_52_good();");
  CWE476_NULL_Pointer_Dereference__long_52_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_03_good();");
  CWE476_NULL_Pointer_Dereference__long_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_12_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_01_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_17_good();");
  CWE476_NULL_Pointer_Dereference__int_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_15_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_02_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_52_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_52_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_09_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_04_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_06_good();");
  CWE476_NULL_Pointer_Dereference__long_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_16_good();");
  CWE476_NULL_Pointer_Dereference__struct_16_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_15_good();");
  CWE476_NULL_Pointer_Dereference__char_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_54_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_54_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_01_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_21_good();");
  CWE476_NULL_Pointer_Dereference__long_21_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_03_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_07_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_07_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_08_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_05_good();");
  CWE476_NULL_Pointer_Dereference__struct_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_22_good();");
  CWE476_NULL_Pointer_Dereference__struct_22_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_31_good();");
  CWE476_NULL_Pointer_Dereference__int_31_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_32_good();");
  CWE476_NULL_Pointer_Dereference__int_32_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_44_good();");
  CWE476_NULL_Pointer_Dereference__int_44_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_05_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_05_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_64_good();");
  CWE476_NULL_Pointer_Dereference__long_64_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_65_good();");
  CWE476_NULL_Pointer_Dereference__int_65_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_12_good();");
  CWE476_NULL_Pointer_Dereference__struct_12_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_11_good();");
  CWE476_NULL_Pointer_Dereference__struct_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_02_good();");
  CWE476_NULL_Pointer_Dereference__int_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_13_good();");
  CWE476_NULL_Pointer_Dereference__long_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_22_good();");
  CWE476_NULL_Pointer_Dereference__int_22_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_11_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_02_good();");
  CWE476_NULL_Pointer_Dereference__long_02_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_14_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_14_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_54_good();");
  CWE476_NULL_Pointer_Dereference__struct_54_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_63_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_63_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_68_good();");
  CWE476_NULL_Pointer_Dereference__char_68_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_06_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_09_good();");
  CWE476_NULL_Pointer_Dereference__char_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_66_good();");
  CWE476_NULL_Pointer_Dereference__int_66_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_52_good();");
  CWE476_NULL_Pointer_Dereference__struct_52_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_68_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_68_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_13_good();");
  CWE476_NULL_Pointer_Dereference__char_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_44_good();");
  CWE476_NULL_Pointer_Dereference__char_44_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_51_good();");
  CWE476_NULL_Pointer_Dereference__char_51_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_08_good();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_08_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_10_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_03_good();");
  CWE476_NULL_Pointer_Dereference__int_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_09_good();");
  CWE476_NULL_Pointer_Dereference__long_09_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_64_good();");
  CWE476_NULL_Pointer_Dereference__struct_64_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_41_good();");
  CWE476_NULL_Pointer_Dereference__int_41_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_15_good();");
  CWE476_NULL_Pointer_Dereference__binary_if_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_15_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_15_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_10_good();");
  CWE476_NULL_Pointer_Dereference__char_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_01_good();");
  CWE476_NULL_Pointer_Dereference__struct_01_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_17_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_51_good();");
  CWE476_NULL_Pointer_Dereference__int_51_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_13_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_13_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_44_good();");
  CWE476_NULL_Pointer_Dereference__struct_44_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_21_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_21_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_67_good();");
  CWE476_NULL_Pointer_Dereference__char_67_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_17_good();");
  CWE476_NULL_Pointer_Dereference__struct_17_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_45_good();");
  CWE476_NULL_Pointer_Dereference__long_45_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_65_good();");
  CWE476_NULL_Pointer_Dereference__char_65_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_34_good();");
  CWE476_NULL_Pointer_Dereference__int_34_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_10_good();");
  CWE476_NULL_Pointer_Dereference__struct_10_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_03_good();");
  CWE476_NULL_Pointer_Dereference__char_03_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_18_good();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_31_good();");
  CWE476_NULL_Pointer_Dereference__int64_t_31_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_66_good();");
  CWE476_NULL_Pointer_Dereference__char_66_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_14_good();");
  CWE476_NULL_Pointer_Dereference__long_14_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_06_good();");
  CWE476_NULL_Pointer_Dereference__int_06_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_67_good();");
  CWE476_NULL_Pointer_Dereference__int_67_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_11_good();");
  CWE476_NULL_Pointer_Dereference__int_11_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_04_good();");
  CWE476_NULL_Pointer_Dereference__int_04_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_18_good();");
  CWE476_NULL_Pointer_Dereference__long_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_18_good();");
  CWE476_NULL_Pointer_Dereference__char_18_good();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_05_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_45_bad();");
  CWE476_NULL_Pointer_Dereference__int_45_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_10_bad();");
  CWE476_NULL_Pointer_Dereference__long_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_32_bad();");
  CWE476_NULL_Pointer_Dereference__struct_32_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_03_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_52_bad();");
  CWE476_NULL_Pointer_Dereference__char_52_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_68_bad();");
  CWE476_NULL_Pointer_Dereference__long_68_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_53_bad();");
  CWE476_NULL_Pointer_Dereference__long_53_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_16_bad();");
  CWE476_NULL_Pointer_Dereference__char_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_07_bad();");
  CWE476_NULL_Pointer_Dereference__int_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_11_bad();");
  CWE476_NULL_Pointer_Dereference__char_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_64_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_64_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_14_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_08_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_45_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_45_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_15_bad();");
  CWE476_NULL_Pointer_Dereference__int_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_05_bad();");
  CWE476_NULL_Pointer_Dereference__long_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_53_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_53_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_67_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_67_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_64_bad();");
  CWE476_NULL_Pointer_Dereference__int_64_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_63_bad();");
  CWE476_NULL_Pointer_Dereference__long_63_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_21_bad();");
  CWE476_NULL_Pointer_Dereference__char_21_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_04_bad();");
  CWE476_NULL_Pointer_Dereference__long_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_09_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_12_bad();");
  CWE476_NULL_Pointer_Dereference__int_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_06_bad();");
  CWE476_NULL_Pointer_Dereference__struct_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_32_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_32_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_17_bad();");
  CWE476_NULL_Pointer_Dereference__char_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_16_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_16_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_03_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_31_bad();");
  CWE476_NULL_Pointer_Dereference__struct_31_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_63_bad();");
  CWE476_NULL_Pointer_Dereference__struct_63_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_14_bad();");
  CWE476_NULL_Pointer_Dereference__struct_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_10_bad();");
  CWE476_NULL_Pointer_Dereference__int_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_05_bad();");
  CWE476_NULL_Pointer_Dereference__char_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_54_bad();");
  CWE476_NULL_Pointer_Dereference__long_54_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_34_bad();");
  CWE476_NULL_Pointer_Dereference__char_34_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_66_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_66_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_51_bad();");
  CWE476_NULL_Pointer_Dereference__struct_51_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_01_bad();");
  CWE476_NULL_Pointer_Dereference__long_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_45_bad();");
  CWE476_NULL_Pointer_Dereference__struct_45_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_34_bad();");
  CWE476_NULL_Pointer_Dereference__long_34_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_06_bad();");
  CWE476_NULL_Pointer_Dereference__char_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_06_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_65_bad();");
  CWE476_NULL_Pointer_Dereference__long_65_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_12_bad();");
  CWE476_NULL_Pointer_Dereference__char_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_64_bad();");
  CWE476_NULL_Pointer_Dereference__char_64_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_11_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_04_bad();");
  CWE476_NULL_Pointer_Dereference__struct_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_07_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_53_bad();");
  CWE476_NULL_Pointer_Dereference__char_53_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_41_bad();");
  CWE476_NULL_Pointer_Dereference__char_41_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_02_bad();");
  CWE476_NULL_Pointer_Dereference__struct_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_08_bad();");
  CWE476_NULL_Pointer_Dereference__struct_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_63_bad();");
  CWE476_NULL_Pointer_Dereference__int_63_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_11_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_12_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_41_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_41_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_08_bad();");
  CWE476_NULL_Pointer_Dereference__char_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_18_bad();");
  CWE476_NULL_Pointer_Dereference__int_18_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_14_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_08_bad();");
  CWE476_NULL_Pointer_Dereference__long_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_54_bad();");
  CWE476_NULL_Pointer_Dereference__int_54_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_07_bad();");
  CWE476_NULL_Pointer_Dereference__char_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_31_bad();");
  CWE476_NULL_Pointer_Dereference__long_31_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_17_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_07_bad();");
  CWE476_NULL_Pointer_Dereference__struct_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_12_bad();");
  CWE476_NULL_Pointer_Dereference__long_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_15_bad();");
  CWE476_NULL_Pointer_Dereference__long_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_18_bad();");
  CWE476_NULL_Pointer_Dereference__struct_18_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_32_bad();");
  CWE476_NULL_Pointer_Dereference__char_32_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_52_bad();");
  CWE476_NULL_Pointer_Dereference__int_52_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_18_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_18_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_03_bad();");
  CWE476_NULL_Pointer_Dereference__struct_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_13_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_44_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_44_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_04_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_53_bad();");
  CWE476_NULL_Pointer_Dereference__int_53_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_16_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_10_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_31_bad();");
  CWE476_NULL_Pointer_Dereference__char_31_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_21_bad();");
  CWE476_NULL_Pointer_Dereference__int_21_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_41_bad();");
  CWE476_NULL_Pointer_Dereference__struct_41_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_11_bad();");
  CWE476_NULL_Pointer_Dereference__long_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_09_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_18_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_18_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_05_bad();");
  CWE476_NULL_Pointer_Dereference__int_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_44_bad();");
  CWE476_NULL_Pointer_Dereference__long_44_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_53_bad();");
  CWE476_NULL_Pointer_Dereference__struct_53_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_02_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_03_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_10_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_17_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_16_bad();");
  CWE476_NULL_Pointer_Dereference__long_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_13_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_13_bad();");
  CWE476_NULL_Pointer_Dereference__struct_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_22_bad();");
  CWE476_NULL_Pointer_Dereference__long_22_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_07_bad();");
  CWE476_NULL_Pointer_Dereference__long_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_22_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_22_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_01_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_66_bad();");
  CWE476_NULL_Pointer_Dereference__struct_66_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_09_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_22_bad();");
  CWE476_NULL_Pointer_Dereference__char_22_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_65_bad();");
  CWE476_NULL_Pointer_Dereference__struct_65_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_05_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_18_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_18_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_05_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_02_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_16_bad();");
  CWE476_NULL_Pointer_Dereference__int_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_06_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_41_bad();");
  CWE476_NULL_Pointer_Dereference__long_41_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_67_bad();");
  CWE476_NULL_Pointer_Dereference__long_67_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_12_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_07_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_04_bad();");
  CWE476_NULL_Pointer_Dereference__char_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_45_bad();");
  CWE476_NULL_Pointer_Dereference__char_45_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_10_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_51_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_51_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_08_bad();");
  CWE476_NULL_Pointer_Dereference__int_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_12_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_16_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_17_bad();");
  CWE476_NULL_Pointer_Dereference__long_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_01_bad();");
  CWE476_NULL_Pointer_Dereference__char_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_08_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_14_bad();");
  CWE476_NULL_Pointer_Dereference__int_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_54_bad();");
  CWE476_NULL_Pointer_Dereference__char_54_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_65_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_65_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_17_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_34_bad();");
  CWE476_NULL_Pointer_Dereference__struct_34_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_67_bad();");
  CWE476_NULL_Pointer_Dereference__struct_67_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_15_bad();");
  CWE476_NULL_Pointer_Dereference__struct_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_02_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_15_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_01_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_06_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_14_bad();");
  CWE476_NULL_Pointer_Dereference__char_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_04_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_34_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_34_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_66_bad();");
  CWE476_NULL_Pointer_Dereference__long_66_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_04_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_68_bad();");
  CWE476_NULL_Pointer_Dereference__int_68_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_51_bad();");
  CWE476_NULL_Pointer_Dereference__long_51_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_68_bad();");
  CWE476_NULL_Pointer_Dereference__struct_68_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_32_bad();");
  CWE476_NULL_Pointer_Dereference__long_32_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_01_bad();");
  CWE476_NULL_Pointer_Dereference__int_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_21_bad();");
  CWE476_NULL_Pointer_Dereference__struct_21_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_13_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_09_bad();");
  CWE476_NULL_Pointer_Dereference__struct_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_63_bad();");
  CWE476_NULL_Pointer_Dereference__char_63_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_07_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_09_bad();");
  CWE476_NULL_Pointer_Dereference__int_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_02_bad();");
  CWE476_NULL_Pointer_Dereference__char_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_11_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_13_bad();");
  CWE476_NULL_Pointer_Dereference__int_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_52_bad();");
  CWE476_NULL_Pointer_Dereference__long_52_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_03_bad();");
  CWE476_NULL_Pointer_Dereference__long_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_12_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_01_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_17_bad();");
  CWE476_NULL_Pointer_Dereference__int_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_15_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_02_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_52_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_52_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_09_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_04_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_06_bad();");
  CWE476_NULL_Pointer_Dereference__long_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_16_bad();");
  CWE476_NULL_Pointer_Dereference__struct_16_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_15_bad();");
  CWE476_NULL_Pointer_Dereference__char_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_54_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_54_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_01_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_21_bad();");
  CWE476_NULL_Pointer_Dereference__long_21_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_03_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_07_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_07_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_08_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_05_bad();");
  CWE476_NULL_Pointer_Dereference__struct_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_22_bad();");
  CWE476_NULL_Pointer_Dereference__struct_22_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_31_bad();");
  CWE476_NULL_Pointer_Dereference__int_31_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_32_bad();");
  CWE476_NULL_Pointer_Dereference__int_32_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_44_bad();");
  CWE476_NULL_Pointer_Dereference__int_44_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_05_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_05_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_64_bad();");
  CWE476_NULL_Pointer_Dereference__long_64_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_65_bad();");
  CWE476_NULL_Pointer_Dereference__int_65_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_12_bad();");
  CWE476_NULL_Pointer_Dereference__struct_12_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_11_bad();");
  CWE476_NULL_Pointer_Dereference__struct_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_02_bad();");
  CWE476_NULL_Pointer_Dereference__int_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_13_bad();");
  CWE476_NULL_Pointer_Dereference__long_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_22_bad();");
  CWE476_NULL_Pointer_Dereference__int_22_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_11_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_02_bad();");
  CWE476_NULL_Pointer_Dereference__long_02_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_14_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_14_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_54_bad();");
  CWE476_NULL_Pointer_Dereference__struct_54_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_63_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_63_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_68_bad();");
  CWE476_NULL_Pointer_Dereference__char_68_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_06_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_09_bad();");
  CWE476_NULL_Pointer_Dereference__char_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_66_bad();");
  CWE476_NULL_Pointer_Dereference__int_66_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_52_bad();");
  CWE476_NULL_Pointer_Dereference__struct_52_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_68_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_68_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_13_bad();");
  CWE476_NULL_Pointer_Dereference__char_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_44_bad();");
  CWE476_NULL_Pointer_Dereference__char_44_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_51_bad();");
  CWE476_NULL_Pointer_Dereference__char_51_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__deref_after_check_08_bad();");
  CWE476_NULL_Pointer_Dereference__deref_after_check_08_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_10_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_03_bad();");
  CWE476_NULL_Pointer_Dereference__int_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_09_bad();");
  CWE476_NULL_Pointer_Dereference__long_09_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_64_bad();");
  CWE476_NULL_Pointer_Dereference__struct_64_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_41_bad();");
  CWE476_NULL_Pointer_Dereference__int_41_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__binary_if_15_bad();");
  CWE476_NULL_Pointer_Dereference__binary_if_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_15_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_15_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_10_bad();");
  CWE476_NULL_Pointer_Dereference__char_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_01_bad();");
  CWE476_NULL_Pointer_Dereference__struct_01_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_17_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_51_bad();");
  CWE476_NULL_Pointer_Dereference__int_51_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_13_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_13_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_44_bad();");
  CWE476_NULL_Pointer_Dereference__struct_44_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_21_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_21_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_67_bad();");
  CWE476_NULL_Pointer_Dereference__char_67_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_17_bad();");
  CWE476_NULL_Pointer_Dereference__struct_17_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_45_bad();");
  CWE476_NULL_Pointer_Dereference__long_45_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_65_bad();");
  CWE476_NULL_Pointer_Dereference__char_65_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_34_bad();");
  CWE476_NULL_Pointer_Dereference__int_34_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__struct_10_bad();");
  CWE476_NULL_Pointer_Dereference__struct_10_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_03_bad();");
  CWE476_NULL_Pointer_Dereference__char_03_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__null_check_after_deref_18_bad();");
  CWE476_NULL_Pointer_Dereference__null_check_after_deref_18_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int64_t_31_bad();");
  CWE476_NULL_Pointer_Dereference__int64_t_31_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_66_bad();");
  CWE476_NULL_Pointer_Dereference__char_66_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_14_bad();");
  CWE476_NULL_Pointer_Dereference__long_14_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_06_bad();");
  CWE476_NULL_Pointer_Dereference__int_06_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_67_bad();");
  CWE476_NULL_Pointer_Dereference__int_67_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_11_bad();");
  CWE476_NULL_Pointer_Dereference__int_11_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__int_04_bad();");
  CWE476_NULL_Pointer_Dereference__int_04_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__long_18_bad();");
  CWE476_NULL_Pointer_Dereference__long_18_bad();
  printLine("Calling CWE476_NULL_Pointer_Dereference__char_18_bad();");
  CWE476_NULL_Pointer_Dereference__char_18_bad();
  return 0;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_16_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_16_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54d_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54e_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54d_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54e_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54d_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54e_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_11_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = &local_18;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_09_bad(void)

{
  uint *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 10;
    }
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint *puVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_64b_badSink(char **ppcParm1)

{
  printHexCharLine((ulong)(uint)(int)**ppcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_64b_goodG2BSink(char **ppcParm1)

{
  printHexCharLine((ulong)(uint)(int)**ppcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_64b_goodB2GSink(char **ppcParm1)

{
  if (*ppcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)**ppcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int_63b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_18_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040352b) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_65b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_65b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_65b_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLongLine(uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_10 = (undefined8 *)0x0;
  }
  if (globalFalse == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004036a7) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalFalse == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040373d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalTrue != 0) {
    local_10 = &local_18;
    printLongLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__long_52b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("pointer is NULL");
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
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__char_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_10 = &DAT_0041b185;
  local_28 = &DAT_0041b185;
  CWE476_NULL_Pointer_Dereference__char_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__char_66b_goodB2GSink(local_38);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_16_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403a13) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_01_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403ad7) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__char_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined *local_10;
  
  local_10 = &DAT_0041b1a4;
  CWE476_NULL_Pointer_Dereference__char_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__char_64b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_64_good(void)

{
  goodG2B();
  goodB2G();
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


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_08_bad(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = 10;
    }
    printIntLine((ulong)*puVar2);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    *puVar2 = 10;
    printIntLine((ulong)*puVar2);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    *puVar2 = 10;
    printIntLine((ulong)*puVar2);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__int_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_10;
  
  local_1c = 5;
  local_10 = CWE476_NULL_Pointer_Dereference__int_65b_goodG2BSink;
  local_18 = &local_1c;
  CWE476_NULL_Pointer_Dereference__int_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__int_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_51_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int_51b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_15_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403e23) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403e57) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_51_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__long_51b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_04_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403fc4) */
/* WARNING: Removing unreachable block (ram,0x00403fd7) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040401f) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040404f) */

void goodG2B1(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041b1f6);
  return;
}


void goodG2B2(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041b1f6);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_31_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


void goodG2B(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041b1fb);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040416f) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__char_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53d_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53d_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53d_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_07_bad(void)

{
  if (staticFive == 5) {
    printLongLongLine(uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040427c) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004042c6) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticFive == 5) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00404360 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticFive == 5) {
    local_10 = &local_18;
    printLongLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(uint *puParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(uint *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(uint *puParm1)

{
  if (goodB2G2Static != 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(uint *puParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  goodG2BStatic = 1;
  goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_34_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_1c = 5;
  local_18 = &local_1c;
  local_10 = local_18;
  printIntLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004045bf) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  if (globalFalse == 0) {
    printLine("pointer is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalTrue != 0) {
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_10_good(void)

{
  good1();
  good2();
  return;
}


void badSink(void)

{
  printLongLine(*CWE476_NULL_Pointer_Dereference__long_45_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_45_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLine(*CWE476_NULL_Pointer_Dereference__long_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  CWE476_NULL_Pointer_Dereference__long_45_goodG2BData = &local_18;
  local_10 = CWE476_NULL_Pointer_Dereference__long_45_goodG2BData;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__long_45_goodB2GData == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*CWE476_NULL_Pointer_Dereference__long_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__long_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_51b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_51b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_51b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_07_bad(void)

{
  uint *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 10;
    }
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_06_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004049b5) */
/* WARNING: Removing unreachable block (ram,0x004049c8) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404a10) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404a47) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("pointer is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_22_badSink(char *pcParm1)

{
  if (CWE476_NULL_Pointer_Dereference__char_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_22_goodB2G1Sink(char *pcParm1)

{
  if (CWE476_NULL_Pointer_Dereference__char_22_goodB2G1Global == 0) {
    if (pcParm1 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*pcParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_22_goodB2G2Sink(char *pcParm1)

{
  if (CWE476_NULL_Pointer_Dereference__char_22_goodB2G2Global != 0) {
    if (pcParm1 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*pcParm1);
    }
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_22_goodG2BSink(char *pcParm1)

{
  if (CWE476_NULL_Pointer_Dereference__char_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  uint *local_10;
  
  if (staticTrue != 0) {
    local_10 = (uint *)0x0;
  }
  if (staticFalse == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404d1a) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  if (staticFalse == 0) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffec : 0x00404daa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  if (staticTrue != 0) {
    local_10 = &local_14;
    printIntLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53d_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53d_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53d_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_06_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404f9d) */

void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void good2(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_53c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_53c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_53c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52c_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52c_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52c_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_68_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_68_badData = 0;
  CWE476_NULL_Pointer_Dereference__int_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  CWE476_NULL_Pointer_Dereference__int_68_goodG2BData = &local_14;
  local_10 = CWE476_NULL_Pointer_Dereference__int_68_goodG2BData;
  CWE476_NULL_Pointer_Dereference__int_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int_68_goodB2GData = 0;
  CWE476_NULL_Pointer_Dereference__int_68b_goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_64b_badSink(undefined8 *puParm1)

{
  printLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_64b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_64b_goodB2GSink(long *plParm1)

{
  if ((undefined8 *)*plParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*(undefined8 *)*plParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__struct_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_18;
  code *local_10;
  
  local_10 = CWE476_NULL_Pointer_Dereference__struct_65b_goodG2BSink;
  local_28 = 0;
  local_24 = 0;
  local_18 = &local_28;
  CWE476_NULL_Pointer_Dereference__struct_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__struct_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_03_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void good2(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_22_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_22_badGlobal = 1;
  CWE476_NULL_Pointer_Dereference__char_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE476_NULL_Pointer_Dereference__char_22_goodB2G1Global = 0;
  CWE476_NULL_Pointer_Dereference__char_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE476_NULL_Pointer_Dereference__char_22_goodB2G2Global = 1;
  CWE476_NULL_Pointer_Dereference__char_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_22_goodG2BGlobal = 1;
  CWE476_NULL_Pointer_Dereference__char_22_goodG2BSink(&DAT_0041b3af);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_15_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004054ba) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004054ee) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  uint *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)0x0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405646) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x004056e4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
    printIntLine(0);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_64b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53d_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53d_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53d_goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_14_bad(void)

{
  if (globalFive == 5) {
    printLongLine(uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405879) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004058c3) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalFive == 5) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040595d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalFive == 5) {
    local_10 = &local_18;
    printLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405a3e) */

void CWE476_NULL_Pointer_Dereference__binary_if_15_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405a62) */
/* WARNING: Removing unreachable block (ram,0x00405a6d) */

void good1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405a91) */
/* WARNING: Removing unreachable block (ram,0x00405a9c) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_32_bad(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00405b62 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_38 = 5;
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = &local_38;
  local_20 = local_28;
  local_30 = local_28;
  printLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405bb7) */

void goodB2G(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__long_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_15_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405c2b) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405c63) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


void goodG2B1(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041b438);
  return;
}


void goodG2B2(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041b438);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int_52b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405de4) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405e2c) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffec : 0x00405ec0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = &local_14;
    printIntLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__struct_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  undefined4 *local_38;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_38 = &local_18;
  local_10 = local_38;
  CWE476_NULL_Pointer_Dereference__struct_66b_goodG2BSink(local_48);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__struct_66b_goodB2GSink(local_38);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_63b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_63b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_63b_goodB2GSink(uint **ppuParm1)

{
  if (*ppuParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)**ppuParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_64b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_64b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_64b_goodB2GSink(long *plParm1)

{
  if ((undefined8 *)*plParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*(undefined8 *)*plParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_06_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406114) */
/* WARNING: Removing unreachable block (ram,0x00406127) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040616f) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004061a6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_52c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_52c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_52c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_67_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_67b_goodG2BSink(&DAT_0041b4a2);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__char_67b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_14_bad(void)

{
  if (globalFive == 5) {
    printLongLongLine(uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004063d8) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406422) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalFive == 5) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x004064bc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalFive == 5) {
    local_10 = &local_18;
    printLongLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_32_bad(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00406596 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_38 = 5;
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = &local_38;
  local_20 = local_28;
  local_30 = local_28;
  printLongLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004065eb) */

void goodB2G(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)*CWE476_NULL_Pointer_Dereference__char_68_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)*CWE476_NULL_Pointer_Dereference__char_68_goodG2BData);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_68b_goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__char_68_goodB2GData == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*CWE476_NULL_Pointer_Dereference__char_68_goodB2GData);
  }
  return;
}


void badSink(void)

{
  printLongLongLine(*CWE476_NULL_Pointer_Dereference__int64_t_45_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_45_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(*CWE476_NULL_Pointer_Dereference__int64_t_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  CWE476_NULL_Pointer_Dereference__int64_t_45_goodG2BData = &local_18;
  local_10 = CWE476_NULL_Pointer_Dereference__int64_t_45_goodG2BData;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__int64_t_45_goodB2GData == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*CWE476_NULL_Pointer_Dereference__int64_t_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040682f) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040687b) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)DAT_0041b512);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_67b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_67b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_67b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54e_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54e_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54e_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_03_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406a62) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406a94) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_03_good(void)

{
  goodB2G1();
  goodB2G2();
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


/* WARNING: Removing unreachable block (ram,0x00406b77) */

void CWE476_NULL_Pointer_Dereference__binary_if_08_bad(void)

{
  staticReturnsTrue();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406bb4) */
/* WARNING: Removing unreachable block (ram,0x00406bbf) */

void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406bf0) */
/* WARNING: Removing unreachable block (ram,0x00406bfb) */

void good2(void)

{
  staticReturnsTrue();
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = (char *)0x0;
  }
  if (staticFalse == 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406cd9) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)DAT_0041b581);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(&DAT_0041b586);
  return;
}


void goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_53c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_53c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_53c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_18_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406f0c) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__long_54b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52c_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52c_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52c_goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_04_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004070aa) */
/* WARNING: Removing unreachable block (ram,0x004070bd) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407103) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407139) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_31_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_28 = 5;
  local_20 = &local_28;
  local_18 = local_20;
  local_10 = local_20;
  printLongLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407261) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_34_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


void goodG2B(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041b5eb);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407325) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__char_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_02_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void good2(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)**(char **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__char_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)**(char **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__char_66b_goodB2GSink(long lParm1)

{
  if (*(char **)(lParm1 + 0x10) == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)**(char **)(lParm1 + 0x10));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004074ad) */

void CWE476_NULL_Pointer_Dereference__binary_if_13_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004074e7) */
/* WARNING: Removing unreachable block (ram,0x004074f2) */

void good1(void)

{
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407520) */
/* WARNING: Removing unreachable block (ram,0x0040752b) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_67_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_67b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407653) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040769b) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040773d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
    printIntLine(0);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_65b_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_65b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_65b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_63b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_63b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_63b_goodB2GSink(uint **ppuParm1)

{
  if (*ppuParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)**ppuParm1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040789a) */

void CWE476_NULL_Pointer_Dereference__binary_if_07_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004078d4) */
/* WARNING: Removing unreachable block (ram,0x004078df) */

void good1(void)

{
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040790d) */
/* WARNING: Removing unreachable block (ram,0x00407918) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int_53b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_18_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_18_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_22_badSink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int64_t_22_badGlobal != 0) {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G1Sink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G1Global == 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G2Sink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G2Global != 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*puParm1);
    }
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_22_goodG2BSink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int64_t_22_goodG2BGlobal != 0) {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_52b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_51b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_51b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_51b_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_17_bad(void)

{
  uint *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (uint *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (uint *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  uint local_1c;
  uint *local_18;
  int local_10;
  int local_c;
  
  local_1c = 5;
  local_c = 0;
  while (local_c < 1) {
    local_18 = &local_1c;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
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
  
  local_1c = 5;
  local_10 = goodG2BSink;
  local_18 = &local_1c;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_11_bad(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = &local_14;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_02_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407f96) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407fc8) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53d_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53d_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53d_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004080eb) */

void CWE476_NULL_Pointer_Dereference__binary_if_03_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040810e) */
/* WARNING: Removing unreachable block (ram,0x00408119) */

void good1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040813c) */
/* WARNING: Removing unreachable block (ram,0x00408147) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_03_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004081a3) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004081d5) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_54d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__long_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_20 = 5;
  local_10 = CWE476_NULL_Pointer_Dereference__long_65b_goodG2BSink;
  local_18 = &local_20;
  CWE476_NULL_Pointer_Dereference__long_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__long_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__struct_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__struct_63b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_22_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_22_badGlobal = 1;
  CWE476_NULL_Pointer_Dereference__int64_t_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G1Global = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G2Global = 1;
  CWE476_NULL_Pointer_Dereference__int64_t_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_22_goodG2BGlobal = 1;
  CWE476_NULL_Pointer_Dereference__int64_t_22_goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  uint *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)0x0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040855b) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffec : 0x004085eb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = &local_14;
    printIntLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_52c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_52c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_52c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_15_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void good2(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_01_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040882a) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408897) */
/* WARNING: Removing unreachable block (ram,0x004088b4) */
/* WARNING: Removing unreachable block (ram,0x004088bf) */

void CWE476_NULL_Pointer_Dereference__binary_if_12_bad(void)

{
  globalReturnsTrueOrFalse();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004088f0) */
/* WARNING: Removing unreachable block (ram,0x004088fb) */
/* WARNING: Removing unreachable block (ram,0x00408918) */
/* WARNING: Removing unreachable block (ram,0x00408923) */

void good1(void)

{
  globalReturnsTrueOrFalse();
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_12_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_66b_badSink(long lParm1)

{
  printLongLongLine(**(undefined8 **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(**(undefined8 **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_66b_goodB2GSink(long lParm1)

{
  if (*(undefined8 **)(lParm1 + 0x10) == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(**(undefined8 **)(lParm1 + 0x10));
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408a3d) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408a87) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00408b21 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = &local_18;
    printLongLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_06_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408b9e) */

void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void good2(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_63b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_63b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_63b_goodB2GSink(long *plParm1)

{
  if ((undefined8 *)*plParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*(undefined8 *)*plParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_52b_goodG2BSink(&DAT_0041b7e6);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__char_52b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_05_bad(void)

{
  if (staticTrue != 0) {
    printLongLine(uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_10 = (undefined8 *)0x0;
  }
  if (staticFalse == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408dbf) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticFalse == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00408e55 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticTrue != 0) {
    local_10 = &local_18;
    printLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_51b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_51b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_51b_goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_17_bad(void)

{
  uint *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (uint *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (uint *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  uint local_28;
  undefined4 local_24;
  uint *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0;
    local_24 = 0;
    local_18 = &local_28;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_16_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040912d) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void goodG2B(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041b841);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_28 = 0;
  local_24 = 0;
  local_18 = &local_28;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004092fb) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409343) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  if (staticFive == 5) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffec : 0x004093d7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  if (staticFive == 5) {
    local_10 = &local_14;
    printIntLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040943a) */

void CWE476_NULL_Pointer_Dereference__binary_if_02_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040945d) */
/* WARNING: Removing unreachable block (ram,0x00409468) */

void good1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040948b) */
/* WARNING: Removing unreachable block (ram,0x00409496) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_51b_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_51b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_51b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_05_bad(void)

{
  uint *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 10;
    }
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint *puVar1;
  
  if (staticFalse == 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_34_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_20 = 5;
  local_18 = &local_20;
  local_10 = local_18;
  printLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004096ec) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__long_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_31_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_24 = 5;
  local_20 = &local_24;
  local_18 = local_20;
  local_10 = local_20;
  printIntLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004097af) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_66b_badSink(long lParm1)

{
  printLongLine(**(undefined8 **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__long_66b_goodG2BSink(long lParm1)

{
  printLongLine(**(undefined8 **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__long_66b_goodB2GSink(long lParm1)

{
  if (*(undefined8 **)(lParm1 + 0x10) == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(**(undefined8 **)(lParm1 + 0x10));
  }
  return;
}


void badSink(undefined8 *puParm1)

{
  if (badStatic != 0) {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(undefined8 *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(undefined8 *puParm1)

{
  if (goodB2G2Static != 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*puParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(*puParm1);
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  goodG2BStatic = 1;
  goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_16_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_16_good(void)

{
  good1();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409a9b) */

void CWE476_NULL_Pointer_Dereference__binary_if_10_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409ad4) */
/* WARNING: Removing unreachable block (ram,0x00409adf) */

void good1(void)

{
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409b0c) */
/* WARNING: Removing unreachable block (ram,0x00409b17) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54e_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54e_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54e_goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_63b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  uint *local_10;
  
  if (globalTrue != 0) {
    local_10 = (uint *)0x0;
  }
  if (globalFalse == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409cd9) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  if (globalFalse == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00409d77 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (globalTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
    printIntLine(0);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_12_bad(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = &local_14;
  }
  else {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409ea9) */
/* WARNING: Removing unreachable block (ram,0x00409ecb) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data is NULL");
  }
  else {
    printLine("data is NULL");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  globalReturnsTrueOrFalse();
  local_10 = &local_14;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine((ulong)*local_10);
  }
  else {
    printIntLine((ulong)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_51_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_51b_goodG2BSink(&DAT_0041b959);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__char_51b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("pointer is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_09_good(void)

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


void CWE476_NULL_Pointer_Dereference__int_08_bad(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = &local_14;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  if (globalFive == 5) {
    printLine("pointer is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (globalFive == 5) {
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_01_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a416) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)*CWE476_NULL_Pointer_Dereference__char_45_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_45_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)*CWE476_NULL_Pointer_Dereference__char_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_45_goodG2BData = &DAT_0041b9d7;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__char_45_goodB2GData == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*CWE476_NULL_Pointer_Dereference__char_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__char_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_12_bad(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = &local_18;
  }
  else {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  else {
    printLongLongLine(*local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a60f) */
/* WARNING: Removing unreachable block (ram,0x0040a633) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data is NULL");
  }
  else {
    printLine("data is NULL");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  globalReturnsTrueOrFalse();
  local_10 = &local_18;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(*local_10);
  }
  else {
    printLongLongLine(*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54e_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54e_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54e_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__long_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  undefined8 *local_38;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_38 = &local_18;
  local_10 = local_38;
  CWE476_NULL_Pointer_Dereference__long_66b_goodG2BSink(local_48);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__long_66b_goodB2GSink(local_38);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_68b_badSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__int_68_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_68b_goodG2BSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__int_68_goodG2BData);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_68b_goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__int_68_goodB2GData == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__int_68_goodB2GData);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_15_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a87c) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a8b2) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_53b_goodG2BSink(&DAT_0041ba1d);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__char_53b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53_good(void)

{
  goodG2B();
  goodB2G();
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


void CWE476_NULL_Pointer_Dereference__deref_after_check_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("pointer is NULL");
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
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_52c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_52c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_52c_goodB2GSink(uParm1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ab1c) */

void CWE476_NULL_Pointer_Dereference__binary_if_09_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ab55) */
/* WARNING: Removing unreachable block (ram,0x0040ab60) */

void good1(void)

{
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ab8d) */
/* WARNING: Removing unreachable block (ram,0x0040ab98) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int_54b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_04_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ac79) */

void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void good2(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_32_bad(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


void goodG2B(void)

{
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined **local_18;
  undefined **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = &DAT_0041ba95;
  local_30 = &DAT_0041ba95;
  local_28 = &DAT_0041ba95;
  printHexCharLine((ulong)(uint)(int)DAT_0041ba95);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ae24) */

void goodB2G(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__char_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_17_bad(void)

{
  undefined8 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (undefined8 *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined8 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (undefined8 *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_20;
  undefined8 *local_18;
  int local_10;
  int local_c;
  
  local_20 = 5;
  local_c = 0;
  while (local_c < 1) {
    local_18 = &local_20;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_20 = 5;
  local_10 = goodG2BSink;
  local_18 = &local_20;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_02_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b0a0) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b0d4) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_66b_badSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__int_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__int_66b_goodB2GSink(long lParm1)

{
  if (*(uint **)(lParm1 + 0x10) == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54d_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54e_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54d_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54e_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54d_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54e_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_65b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_65b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_65b_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_68b_badSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__struct_68_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_68b_goodG2BSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__struct_68_goodG2BData);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_68b_goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__struct_68_goodB2GData == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__struct_68_goodB2GData);
  }
  return;
}


void badSink(undefined8 *puParm1)

{
  if (badStatic != 0) {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(undefined8 *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(undefined8 *puParm1)

{
  if (goodB2G2Static != 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*puParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  if (goodG2BStatic != 0) {
    printLongLine(*puParm1);
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  goodG2BStatic = 1;
  goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b4f2) */

void CWE476_NULL_Pointer_Dereference__deref_after_check_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("pointer is NULL");
  }
  else {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b540) */

void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("pointer is NULL");
  }
  else {
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_12_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_68b_badSink(void)

{
  printLongLine(*CWE476_NULL_Pointer_Dereference__long_68_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_68b_goodG2BSink(void)

{
  printLongLine(*CWE476_NULL_Pointer_Dereference__long_68_goodG2BData);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_68b_goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__long_68_goodB2GData == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*CWE476_NULL_Pointer_Dereference__long_68_goodB2GData);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__int_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  undefined4 *local_38;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_38 = &local_14;
  local_10 = local_38;
  CWE476_NULL_Pointer_Dereference__int_66b_goodG2BSink(local_48);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__int_66b_goodB2GSink(local_38);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52c_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52c_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_52c_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b71d) */

void CWE476_NULL_Pointer_Dereference__binary_if_05_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b756) */
/* WARNING: Removing unreachable block (ram,0x0040b761) */

void good1(void)

{
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b78e) */
/* WARNING: Removing unreachable block (ram,0x0040b799) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_05_good(void)

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


void CWE476_NULL_Pointer_Dereference__struct_08_bad(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  uint *local_10;
  
  if (staticTrue != 0) {
    local_10 = (uint *)0x0;
  }
  if (staticFalse == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ba34) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  if (staticFalse == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040bad2 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (staticTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
    printIntLine(0);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_53c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_53c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_53c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_68_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_68_badData = 0;
  CWE476_NULL_Pointer_Dereference__struct_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  CWE476_NULL_Pointer_Dereference__struct_68_goodG2BData = &local_18;
  local_10 = CWE476_NULL_Pointer_Dereference__struct_68_goodG2BData;
  CWE476_NULL_Pointer_Dereference__struct_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__struct_68_goodB2GData = 0;
  CWE476_NULL_Pointer_Dereference__struct_68b_goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_04_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bd31) */
/* WARNING: Removing unreachable block (ram,0x0040bd44) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bd8a) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bdc0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_31_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_28 = 5;
  local_20 = &local_28;
  local_18 = local_20;
  local_10 = local_20;
  printLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bee8) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__long_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_52c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_52c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_52b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_52c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_67b_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_67b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_67b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  uint *local_10;
  
  if (globalTrue != 0) {
    local_10 = (uint *)0x0;
  }
  if (globalFalse == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c09f) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  if (globalFalse == 0) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffec : 0x0040c12f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  if (globalTrue != 0) {
    local_10 = &local_14;
    printIntLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_34_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_28 = 0;
  local_24 = 0;
  local_18 = &local_28;
  local_10 = local_18;
  printIntLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c1fb) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_53c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_53c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_53c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_04_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c2ed) */

void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void good2(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_67_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__long_67b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char *pcParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(char *pcParm1)

{
  if (goodB2G1Static == 0) {
    if (pcParm1 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*pcParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(char *pcParm1)

{
  if (goodB2G2Static != 0) {
    if (pcParm1 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*pcParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(char *pcParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(&DAT_0041bc67);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_03_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c618) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c64e) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


void goodG2B1(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041bc79);
  return;
}


void goodG2B2(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041bc79);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_22_badSink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__struct_22_badGlobal != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_22_goodB2G1Sink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__struct_22_goodB2G1Global == 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_22_goodB2G2Sink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__struct_22_goodB2G2Global != 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_22_goodG2BSink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__struct_22_goodG2BGlobal != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__char_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined *local_10;
  
  local_10 = &DAT_0041bca0;
  CWE476_NULL_Pointer_Dereference__char_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__char_63b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__int64_t_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_20 = 5;
  local_10 = CWE476_NULL_Pointer_Dereference__int64_t_65b_goodG2BSink;
  local_18 = &local_20;
  CWE476_NULL_Pointer_Dereference__int64_t_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__int64_t_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_15_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c8ed) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c923) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_11_bad(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_22_badSink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__long_22_badGlobal != 0) {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_22_goodB2G1Sink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__long_22_goodB2G1Global == 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_22_goodB2G2Sink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__long_22_goodB2G2Global != 0) {
    if (puParm1 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*puParm1);
    }
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_22_goodG2BSink(undefined8 *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__long_22_goodG2BGlobal != 0) {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ccb0) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ccf8) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040cd9a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
    printIntLine(0);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__struct_53b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)0x0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cf09) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040cf9f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = &local_18;
    printLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_51b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_51b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_51b_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__long_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__long_64b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_53d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_53d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_53c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__struct_53d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_16_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d141) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_01_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_01_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54e_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54e_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54e_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d3b4) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d400) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)DAT_0041bda0);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__struct_45_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_45_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__struct_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  CWE476_NULL_Pointer_Dereference__struct_45_goodG2BData = &local_18;
  local_10 = CWE476_NULL_Pointer_Dereference__struct_45_goodG2BData;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__struct_45_goodB2GData == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__struct_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__struct_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__struct_54b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_53d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_53d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_53d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_05_bad(void)

{
  if (staticTrue != 0) {
    printLongLongLine(uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_10 = (undefined8 *)0x0;
  }
  if (staticFalse == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d765) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticFalse == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040d7fb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticTrue != 0) {
    local_10 = &local_18;
    printLongLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_05_good(void)

{
  goodB2G1();
  goodB2G2();
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


void CWE476_NULL_Pointer_Dereference__long_08_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = &local_18;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_14_bad(void)

{
  uint *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 10;
    }
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_14_good(void)

{
  good1();
  good2();
  return;
}


void badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(&DAT_0041be0b,uParm2,&DAT_0041be0b);
  return;
}


void goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__int_64b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_18_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040dd35) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  if (staticFive == 5) {
    printLine("pointer is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticFive == 5) {
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52c_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52c_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52c_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_68_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_68_badData = 0;
  CWE476_NULL_Pointer_Dereference__long_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  CWE476_NULL_Pointer_Dereference__long_68_goodG2BData = &local_18;
  local_10 = CWE476_NULL_Pointer_Dereference__long_68_goodG2BData;
  CWE476_NULL_Pointer_Dereference__long_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__long_68_goodB2GData = 0;
  CWE476_NULL_Pointer_Dereference__long_68b_goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54d_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54e_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54d_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54e_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_54d_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__long_54e_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_11_bad(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)0x0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = "Good";
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_02_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e17a) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e1b0) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


void goodG2B1(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041be90);
  return;
}


void goodG2B2(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041be90);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_68_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_68_badData = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  CWE476_NULL_Pointer_Dereference__int64_t_68_goodG2BData = &local_18;
  local_10 = CWE476_NULL_Pointer_Dereference__int64_t_68_goodG2BData;
  CWE476_NULL_Pointer_Dereference__int64_t_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_68_goodB2GData = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_68b_goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_02_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e312) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e346) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_34_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_20 = 5;
  local_18 = &local_20;
  local_10 = local_18;
  printLongLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e474) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__int_45_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_45_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__int_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  CWE476_NULL_Pointer_Dereference__int_45_goodG2BData = &local_14;
  local_10 = CWE476_NULL_Pointer_Dereference__int_45_goodG2BData;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__int_45_goodB2GData == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*CWE476_NULL_Pointer_Dereference__int_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printIntLine((ulong)uRam0000000000000000);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLine("pointer is NULL");
    local_c = local_c + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_17_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_03_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e671) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e6a5) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e7b2) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e7fc) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x0040e896 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = &local_18;
    printLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_06_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e928) */
/* WARNING: Removing unreachable block (ram,0x0040e93b) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e981) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e9b5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_63b_badSink(undefined8 *puParm1)

{
  printLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_63b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*(undefined8 *)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_63b_goodB2GSink(long *plParm1)

{
  if ((undefined8 *)*plParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*(undefined8 *)*plParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = (char *)0x0;
  }
  if (globalFalse == 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040eb8d) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)DAT_0041bf51);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_53d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_53d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_53c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_53d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__struct_52b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_22_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_22_badGlobal = 1;
  CWE476_NULL_Pointer_Dereference__struct_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE476_NULL_Pointer_Dereference__struct_22_goodB2G1Global = 0;
  CWE476_NULL_Pointer_Dereference__struct_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE476_NULL_Pointer_Dereference__struct_22_goodB2G2Global = 1;
  CWE476_NULL_Pointer_Dereference__struct_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_22_goodG2BGlobal = 1;
  CWE476_NULL_Pointer_Dereference__struct_22_goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_13_bad(void)

{
  uint *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 10;
    }
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_13_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ef58) */

void CWE476_NULL_Pointer_Dereference__binary_if_16_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ef7c) */
/* WARNING: Removing unreachable block (ram,0x0040ef87) */

void good1(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_16_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_18_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040efe2) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void goodG2B(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041bf84);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_16_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f079) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_01_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


void goodG2B(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041bf96);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f13b) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__char_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(uint *puParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(uint *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(uint *puParm1)

{
  if (goodB2G2Static != 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(uint *puParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  goodG2BStatic = 1;
  goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54e_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54e_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54e_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_03_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f3a7) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f3db) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  undefined8 *local_38;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_38 = &local_18;
  local_10 = local_38;
  CWE476_NULL_Pointer_Dereference__int64_t_66b_goodG2BSink(local_48);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  CWE476_NULL_Pointer_Dereference__int64_t_66b_goodB2GSink(local_38);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__long_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__long_63b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52c_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52c_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_52c_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_64b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_64b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_64b_goodB2GSink(uint **ppuParm1)

{
  if (*ppuParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)**ppuParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_67_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int_67b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_68b_badSink(void)

{
  printLongLongLine(*CWE476_NULL_Pointer_Dereference__int64_t_68_badData);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_68b_goodG2BSink(void)

{
  printLongLongLine(*CWE476_NULL_Pointer_Dereference__int64_t_68_goodG2BData);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_68b_goodB2GSink(void)

{
  if (CWE476_NULL_Pointer_Dereference__int64_t_68_goodB2GData == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*CWE476_NULL_Pointer_Dereference__int64_t_68_goodB2GData);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_18_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f7d7) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_51_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__struct_51b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_03_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void good2(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fa34) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fa7c) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_14;
  uint *local_10;
  
  local_14 = 5;
  if (globalFive == 5) {
    local_10 = &local_14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffec : 0x0040fb10 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  if (globalFive == 5) {
    local_10 = &local_14;
    printIntLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_52c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_52c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_52b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_52c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fc09) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fc55) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)DAT_0041c05c);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_32_bad(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcc : 0x0040fdbc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 **local_18;
  undefined4 **local_10;
  
  local_34 = 5;
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = &local_34;
  local_20 = local_28;
  local_30 = local_28;
  printIntLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fe0f) */

void goodB2G(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__int_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_17_bad(void)

{
  char *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (char *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (char *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = "Good";
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_06_bad(void)

{
  printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ffa7) */
/* WARNING: Removing unreachable block (ram,0x0040ffba) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410004) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410035) */

void goodG2B1(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041c0a6);
  return;
}


void goodG2B2(void)

{
  printHexCharLine((ulong)(uint)(int)DAT_0041c0a6);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_18_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_18_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_12_bad(void)

{
  int iVar1;
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    local_10 = (uint *)0x0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*local_10);
    }
  }
  else {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410232) */
/* WARNING: Removing unreachable block (ram,0x00410254) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data is NULL");
  }
  else {
    printLine("data is NULL");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  globalReturnsTrueOrFalse();
  local_10 = &local_18;
  local_14 = 0;
  local_18 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine((ulong)*local_10);
  }
  else {
    printIntLine((ulong)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_15_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


void good1(void)

{
  printLine("pointer is NULL");
  return;
}


void good2(void)

{
  printLine("pointer is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__long_53b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_12_bad(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = &local_18;
  }
  else {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  else {
    printLongLine(*local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004104ae) */
/* WARNING: Removing unreachable block (ram,0x004104d2) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data is NULL");
  }
  else {
    printLine("data is NULL");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  globalReturnsTrueOrFalse();
  local_10 = &local_18;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLine(*local_10);
  }
  else {
    printLongLine(*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_67b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_67b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_67b_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410619) */

void CWE476_NULL_Pointer_Dereference__binary_if_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410637) */
/* WARNING: Removing unreachable block (ram,0x00410652) */
/* WARNING: Removing unreachable block (ram,0x0041065d) */

void good1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041068a) */
/* WARNING: Removing unreachable block (ram,0x00410695) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_06_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004106e6) */

void CWE476_NULL_Pointer_Dereference__binary_if_18_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041070a) */
/* WARNING: Removing unreachable block (ram,0x00410715) */

void good1(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_18_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_06_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410788) */
/* WARNING: Removing unreachable block (ram,0x0041079b) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004107e1) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041080e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_12_bad(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    *puVar2 = 10;
    printIntLine((ulong)*puVar2);
  }
  else {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = 10;
    }
    printIntLine((ulong)*puVar2);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    *puVar2 = 10;
    printIntLine((ulong)*puVar2);
  }
  else {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    *puVar2 = 10;
    printIntLine((ulong)*puVar2);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_12_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54b_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54c_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54b_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54c_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54b_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_54c_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_04_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410ab4) */
/* WARNING: Removing unreachable block (ram,0x00410ac7) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410b0b) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410b3e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  printIntLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_17_bad(void)

{
  undefined8 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (undefined8 *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLine(*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined8 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = (undefined8 *)0x0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_20;
  undefined8 *local_18;
  int local_10;
  int local_c;
  
  local_20 = 5;
  local_c = 0;
  while (local_c < 1) {
    local_18 = &local_20;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLine(*local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_66b_badSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_66b_goodB2GSink(long lParm1)

{
  if (*(uint **)(lParm1 + 0x10) == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)**(uint **)(lParm1 + 0x10));
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_63b_badSink(char **ppcParm1)

{
  printHexCharLine((ulong)(uint)(int)**ppcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_63b_goodG2BSink(char **ppcParm1)

{
  printHexCharLine((ulong)(uint)(int)**ppcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_63b_goodB2GSink(char **ppcParm1)

{
  if (*ppcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)**ppcParm1);
  }
  return;
}


void badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_20 = 5;
  local_10 = goodG2BSink;
  local_18 = &local_20;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_16_bad(void)

{
  printLongLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410f2f) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLongLine(5);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_22_bad(void)

{
  CWE476_NULL_Pointer_Dereference__long_22_badGlobal = 1;
  CWE476_NULL_Pointer_Dereference__long_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE476_NULL_Pointer_Dereference__long_22_goodB2G1Global = 0;
  CWE476_NULL_Pointer_Dereference__long_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE476_NULL_Pointer_Dereference__long_22_goodB2G2Global = 1;
  CWE476_NULL_Pointer_Dereference__long_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__long_22_goodG2BGlobal = 1;
  CWE476_NULL_Pointer_Dereference__long_22_goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)0x0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411112) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x004111a8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = &local_18;
    printLongLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_11_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = &local_18;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_67b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_67b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_67b_goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_17_bad(void)

{
  uint *puVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 10;
    }
    printIntLine((ulong)*puVar1);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  uint *puVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
    local_c = local_c + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_17_good(void)

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


void CWE476_NULL_Pointer_Dereference__int64_t_08_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLongLine(*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = &local_18;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004116e7) */

void CWE476_NULL_Pointer_Dereference__binary_if_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041171d) */
/* WARNING: Removing unreachable block (ram,0x00411728) */

void good1(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_17_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_64b_badSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_64b_goodG2BSink(uint **ppuParm1)

{
  printIntLine((ulong)**ppuParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_64b_goodB2GSink(uint **ppuParm1)

{
  if (*ppuParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)**ppuParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_11_bad(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = 10;
    }
    printIntLine((ulong)*puVar2);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    *puVar2 = 10;
    printIntLine((ulong)*puVar2);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (uint *)malloc(4);
    *puVar2 = 5;
    printIntLine((ulong)*puVar2);
    *puVar2 = 10;
    printIntLine((ulong)*puVar2);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_02_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void good2(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_65b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_65b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_65b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLine(uRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_10 = (undefined8 *)0x0;
  }
  if (globalFalse == 0) {
    if (local_10 == (undefined8 *)0x0) {
      printLine("data is NULL");
    }
    else {
      printLongLine(*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411b55) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalFalse == 0) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00411beb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (globalTrue != 0) {
    local_10 = &local_18;
    printLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_22_badSink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int_22_badGlobal != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_22_goodB2G1Sink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int_22_goodB2G1Global == 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_22_goodB2G2Sink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int_22_goodB2G2Global != 0) {
    if (puParm1 == (uint *)0x0) {
      printLine("data is NULL");
    }
    else {
      printIntLine((ulong)*puParm1);
    }
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int_22_goodG2BSink(uint *puParm1)

{
  if (CWE476_NULL_Pointer_Dereference__int_22_goodG2BGlobal != 0) {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_12_bad(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = "Good";
  }
  else {
    local_10 = (char *)0x0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411d98) */
/* WARNING: Removing unreachable block (ram,0x00411dbe) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data is NULL");
  }
  else {
    printLine("data is NULL");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine((ulong)(uint)(int)DAT_0041c29d);
  }
  else {
    printHexCharLine((ulong)(uint)(int)DAT_0041c29d);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411e88) */

void CWE476_NULL_Pointer_Dereference__binary_if_14_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411ec2) */
/* WARNING: Removing unreachable block (ram,0x00411ecd) */

void good1(void)

{
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411efb) */
/* WARNING: Removing unreachable block (ram,0x00411f06) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_54b_goodG2BSink(&DAT_0041c2d0);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__char_54b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041200e) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412056) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  uint local_18;
  undefined4 local_14;
  uint *local_10;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x004120f8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    local_10 = &local_18;
    printIntLine(0);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_51_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__int64_t_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__int64_t_51b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_32_bad(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00412250 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 **local_18;
  undefined4 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_38 = 0;
  local_34 = 0;
  local_28 = &local_38;
  local_20 = local_28;
  local_30 = local_28;
  printIntLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004122a3) */

void goodB2G(void)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_53c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_53d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)cRam0000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (char *)0x0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004123de) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  char *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)DAT_0041c326);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_10_bad(void)

{
  uint *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 10;
    }
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint *puVar1;
  
  if (globalFalse == 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (uint *)malloc(4);
    *puVar1 = 5;
    printIntLine((ulong)*puVar1);
    *puVar1 = 10;
    printIntLine((ulong)*puVar1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_01_bad(void)

{
  printLongLine(uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  local_10 = &local_18;
  printLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041263b) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__long_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53d_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53d_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__long_53d_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 == (undefined8 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printLongLine(*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54d_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54e_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54d_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54e_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int64_t_54d_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int64_t_54e_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_67b_badSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_67b_goodG2BSink(uint *puParm1)

{
  printIntLine((ulong)*puParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_67b_goodB2GSink(uint *puParm1)

{
  if (puParm1 == (uint *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine((ulong)*puParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_65b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_65b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)*pcParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_65b_goodB2GSink(char *pcParm1)

{
  if (pcParm1 == (char *)0x0) {
    printLine("data is NULL");
  }
  else {
    printHexCharLine((ulong)(uint)(int)*pcParm1);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__struct_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  CWE476_NULL_Pointer_Dereference__struct_64b_goodB2GSink(&local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_01_bad(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 10;
  }
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)malloc(4);
  *puVar1 = 5;
  printIntLine((ulong)*puVar1);
  *puVar1 = 10;
  printIntLine((ulong)*puVar1);
  return;
}


void CWE476_NULL_Pointer_Dereference__null_check_after_deref_01_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine((ulong)uRam0000000000000000);
  }
  return;
}


void good1(void)

{
  if (staticFalse == 0) {
    printLine("pointer is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  if (staticTrue != 0) {
    printLine("pointer is NULL");
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__deref_after_check_05_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412a25) */

void CWE476_NULL_Pointer_Dereference__binary_if_01_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412a48) */
/* WARNING: Removing unreachable block (ram,0x00412a53) */

void good1(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_01_good(void)

{
  good1();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_22_bad(void)

{
  CWE476_NULL_Pointer_Dereference__int_22_badGlobal = 1;
  CWE476_NULL_Pointer_Dereference__int_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE476_NULL_Pointer_Dereference__int_22_goodB2G1Global = 0;
  CWE476_NULL_Pointer_Dereference__int_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE476_NULL_Pointer_Dereference__int_22_goodB2G2Global = 1;
  CWE476_NULL_Pointer_Dereference__int_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  
  local_14 = 5;
  local_10 = &local_14;
  CWE476_NULL_Pointer_Dereference__int_22_goodG2BGlobal = 1;
  CWE476_NULL_Pointer_Dereference__int_22_goodG2BSink(local_10);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412b6d) */

void CWE476_NULL_Pointer_Dereference__binary_if_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412b8a) */
/* WARNING: Removing unreachable block (ram,0x00412ba5) */
/* WARNING: Removing unreachable block (ram,0x00412bb0) */

void good1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412bdc) */
/* WARNING: Removing unreachable block (ram,0x00412be7) */

void good2(void)

{
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_04_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412c60) */
/* WARNING: Removing unreachable block (ram,0x00412c73) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412cb7) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412ce3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_31_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = &local_28;
  local_18 = local_20;
  local_10 = local_20;
  printIntLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412e1d) */

void goodB2G(void)

{
  printLine("data is NULL");
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53c_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_53d_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53c_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_53d_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_53c_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__char_53d_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_02_bad(void)

{
  printIntLine((ulong)uRam0000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412ed6) */

void goodB2G1(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412f08) */

void goodB2G2(void)

{
  printLine("data is NULL");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  printIntLine(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__long_07_bad(void)

{
  if (staticFive == 5) {
    printLongLine(uRam0000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041301b) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413065) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data is NULL");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticFive == 5) {
    local_10 = &local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLine(*local_10);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x004130ff */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B2(void)

{
  undefined8 local_18;
  undefined8 *local_10;
  
  local_18 = 5;
  if (staticFive == 5) {
    local_10 = &local_18;
    printLongLine(5);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__long_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413172) */

void CWE476_NULL_Pointer_Dereference__binary_if_11_bad(void)

{
  globalReturnsTrue();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004131af) */
/* WARNING: Removing unreachable block (ram,0x004131ba) */

void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004131eb) */
/* WARNING: Removing unreachable block (ram,0x004131f6) */

void good2(void)

{
  globalReturnsTrue();
  return;
}


void CWE476_NULL_Pointer_Dereference__binary_if_11_good(void)

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


void CWE476_NULL_Pointer_Dereference__char_08_bad(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)0x0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)0x0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == (char *)0x0) {
      printLine("data is NULL");
    }
    else {
      printHexCharLine((ulong)(uint)(int)*local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = "Good";
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = "Good";
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)*local_10);
  }
  return;
}


void CWE476_NULL_Pointer_Dereference__char_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54d_badSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54e_badSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54d_goodG2BSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54e_goodG2BSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__int_54d_goodB2GSink(undefined8 uParm1)

{
  CWE476_NULL_Pointer_Dereference__int_54e_goodB2GSink(uParm1);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_67_bad(void)

{
  CWE476_NULL_Pointer_Dereference__struct_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = &local_18;
  CWE476_NULL_Pointer_Dereference__struct_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__struct_67b_goodB2GSink(0);
  return;
}


void CWE476_NULL_Pointer_Dereference__struct_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_68_bad(void)

{
  CWE476_NULL_Pointer_Dereference__char_68_badData = 0;
  CWE476_NULL_Pointer_Dereference__char_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE476_NULL_Pointer_Dereference__char_68_goodG2BData = &DAT_0041c482;
  CWE476_NULL_Pointer_Dereference__char_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE476_NULL_Pointer_Dereference__char_68_goodB2GData = 0;
  CWE476_NULL_Pointer_Dereference__char_68b_goodB2GSink();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE476_NULL_Pointer_Dereference__char_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__char_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__char_65b_goodG2BSink(&DAT_0041c487,uParm2,&DAT_0041c487);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE476_NULL_Pointer_Dereference__char_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE476_NULL_Pointer_Dereference__char_65_good(void)

{
  goodG2B();
  goodB2G();
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
  printf((char *)(double)fParm1,&DAT_0041c4a9);
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
  printf(pcParm1,&DAT_0041c4c6);
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
    __isoc99_sscanf(lVar1,&DAT_0041c4d4,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0041c4dc,&local_14);
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

