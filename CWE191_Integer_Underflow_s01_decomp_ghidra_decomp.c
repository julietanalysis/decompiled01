
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00661ff8;
  if (PTR___gmon_start___00661ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400950(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00662010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00662018)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_00662020)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00662028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00662030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00662038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00662040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00662048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00662050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00662058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00662060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00662068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00662070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00662078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00662080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00662088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00662090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00662098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006620a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006620a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006620b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006620b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00661ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400b07) */
/* WARNING: Removing unreachable block (ram,0x00400b11) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400b44) */
/* WARNING: Removing unreachable block (ram,0x00400b4e) */

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


/* WARNING: Removing unreachable block (ram,0x00400b94) */
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
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_66_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_64_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_03_good();");
  CWE191_Integer_Underflow__char_min_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_67_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_06_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_01_good();");
  CWE191_Integer_Underflow__char_min_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_05_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_31_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_02_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_17_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_07_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_01_good();");
  CWE191_Integer_Underflow__char_rand_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_66_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_54_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_54_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_41_good();");
  CWE191_Integer_Underflow__char_min_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_22_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_07_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_31_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_11_good();");
  CWE191_Integer_Underflow__char_min_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_66_good();");
  CWE191_Integer_Underflow__char_rand_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_53_good();");
  CWE191_Integer_Underflow__char_min_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_52_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_54_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_32_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_02_good();");
  CWE191_Integer_Underflow__char_rand_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_31_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_09_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_18_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_05_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_15_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_64_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_13_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_11_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_31_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_52_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_65_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_21_good();");
  CWE191_Integer_Underflow__char_min_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_31_good();");
  CWE191_Integer_Underflow__char_min_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_22_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_17_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_64_good();");
  CWE191_Integer_Underflow__char_min_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_07_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_12_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_15_good();");
  CWE191_Integer_Underflow__char_min_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_03_good();");
  CWE191_Integer_Underflow__char_min_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_05_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_51_good();");
  CWE191_Integer_Underflow__char_rand_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_06_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_44_good();");
  CWE191_Integer_Underflow__char_rand_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_34_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_34_good();");
  CWE191_Integer_Underflow__char_rand_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_61_good();");
  CWE191_Integer_Underflow__char_rand_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_14_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_22_good();");
  CWE191_Integer_Underflow__char_rand_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_11_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_21_good();");
  CWE191_Integer_Underflow__char_min_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_09_good();");
  CWE191_Integer_Underflow__char_rand_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_06_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_63_good();");
  CWE191_Integer_Underflow__char_rand_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_63_good();");
  CWE191_Integer_Underflow__char_rand_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_63_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_17_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_16_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_01_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_18_good();");
  CWE191_Integer_Underflow__char_rand_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_01_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_45_good();");
  CWE191_Integer_Underflow__char_min_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_13_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_17_good();");
  CWE191_Integer_Underflow__char_min_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_52_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_32_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_10_good();");
  CWE191_Integer_Underflow__char_min_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_21_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_68_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_16_good();");
  CWE191_Integer_Underflow__char_min_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_65_good();");
  CWE191_Integer_Underflow__char_min_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_61_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_15_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_09_good();");
  CWE191_Integer_Underflow__char_min_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_44_good();");
  CWE191_Integer_Underflow__char_min_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_16_good();");
  CWE191_Integer_Underflow__char_rand_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_07_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_65_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_11_good();");
  CWE191_Integer_Underflow__char_min_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_17_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_53_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_42_good();");
  CWE191_Integer_Underflow__char_min_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_10_good();");
  CWE191_Integer_Underflow__char_min_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_31_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_16_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_67_good();");
  CWE191_Integer_Underflow__char_rand_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_41_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_67_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_41_good();");
  CWE191_Integer_Underflow__char_rand_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_31_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_02_good();");
  CWE191_Integer_Underflow__char_min_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_65_good();");
  CWE191_Integer_Underflow__char_rand_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_11_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_14_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_61_good();");
  CWE191_Integer_Underflow__char_min_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_07_good();");
  CWE191_Integer_Underflow__char_min_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_13_good();");
  CWE191_Integer_Underflow__char_rand_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_01_good();");
  CWE191_Integer_Underflow__char_rand_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_66_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_42_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_11_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_06_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_42_good();");
  CWE191_Integer_Underflow__char_rand_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_03_good();");
  CWE191_Integer_Underflow__char_rand_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_51_good();");
  CWE191_Integer_Underflow__char_rand_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_13_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_68_good();");
  CWE191_Integer_Underflow__char_rand_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_67_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_18_good();");
  CWE191_Integer_Underflow__char_min_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_51_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_16_good();");
  CWE191_Integer_Underflow__char_rand_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_08_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_61_good();");
  CWE191_Integer_Underflow__char_rand_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_10_good();");
  CWE191_Integer_Underflow__char_rand_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_05_good();");
  CWE191_Integer_Underflow__char_min_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_34_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_42_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_21_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_01_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_65_good();");
  CWE191_Integer_Underflow__char_rand_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_21_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_10_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_21_good();");
  CWE191_Integer_Underflow__char_rand_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_14_good();");
  CWE191_Integer_Underflow__char_min_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_41_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_52_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_22_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_12_good();");
  CWE191_Integer_Underflow__char_rand_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_41_good();");
  CWE191_Integer_Underflow__char_rand_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_07_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_10_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_03_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_63_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_68_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_09_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_07_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_68_good();");
  CWE191_Integer_Underflow__char_rand_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_18_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_10_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_09_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_66_good();");
  CWE191_Integer_Underflow__char_min_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_68_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_17_good();");
  CWE191_Integer_Underflow__char_min_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_04_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_66_good();");
  CWE191_Integer_Underflow__char_min_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_61_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_52_good();");
  CWE191_Integer_Underflow__char_min_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_52_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_32_good();");
  CWE191_Integer_Underflow__char_min_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_61_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_66_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_21_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_63_good();");
  CWE191_Integer_Underflow__char_min_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_12_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_08_good();");
  CWE191_Integer_Underflow__char_min_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_21_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_51_good();");
  CWE191_Integer_Underflow__char_min_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_45_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_41_good();");
  CWE191_Integer_Underflow__char_min_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_31_good();");
  CWE191_Integer_Underflow__char_rand_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_18_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_65_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_09_good();");
  CWE191_Integer_Underflow__char_min_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_54_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_11_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_68_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_10_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_41_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_09_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_16_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_51_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_12_good();");
  CWE191_Integer_Underflow__char_rand_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_12_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_52_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_67_good();");
  CWE191_Integer_Underflow__char_min_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_66_good();");
  CWE191_Integer_Underflow__char_rand_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_17_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_08_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_13_good();");
  CWE191_Integer_Underflow__char_min_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_51_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_42_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_42_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_45_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_44_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_42_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_52_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_52_good();");
  CWE191_Integer_Underflow__char_rand_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_12_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_17_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_07_good();");
  CWE191_Integer_Underflow__char_rand_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_53_good();");
  CWE191_Integer_Underflow__char_min_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_16_good();");
  CWE191_Integer_Underflow__char_min_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_08_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_02_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_16_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_08_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_32_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_45_good();");
  CWE191_Integer_Underflow__char_rand_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_06_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_01_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_68_good();");
  CWE191_Integer_Underflow__char_min_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_65_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_04_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_14_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_18_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_17_good();");
  CWE191_Integer_Underflow__char_rand_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_02_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_04_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_66_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_32_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_04_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_18_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_54_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_06_good();");
  CWE191_Integer_Underflow__char_rand_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_21_good();");
  CWE191_Integer_Underflow__char_rand_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_14_good();");
  CWE191_Integer_Underflow__char_min_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_53_good();");
  CWE191_Integer_Underflow__char_rand_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_13_good();");
  CWE191_Integer_Underflow__char_rand_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_67_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_13_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_03_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_21_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_12_good();");
  CWE191_Integer_Underflow__char_min_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_67_good();");
  CWE191_Integer_Underflow__char_min_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_63_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_41_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_61_good();");
  CWE191_Integer_Underflow__char_min_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_16_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_31_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_14_good();");
  CWE191_Integer_Underflow__char_rand_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_07_good();");
  CWE191_Integer_Underflow__char_min_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_15_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_11_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_41_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_17_good();");
  CWE191_Integer_Underflow__char_rand_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_22_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_67_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_64_good();");
  CWE191_Integer_Underflow__char_min_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_44_good();");
  CWE191_Integer_Underflow__char_rand_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_04_good();");
  CWE191_Integer_Underflow__char_rand_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_53_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_34_good();");
  CWE191_Integer_Underflow__char_rand_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_53_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_01_good();");
  CWE191_Integer_Underflow__char_min_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_04_good();");
  CWE191_Integer_Underflow__char_min_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_44_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_03_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_05_good();");
  CWE191_Integer_Underflow__char_rand_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_51_good();");
  CWE191_Integer_Underflow__char_min_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_15_good();");
  CWE191_Integer_Underflow__char_rand_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_64_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_64_good();");
  CWE191_Integer_Underflow__char_rand_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_18_good();");
  CWE191_Integer_Underflow__char_rand_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_53_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_64_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_08_good();");
  CWE191_Integer_Underflow__char_rand_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_18_good();");
  CWE191_Integer_Underflow__char_min_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_08_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_22_good();");
  CWE191_Integer_Underflow__char_min_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_05_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_44_good();");
  CWE191_Integer_Underflow__char_min_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_66_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_66_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_54_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_09_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_22_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_53_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_14_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_02_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_03_good();");
  CWE191_Integer_Underflow__char_rand_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_13_good();");
  CWE191_Integer_Underflow__char_min_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_34_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_03_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_16_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_06_good();");
  CWE191_Integer_Underflow__char_min_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_67_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_54_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_08_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_64_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_45_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_64_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_12_good();");
  CWE191_Integer_Underflow__char_min_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_44_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_14_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_04_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_16_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_32_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_02_good();");
  CWE191_Integer_Underflow__char_min_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_32_good();");
  CWE191_Integer_Underflow__char_rand_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_44_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_52_good();");
  CWE191_Integer_Underflow__char_rand_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_68_good();");
  CWE191_Integer_Underflow__char_min_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_61_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_15_good();");
  CWE191_Integer_Underflow__char_min_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_68_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_04_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_54_good();");
  CWE191_Integer_Underflow__char_min_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_68_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_34_good();");
  CWE191_Integer_Underflow__char_min_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_03_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_05_good();");
  CWE191_Integer_Underflow__char_min_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_54_good();");
  CWE191_Integer_Underflow__char_min_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_34_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_44_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_07_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_02_good();");
  CWE191_Integer_Underflow__char_rand_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_31_good();");
  CWE191_Integer_Underflow__char_rand_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_22_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_51_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_09_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_42_good();");
  CWE191_Integer_Underflow__char_min_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_34_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_41_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_31_good();");
  CWE191_Integer_Underflow__char_min_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_21_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_53_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_61_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_07_good();");
  CWE191_Integer_Underflow__char_rand_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_51_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_12_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_06_good();");
  CWE191_Integer_Underflow__char_min_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_05_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_06_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_34_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_32_good();");
  CWE191_Integer_Underflow__char_rand_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_53_good();");
  CWE191_Integer_Underflow__char_rand_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_42_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_32_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_04_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_14_good();");
  CWE191_Integer_Underflow__char_rand_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_67_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_64_good();");
  CWE191_Integer_Underflow__char_rand_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_63_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_08_good();");
  CWE191_Integer_Underflow__char_min_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_65_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_18_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_45_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_03_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_05_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_01_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_61_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_22_good();");
  CWE191_Integer_Underflow__char_min_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_13_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_05_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_09_good();");
  CWE191_Integer_Underflow__char_rand_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_04_good();");
  CWE191_Integer_Underflow__char_min_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_67_good();");
  CWE191_Integer_Underflow__char_rand_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_18_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_02_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_06_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_11_good();");
  CWE191_Integer_Underflow__char_rand_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_15_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_10_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_51_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_65_good();");
  CWE191_Integer_Underflow__char_min_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_64_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_22_good();");
  CWE191_Integer_Underflow__char_rand_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_15_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_15_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_10_good();");
  CWE191_Integer_Underflow__char_rand_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_12_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_44_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_15_good();");
  CWE191_Integer_Underflow__char_rand_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_41_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_52_good();");
  CWE191_Integer_Underflow__char_min_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_42_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_34_good();");
  CWE191_Integer_Underflow__char_min_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_06_good();");
  CWE191_Integer_Underflow__char_rand_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_08_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_02_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_10_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_65_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_54_good();");
  CWE191_Integer_Underflow__char_rand_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_17_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_61_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_32_good();");
  CWE191_Integer_Underflow__char_min_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_63_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_10_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_15_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_12_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_63_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_14_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_42_good();");
  CWE191_Integer_Underflow__char_rand_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_11_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_65_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_45_good();");
  CWE191_Integer_Underflow__char_min_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_45_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_63_good();");
  CWE191_Integer_Underflow__char_min_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_05_good();");
  CWE191_Integer_Underflow__char_rand_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_01_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_51_good();");
  CWE191_Integer_Underflow__int64_t_min_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_63_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_45_good();");
  CWE191_Integer_Underflow__char_rand_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_08_good();");
  CWE191_Integer_Underflow__char_rand_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_32_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_54_good();");
  CWE191_Integer_Underflow__char_rand_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_09_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_13_good();");
  CWE191_Integer_Underflow__char_fscanf_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_13_good();");
  CWE191_Integer_Underflow__char_fscanf_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_53_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_44_good();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_14_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_11_good();");
  CWE191_Integer_Underflow__char_rand_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_45_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_03_good();");
  CWE191_Integer_Underflow__int64_t_min_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_04_good();");
  CWE191_Integer_Underflow__char_rand_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_66_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_64_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_03_bad();");
  CWE191_Integer_Underflow__char_min_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_67_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_06_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_01_bad();");
  CWE191_Integer_Underflow__char_min_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_05_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_31_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_02_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_17_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_07_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_01_bad();");
  CWE191_Integer_Underflow__char_rand_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_66_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_54_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_54_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_41_bad();");
  CWE191_Integer_Underflow__char_min_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_22_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_07_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_31_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_11_bad();");
  CWE191_Integer_Underflow__char_min_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_66_bad();");
  CWE191_Integer_Underflow__char_rand_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_53_bad();");
  CWE191_Integer_Underflow__char_min_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_52_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_54_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_32_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_02_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_31_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_09_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_18_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_05_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_15_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_64_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_13_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_11_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_31_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_52_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_65_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_21_bad();");
  CWE191_Integer_Underflow__char_min_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_31_bad();");
  CWE191_Integer_Underflow__char_min_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_22_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_17_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_64_bad();");
  CWE191_Integer_Underflow__char_min_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_07_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_12_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_15_bad();");
  CWE191_Integer_Underflow__char_min_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_03_bad();");
  CWE191_Integer_Underflow__char_min_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_05_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_51_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_06_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_44_bad();");
  CWE191_Integer_Underflow__char_rand_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_34_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_34_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_61_bad();");
  CWE191_Integer_Underflow__char_rand_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_14_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_22_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_11_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_21_bad();");
  CWE191_Integer_Underflow__char_min_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_09_bad();");
  CWE191_Integer_Underflow__char_rand_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_06_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_63_bad();");
  CWE191_Integer_Underflow__char_rand_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_63_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_63_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_17_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_16_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_01_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_18_bad();");
  CWE191_Integer_Underflow__char_rand_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_01_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_45_bad();");
  CWE191_Integer_Underflow__char_min_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_13_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_17_bad();");
  CWE191_Integer_Underflow__char_min_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_52_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_32_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_10_bad();");
  CWE191_Integer_Underflow__char_min_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_21_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_68_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_16_bad();");
  CWE191_Integer_Underflow__char_min_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_65_bad();");
  CWE191_Integer_Underflow__char_min_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_61_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_15_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_09_bad();");
  CWE191_Integer_Underflow__char_min_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_44_bad();");
  CWE191_Integer_Underflow__char_min_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_16_bad();");
  CWE191_Integer_Underflow__char_rand_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_07_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_65_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_11_bad();");
  CWE191_Integer_Underflow__char_min_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_17_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_53_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_42_bad();");
  CWE191_Integer_Underflow__char_min_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_10_bad();");
  CWE191_Integer_Underflow__char_min_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_31_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_16_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_67_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_41_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_67_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_41_bad();");
  CWE191_Integer_Underflow__char_rand_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_31_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_02_bad();");
  CWE191_Integer_Underflow__char_min_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_65_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_11_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_14_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_61_bad();");
  CWE191_Integer_Underflow__char_min_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_07_bad();");
  CWE191_Integer_Underflow__char_min_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_13_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_01_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_66_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_42_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_11_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_06_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_42_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_03_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_51_bad();");
  CWE191_Integer_Underflow__char_rand_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_13_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_68_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_67_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_18_bad();");
  CWE191_Integer_Underflow__char_min_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_51_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_16_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_08_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_61_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_10_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_05_bad();");
  CWE191_Integer_Underflow__char_min_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_34_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_42_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_21_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_01_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_65_bad();");
  CWE191_Integer_Underflow__char_rand_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_21_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_10_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_21_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_14_bad();");
  CWE191_Integer_Underflow__char_min_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_41_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_52_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_22_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_12_bad();");
  CWE191_Integer_Underflow__char_rand_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_41_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_07_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_10_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_03_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_63_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_68_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_09_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_07_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_68_bad();");
  CWE191_Integer_Underflow__char_rand_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_18_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_10_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_09_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_66_bad();");
  CWE191_Integer_Underflow__char_min_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_68_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_17_bad();");
  CWE191_Integer_Underflow__char_min_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_04_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_66_bad();");
  CWE191_Integer_Underflow__char_min_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_61_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_52_bad();");
  CWE191_Integer_Underflow__char_min_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_52_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_32_bad();");
  CWE191_Integer_Underflow__char_min_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_61_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_66_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_21_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_63_bad();");
  CWE191_Integer_Underflow__char_min_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_12_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_08_bad();");
  CWE191_Integer_Underflow__char_min_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_21_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_51_bad();");
  CWE191_Integer_Underflow__char_min_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_45_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_41_bad();");
  CWE191_Integer_Underflow__char_min_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_31_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_18_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_65_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_09_bad();");
  CWE191_Integer_Underflow__char_min_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_54_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_11_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_68_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_10_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_41_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_09_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_16_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_51_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_12_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_12_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_52_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_67_bad();");
  CWE191_Integer_Underflow__char_min_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_66_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_17_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_08_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_13_bad();");
  CWE191_Integer_Underflow__char_min_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_51_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_42_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_42_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_45_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_44_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_42_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_52_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_52_bad();");
  CWE191_Integer_Underflow__char_rand_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_12_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_17_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_07_bad();");
  CWE191_Integer_Underflow__char_rand_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_53_bad();");
  CWE191_Integer_Underflow__char_min_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_16_bad();");
  CWE191_Integer_Underflow__char_min_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_08_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_02_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_16_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_08_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_32_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_45_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_06_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_01_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_68_bad();");
  CWE191_Integer_Underflow__char_min_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_65_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_04_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_14_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_18_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_17_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_02_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_04_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_66_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_32_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_04_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_18_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_54_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_06_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_21_bad();");
  CWE191_Integer_Underflow__char_rand_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_14_bad();");
  CWE191_Integer_Underflow__char_min_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_53_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_13_bad();");
  CWE191_Integer_Underflow__char_rand_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_67_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_13_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_03_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_21_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_12_bad();");
  CWE191_Integer_Underflow__char_min_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_67_bad();");
  CWE191_Integer_Underflow__char_min_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_63_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_41_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_61_bad();");
  CWE191_Integer_Underflow__char_min_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_16_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_31_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_14_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_07_bad();");
  CWE191_Integer_Underflow__char_min_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_15_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_11_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_41_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_17_bad();");
  CWE191_Integer_Underflow__char_rand_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_22_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_67_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_64_bad();");
  CWE191_Integer_Underflow__char_min_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_44_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_04_bad();");
  CWE191_Integer_Underflow__char_rand_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_53_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_34_bad();");
  CWE191_Integer_Underflow__char_rand_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_53_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_01_bad();");
  CWE191_Integer_Underflow__char_min_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_04_bad();");
  CWE191_Integer_Underflow__char_min_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_44_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_03_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_05_bad();");
  CWE191_Integer_Underflow__char_rand_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_51_bad();");
  CWE191_Integer_Underflow__char_min_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_15_bad();");
  CWE191_Integer_Underflow__char_rand_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_64_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_64_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_18_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_53_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_64_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_08_bad();");
  CWE191_Integer_Underflow__char_rand_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_18_bad();");
  CWE191_Integer_Underflow__char_min_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_08_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_22_bad();");
  CWE191_Integer_Underflow__char_min_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_05_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_44_bad();");
  CWE191_Integer_Underflow__char_min_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_66_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_66_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_54_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_09_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_22_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_53_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_14_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_02_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_03_bad();");
  CWE191_Integer_Underflow__char_rand_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_13_bad();");
  CWE191_Integer_Underflow__char_min_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_34_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_03_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_16_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_06_bad();");
  CWE191_Integer_Underflow__char_min_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_67_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_54_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_08_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_64_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_45_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_64_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_12_bad();");
  CWE191_Integer_Underflow__char_min_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_44_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_14_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_04_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_16_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_32_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_02_bad();");
  CWE191_Integer_Underflow__char_min_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_32_bad();");
  CWE191_Integer_Underflow__char_rand_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_44_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_52_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_68_bad();");
  CWE191_Integer_Underflow__char_min_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_61_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_15_bad();");
  CWE191_Integer_Underflow__char_min_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_68_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_04_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_54_bad();");
  CWE191_Integer_Underflow__char_min_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_68_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_34_bad();");
  CWE191_Integer_Underflow__char_min_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_03_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_05_bad();");
  CWE191_Integer_Underflow__char_min_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_54_bad();");
  CWE191_Integer_Underflow__char_min_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_34_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_44_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_07_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_02_bad();");
  CWE191_Integer_Underflow__char_rand_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_31_bad();");
  CWE191_Integer_Underflow__char_rand_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_22_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_51_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_09_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_42_bad();");
  CWE191_Integer_Underflow__char_min_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_34_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_41_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_31_bad();");
  CWE191_Integer_Underflow__char_min_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_21_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_53_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_61_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_07_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_51_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_12_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_06_bad();");
  CWE191_Integer_Underflow__char_min_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_05_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_06_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_34_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_32_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_53_bad();");
  CWE191_Integer_Underflow__char_rand_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_42_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_32_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_04_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_14_bad();");
  CWE191_Integer_Underflow__char_rand_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_67_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_64_bad();");
  CWE191_Integer_Underflow__char_rand_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_63_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_08_bad();");
  CWE191_Integer_Underflow__char_min_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_65_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_18_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_45_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_03_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_05_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_01_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_61_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_22_bad();");
  CWE191_Integer_Underflow__char_min_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_13_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_05_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_09_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_04_bad();");
  CWE191_Integer_Underflow__char_min_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_67_bad();");
  CWE191_Integer_Underflow__char_rand_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_18_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_02_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_06_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_11_bad();");
  CWE191_Integer_Underflow__char_rand_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_15_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_10_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_51_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_65_bad();");
  CWE191_Integer_Underflow__char_min_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_64_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_22_bad();");
  CWE191_Integer_Underflow__char_rand_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_15_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_15_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_10_bad();");
  CWE191_Integer_Underflow__char_rand_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_12_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_44_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_15_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_41_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_52_bad();");
  CWE191_Integer_Underflow__char_min_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_42_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_34_bad();");
  CWE191_Integer_Underflow__char_min_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_06_bad();");
  CWE191_Integer_Underflow__char_rand_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_08_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_02_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_10_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_65_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_54_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_17_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_61_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_32_bad();");
  CWE191_Integer_Underflow__char_min_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_63_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_10_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_15_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_12_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_63_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_14_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_42_bad();");
  CWE191_Integer_Underflow__char_rand_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_11_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_65_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_sub_45_bad();");
  CWE191_Integer_Underflow__char_min_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_45_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_multiply_63_bad();");
  CWE191_Integer_Underflow__char_min_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_05_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_01_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_51_bad();");
  CWE191_Integer_Underflow__int64_t_min_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_63_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_45_bad();");
  CWE191_Integer_Underflow__char_rand_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_08_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_32_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_sub_54_bad();");
  CWE191_Integer_Underflow__char_rand_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_09_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_13_bad();");
  CWE191_Integer_Underflow__char_fscanf_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_13_bad();");
  CWE191_Integer_Underflow__char_fscanf_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_53_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_44_bad();");
  CWE191_Integer_Underflow__int64_t_rand_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_14_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_11_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_45_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_03_bad();");
  CWE191_Integer_Underflow__int64_t_min_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_04_bad();");
  CWE191_Integer_Underflow__char_rand_multiply_04_bad();
  return 0;
}


void CWE191_Integer_Underflow__char_rand_sub_54d_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54d_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54d_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_53b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_53b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_53b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_06_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f1b4,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404fe4) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f1b4,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f1b4,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004050cd) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f203,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f203,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_01_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_52b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_52b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_52b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53d_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53d_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53d_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_01_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f278,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f278,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_13_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_12_bad(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004058f5) */
/* WARNING: Removing unreachable block (ram,0x0040591e) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(0xfffffffd);
  }
  else {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004059e1) */

void CWE191_Integer_Underflow__int64_t_min_multiply_16_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405a21) */
/* WARNING: Removing unreachable block (ram,0x00405a4a) */
/* WARNING: Removing unreachable block (ram,0x00405a31) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043f35b,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_sub_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043f35b,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_65_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__char_fscanf_multiply_65b_badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f390,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__char_fscanf_multiply_65b_goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f390,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_18_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f3c8,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f3c8,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_64b_badSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_64b_goodG2BSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_64b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_52c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_52c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_52c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_09_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_54b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_multiply_54b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_09_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f490,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f490,&local_a);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f490,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52c_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52c_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52c_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
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


void CWE191_Integer_Underflow__char_rand_sub_08_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
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
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_21_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_03_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_03_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f5c8,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f5c8,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f5c8,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_multiply_68_badData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_fscanf_multiply_68_badData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_multiply_68_goodG2BData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_fscanf_multiply_68_goodG2BData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__char_fscanf_multiply_68_goodB2GData < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE191_Integer_Underflow__char_fscanf_multiply_68_goodB2GData
                                               * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_18_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_multiply_45_badData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_min_multiply_45_badData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_45_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_45_badData = 0x8000000000000000;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_multiply_45_goodG2BData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_min_multiply_45_goodG2BData * 2);
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_45_goodG2BData = 0xfffffffffffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int64_t_min_multiply_45_goodB2GData < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(CWE191_Integer_Underflow__int64_t_min_multiply_45_goodB2GData * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_45_goodB2GData = 0x8000000000000000;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0x7f);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalTrue != 0) {
    local_9 = -0x80;
  }
  if (globalFalse == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407112) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_52b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_52b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_52b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f6f0,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f6f0,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_64b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_51b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_51b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_51b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_66b_badSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f763,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f763,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_52b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_53b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_sub_53b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_12_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 0xfe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(0xfffffffd);
  }
  else {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_51b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_51b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_51b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_16_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f7f8,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f7f8,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52c_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52c_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52c_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_68_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043f863,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_68_badData = local_9;
  CWE191_Integer_Underflow__char_fscanf_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_68_goodG2BData = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043f863,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_68_goodB2GData = local_9;
  CWE191_Integer_Underflow__char_fscanf_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_15_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f868,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f868,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f868,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_multiply_65b_badSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_multiply_65b_goodB2GSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_64b_badSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_64b_goodG2BSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_64b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_51b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_51b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_51b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f8d3,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_54b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f8d3,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_54b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_52c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_52c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_52c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_51_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f8d6,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_51b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f8d6,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_51b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f8da,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_53b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f8da,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_53b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 CWE191_Integer_Underflow__int64_t_fscanf_sub_61b_badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f8dd,&local_10);
  return local_10;
}


undefined8 CWE191_Integer_Underflow__int64_t_fscanf_sub_61b_goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


undefined8 CWE191_Integer_Underflow__int64_t_fscanf_sub_61b_goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f8dd,&local_10);
  return local_10;
}


void CWE191_Integer_Underflow__char_min_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__char_min_multiply_68_badData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_multiply_68_badData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__char_min_multiply_68_goodG2BData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_min_multiply_68_goodG2BData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_min_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__char_min_multiply_68_goodB2GData < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE191_Integer_Underflow__char_min_multiply_68_goodB2GData
                                               * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((globalTrue != 0) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((globalTrue != 0) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_22_badSink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_min_multiply_22_badGlobal != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_multiply_22_goodB2G1Global == 0) {
    if (cParm1 < 0) {
      if (cParm1 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_22_goodB2G2Sink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_min_multiply_22_goodB2G2Global != 0) && (cParm1 < 0)) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_22_goodG2BSink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_min_multiply_22_goodG2BGlobal != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_65b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_65b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_65b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_18_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408bf6) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_10_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fa28,&local_18);
  }
  if (globalTrue != 0) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fa28,&local_18);
  }
  if (globalFalse == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fa28,&local_18);
  }
  if (globalTrue != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_14_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fa78,&local_a);
  }
  if (globalFive == 5) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fa78,&local_a);
  }
  if (globalFive == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fa78,&local_a);
  }
  if (globalFive == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_fscanf_sub_32_bad(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fac0,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  local_1a = local_19 + -1;
  printHexCharLine((ulong)(uint)(int)local_1a);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1a = 0xfe;
  local_1b = 0xfd;
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fac0,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (local_19 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1a = local_19 + -1;
    printHexCharLine((ulong)(uint)(int)local_1a);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_67_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043faf8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043faf8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_67b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_16_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409309) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_01_good(void)

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


void CWE191_Integer_Underflow__char_fscanf_sub_08_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fb68,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fb68,&local_a);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
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
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fb68,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_67b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_67b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_67b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_01_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fbe8,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fbe8,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_07_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fc20,&local_18);
  }
  if (staticFive == 5) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fc20,&local_18);
  }
  if (staticFive == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fc20,&local_18);
  }
  if (staticFive == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53d_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53d_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53d_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_12_bad(void)

{
  int iVar1;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLongLongLine(local_10 + -1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409d83) */
/* WARNING: Removing unreachable block (ram,0x00409db9) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  else {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  if ((badStatic != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_21_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fcd0,&local_9);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 < 0) {
      if (cParm1 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fcd0,&local_9);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if ((goodB2G2Static != 0) && (cParm1 < 0)) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fcd0,&local_9);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if ((goodG2BStatic != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_03_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fd20,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fd20,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fd20,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_22_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_min_multiply_22_badSink(0xffffff80);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__char_min_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_min_multiply_22_goodB2G1Sink(0xffffff80);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__char_min_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_min_multiply_22_goodB2G2Sink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_min_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_04_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a378) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a444) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_31_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_65_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int64_t_fscanf_multiply_65b_badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fdeb,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_65b_goodG2BSink
            (0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int64_t_fscanf_multiply_65b_goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fdeb,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_04_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fe28,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a805) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fe28,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fe28,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a8b7) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_31_bad(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fe70,&local_c);
  local_9 = local_c;
  local_a = local_c;
  local_b = local_c + -1;
  printHexCharLine((ulong)(uint)(int)local_b);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fe70,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (local_c == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_b = local_c + -1;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_67_bad(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043fea8,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_67b_badSink((ulong)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_67b_goodG2BSink(0xfe);
  return;
}


void goodB2G(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043fea8,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_67b_goodB2GSink((ulong)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_18_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043feb0,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043feb0,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_53d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_53d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_53d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_53d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54d_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54d_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54d_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_02_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b1a4) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b1f8) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_badData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_badData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodG2BData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodG2BData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodB2GData < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodB2GData * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_22_badSink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_rand_multiply_22_badGlobal != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G1Global == 0) {
    if (cParm1 < 0) {
      if (cParm1 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G2Sink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G2Global != 0) && (cParm1 < 0)) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_22_goodG2BSink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_rand_multiply_22_goodG2BGlobal != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_22_badSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_sub_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G1Global == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G2Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G2Global != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_22_goodG2BSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_sub_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_65b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_65b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_65b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalTrue != 0) {
    local_10 = -0x8000000000000000;
  }
  if (globalFalse == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b8fd) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004400f8,&local_9);
  local_16 = local_9;
  CWE191_Integer_Underflow__char_fscanf_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004400f8,&local_9);
  local_16 = local_9;
  CWE191_Integer_Underflow__char_fscanf_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x7f);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bb19) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bb68) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_min_sub_32_bad(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x80;
  local_1a = 0x80;
  local_1b = 0x7f;
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1a = 0xfe;
  local_1b = 0xfd;
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bd2d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined local_1c [2];
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_1c;
  local_18 = local_1c;
  local_1c[0] = 0x20;
  local_19 = 0x80;
  local_1a = 0x80;
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__char_min_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_02_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_01_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c053) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52c_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52c_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52c_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_54b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_54b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_11_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440248,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440248,&local_a);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
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
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440248,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_22_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_rand_multiply_22_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_rand_multiply_22_goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_rand_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440293,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_badData = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodG2BData = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440293,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodB2GData = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  if ((badStatic != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_21_bad(void)

{
  badStatic = 1;
  badSink(0xffffff80);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 < 0) {
      if (cParm1 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
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
  goodB2G1Sink(0xffffff80);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if ((goodB2G2Static != 0) && (cParm1 < 0)) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  if ((goodG2BStatic != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c89f) */

void CWE191_Integer_Underflow__char_min_multiply_03_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c8cb) */
/* WARNING: Removing unreachable block (ram,0x0040c8e7) */
/* WARNING: Removing unreachable block (ram,0x0040c8d1) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c909) */
/* WARNING: Removing unreachable block (ram,0x0040c925) */
/* WARNING: Removing unreachable block (ram,0x0040c90f) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_22_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0044031b,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_fscanf_sub_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0044031b,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0044031b,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_fscanf_sub_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_fscanf_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54d_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54d_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54d_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_65b_badSink
            (0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_65b_goodG2BSink
            (0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_65b_goodB2GSink
            (0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_04_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cc27) */
/* WARNING: Removing unreachable block (ram,0x0040cc39) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cc84) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ccbc) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_31_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cde1) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__char_min_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_10_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004403a0,&local_a);
  }
  if ((globalTrue != 0) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004403a0,&local_a);
  }
  if (globalFalse == 0) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004403a0,&local_a);
  }
  if ((globalTrue != 0) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_54b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_54b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54d_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54d_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54d_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004403eb,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004403eb,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54_good(void)

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


void CWE191_Integer_Underflow__int64_t_min_sub_08_bad(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
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
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_67_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_67b_badSink(0x80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_67b_goodG2BSink(0xfe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_sub_67b_goodB2GSink(0x80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53d_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53d_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_53d_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_multiply_68_badData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_min_multiply_68_badData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_multiply_68_goodG2BData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_min_multiply_68_goodG2BData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int64_t_min_multiply_68_goodB2GData < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(CWE191_Integer_Underflow__int64_t_min_multiply_68_goodB2GData * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_12_bad(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 < 0) {
      if (local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    if (local_9 < 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d7ff) */
/* WARNING: Removing unreachable block (ram,0x0040d81b) */
/* WARNING: Removing unreachable block (ram,0x0040d7d1) */
/* WARNING: Removing unreachable block (ram,0x0040d7ed) */
/* WARNING: Removing unreachable block (ram,0x0040d7d7) */
/* WARNING: Removing unreachable block (ram,0x0040d805) */

void goodB2G(void)

{
  globalReturnsTrueOrFalse();
  globalReturnsTrueOrFalse();
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(0xfffffffc);
  }
  else {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_65b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_65b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_65b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_14_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_22_badSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_sub_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_sub_22_goodB2G1Global == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_22_goodB2G2Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_sub_22_goodB2G2Global != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_22_goodG2BSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_sub_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_rand_sub_32_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  local_1b = local_1a - 1;
  printHexCharLine((ulong)(uint)(int)local_1b);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1a = 0xfe;
  local_1b = 0xfd;
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  if (local_1a == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1b = local_1a - 1;
    printHexCharLine((ulong)(uint)(int)local_1b);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52c_goodB2GSink(uParm1);
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


void CWE191_Integer_Underflow__char_fscanf_multiply_08_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440608,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440608,&local_a);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
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
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440608,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52c_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52c_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52c_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_11_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 < 0) {
      if (local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
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
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    if (local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_68_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_68_badData = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_68_goodG2BData = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_68_goodB2GData = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_21_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004406e0,&local_9);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004406e0,&local_9);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004406e0,&local_9);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_03_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440728,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440728,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440728,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_65b_badSink(uVar7,uParm2,uVar7);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_65b_goodG2BSink
            (0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_65b_goodB2GSink(uVar7,uParm2,uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_22_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_min_sub_22_badSink(0xffffff80);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__char_min_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_min_sub_22_goodB2G1Sink(0xffffff80);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__char_min_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_min_sub_22_goodB2G2Sink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_min_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_multiply_45_badData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_multiply_45_badData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_45_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_45_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodG2BData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodG2BData * 2);
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodG2BData = 0xfffffffffffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodB2GData < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodB2GData * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_45_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_04_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ed9c) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ee5e) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_31_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_65_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int64_t_fscanf_sub_65b_badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440818,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_65b_goodG2BSink
            (0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int64_t_fscanf_sub_65b_goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440818,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_18_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_18_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440858,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440858,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54d_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54d_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54d_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440890,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440890,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_52b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_multiply_68_badData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_multiply_68_badData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodG2BData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodG2BData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodB2GData < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodB2GData * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_12_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 0xfe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    if ((char)local_9 < 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(0xfffffffc);
  }
  else {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_51b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_51b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_51b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f926) */

void CWE191_Integer_Underflow__char_min_multiply_01_bad(void)

{
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f97e) */
/* WARNING: Removing unreachable block (ram,0x0040f99a) */
/* WARNING: Removing unreachable block (ram,0x0040f984) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53d_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53d_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53d_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_68b_badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_sub_68_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_68b_goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_sub_68_goodG2BData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_sub_68_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_sub_68_goodB2GData + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_16_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004409e0,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004409e0,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_22_badSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_rand_sub_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_rand_sub_22_goodB2G1Global == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_22_goodB2G2Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_rand_sub_22_goodB2G2Global != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_22_goodG2BSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_rand_sub_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x7f);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fd62) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fdb1) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_65b_badSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_rand_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_65b_goodB2GSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_multiply_61b_badSource(void)

{
  return 0x8000000000000000;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_multiply_61b_goodB2GSource(void)

{
  return 0x8000000000000000;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_53c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_53c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_53c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_53b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_53c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52c_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52c_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_52c_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440ae3,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_54b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440ae3,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_54b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_52c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_52c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_52b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_52c_goodB2GSink(uParm1);
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


void CWE191_Integer_Underflow__char_min_multiply_08_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 < 0) {
      if (local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
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
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    if (local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_51_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440b33,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_51b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440b33,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_51b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52c_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52c_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_52c_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_68_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_68_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodG2BData = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_multiply_68_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_11_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440b68,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440b68,&local_a);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
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
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440b68,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_02_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440bb0,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440bb0,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440bb0,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_22_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_rand_sub_22_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_rand_sub_22_goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_rand_sub_22_goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_rand_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_68_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440be8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68_badData = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68_goodG2BData = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440be8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68_goodB2GData = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_21_bad(void)

{
  badStatic = 1;
  badSink(0xffffff80);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
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
  goodB2G1Sink(0xffffff80);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_03_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410e59) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410e92) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_sub_65b_badSink
            (0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_sub_65b_goodG2BSink
            (0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_sub_65b_goodB2GSink
            (0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_10_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalTrue != 0) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFalse == 0) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalTrue != 0) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_badData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_badData * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440cb8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_goodG2BData < 0) {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_goodG2BData * 2);
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_goodG2BData = 0xfffffffffffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_goodB2GData < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_goodB2GData * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440cb8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_goodB2GData = local_10;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_10_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440cf8,&local_a);
  }
  if (globalTrue != 0) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440cf8,&local_a);
  }
  if (globalFalse == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440cf8,&local_a);
  }
  if (globalTrue != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_44_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440d40,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440d40,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_44_good(void)

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


void CWE191_Integer_Underflow__char_min_sub_08_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
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
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_11_bad(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
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
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_sub_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_min_sub_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_sub_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_bad(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00440e48,&local_20);
  local_10 = local_20;
  if (local_20 < 0) {
    local_18 = local_20 * 2;
    printLongLongLine(local_18);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00440e48,&local_20);
  local_10 = local_20;
  if (local_20 < 0) {
    if (local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_20 * 2;
      printLongLongLine(local_18);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_min_multiply_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_63_good(void)

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


void CWE191_Integer_Underflow__int64_t_rand_multiply_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
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
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_02_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041228a) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004122c3) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_66b_badSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) < 0) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) < 0) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_66b_goodB2GSink(long lParm1)

{
  long lVar1;
  
  lVar1 = *(long *)(lParm1 + 0x10);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041244c) */

void CWE191_Integer_Underflow__int64_t_min_multiply_15_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041248c) */
/* WARNING: Removing unreachable block (ram,0x004124b5) */
/* WARNING: Removing unreachable block (ram,0x0041249c) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004124e8) */
/* WARNING: Removing unreachable block (ram,0x00412511) */
/* WARNING: Removing unreachable block (ram,0x004124f8) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE191_Integer_Underflow__char_fscanf_multiply_61b_badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00440f73,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE191_Integer_Underflow__char_fscanf_multiply_61b_goodG2BSource(void)

{
  return 0xfe;
}


ulong CWE191_Integer_Underflow__char_fscanf_multiply_61b_goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00440f73,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__int64_t_min_sub_07_bad(void)

{
  if (staticFive == 5) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004126d1) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041273b) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x8000000000000000;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x8000000000000000;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_11_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
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
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_13_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004410a8,&local_a);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004410a8,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004410a8,&local_a);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_63b_badSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_63b_goodG2BSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004131f5) */

void CWE191_Integer_Underflow__char_min_multiply_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041322d) */
/* WARNING: Removing unreachable block (ram,0x0041323f) */
/* WARNING: Removing unreachable block (ram,0x0041325b) */
/* WARNING: Removing unreachable block (ram,0x00413245) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041328f) */
/* WARNING: Removing unreachable block (ram,0x004132ab) */
/* WARNING: Removing unreachable block (ram,0x00413295) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004132cc) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54e_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54e_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54e_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004411eb,&local_10);
  local_28 = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004411eb,&local_10);
  local_28 = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_multiply_61b_badSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_multiply_61b_goodG2BSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_multiply_61b_goodB2GSource(0x20);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_05_bad(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticTrue != 0) {
    local_10 = -0x8000000000000000;
  }
  if (staticFalse == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_10 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413757) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_41_bad(void)

{
  badSink(0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_07_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004412e8,&local_a);
  }
  if ((staticFive == 5) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004412e8,&local_a);
  }
  if (staticFive == 5) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004412e8,&local_a);
  }
  if ((staticFive == 5) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_64_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_sub_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_rand_sub_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_sub_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_67_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_67b_badSink((ulong)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_67b_goodG2BSink(0xfe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_67b_goodB2GSink((ulong)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_63_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_multiply_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_rand_multiply_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_multiply_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413f59) */

void CWE191_Integer_Underflow__int64_t_min_multiply_34_bad(void)

{
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413fef) */
/* WARNING: Removing unreachable block (ram,0x00414018) */
/* WARNING: Removing unreachable block (ram,0x00413fff) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_11_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
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
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_07_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticFive == 5) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticFive == 5) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_66b_badSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) < 0) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) < 0) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_66b_goodB2GSink(long lParm1)

{
  long lVar1;
  
  lVar1 = *(long *)(lParm1 + 0x10);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414a8c) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414bf6) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_15_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441508,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441508,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441508,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE191_Integer_Underflow__char_min_multiply_61b_badSource(void)

{
  return 0x80;
}


undefined8 CWE191_Integer_Underflow__char_min_multiply_61b_goodG2BSource(void)

{
  return 0xfe;
}


undefined8 CWE191_Integer_Underflow__char_min_multiply_61b_goodB2GSource(void)

{
  return 0x80;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  return uVar7;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  return uVar7;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_00441578,&local_10);
  return local_10;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_00441578,&local_10);
  return local_10;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_01_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041534e) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__char_min_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_51b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_51b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_51b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54e_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54e_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54e_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_multiply_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_multiply_61b_badSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_multiply_61b_goodG2BSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_multiply_61b_goodB2GSource(0x20);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((staticTrue != 0) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((staticTrue != 0) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_17_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if ((char)local_11 < 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if ((char)local_11 < 0) {
      if ((char)local_11 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 < 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink(uVar7);
  return;
}


void goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_05_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004417a8,&local_18);
  }
  if (staticTrue != 0) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004417a8,&local_18);
  }
  if (staticFalse == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004417a8,&local_18);
  }
  if (staticTrue != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_fscanf_sub_68_badData +
                                           -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_fscanf_sub_68_goodG2BData
                                           + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_sub_68_goodB2GData == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_fscanf_sub_68_goodB2GData
                                             + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_17_bad(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441828,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_12 + -1;
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441828,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_11 = local_12 + -1;
      printHexCharLine((ulong)(uint)(int)local_11);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_44_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441860,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441860,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004164d6) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041652a) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_34_bad(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00441920,&local_20);
  local_10 = local_20;
  local_18 = local_20 + -1;
  printLongLongLine(local_18);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00441920,&local_20);
  local_10 = local_20;
  if (local_20 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_20 + -1;
    printLongLongLine(local_18);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_66b_badSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) < 0) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) < 0) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_66b_goodB2GSink(long lParm1)

{
  long lVar1;
  
  lVar1 = *(long *)(lParm1 + 0x10);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_sub_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_min_sub_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_sub_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_53d_goodB2GSink(uParm1);
  return;
}


ulong CWE191_Integer_Underflow__char_rand_multiply_61b_badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


undefined8 CWE191_Integer_Underflow__char_rand_multiply_61b_goodG2BSource(void)

{
  return 0xfe;
}


ulong CWE191_Integer_Underflow__char_rand_multiply_61b_goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_15_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416ca8) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416cfe) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE191_Integer_Underflow__char_fscanf_sub_61b_badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_004419f0,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE191_Integer_Underflow__char_fscanf_sub_61b_goodG2BSource(void)

{
  return 0xfe;
}


ulong CWE191_Integer_Underflow__char_fscanf_sub_61b_goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_004419f0,local_c);
  return (ulong)local_c[0];
}


undefined8 badSource(void)

{
  return 0x8000000000000000;
}


void CWE191_Integer_Underflow__int64_t_min_sub_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x8000000000000000;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_41_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441a28,&local_10);
  badSink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441a28,&local_10);
  goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54e_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54e_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54e_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined local_48 [16];
  ulong local_38;
  ulong local_20;
  
  local_20 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  local_20 = local_38;
  CWE191_Integer_Underflow__int64_t_rand_multiply_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_multiply_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined local_48 [16];
  ulong local_38;
  ulong local_20;
  
  local_20 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  local_20 = local_38;
  CWE191_Integer_Underflow__int64_t_rand_multiply_66b_goodB2GSink(local_48);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_multiply_61b_badSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_multiply_61b_goodG2BSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_multiply_61b_goodB2GSource(0x20);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441b03,&local_10);
  local_28 = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441b03,&local_10);
  local_28 = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_sub_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_sub_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_sub_61b_goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_51_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_51b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_51b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_51b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_15_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441b38,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441b38,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441b38,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_05_bad(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticTrue != 0) {
    local_10 = -0x8000000000000000;
  }
  if (staticFalse == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417943) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_17_bad(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -0x80;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -0x80;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 + -1));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_41_bad(void)

{
  badSink(0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_07_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441c50,&local_a);
  }
  if (staticFive == 5) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441c50,&local_a);
  }
  if (staticFive == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441c50,&local_a);
  }
  if (staticFive == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00441c98,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__char_fscanf_multiply_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


ulong goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00441c98,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_41_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441cd8,&local_9);
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441cd8,&local_9);
  goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00441d13,&local_9);
  local_16 = local_9;
  CWE191_Integer_Underflow__char_fscanf_sub_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_sub_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00441d13,&local_9);
  local_16 = local_9;
  CWE191_Integer_Underflow__char_fscanf_sub_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_14_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441d18,&local_18);
  }
  if ((globalFive == 5) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441d18,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441d18,&local_18);
  }
  if ((globalFive == 5) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_fscanf_multiply_32_bad(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_00441d70,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (local_20 < 0) {
    local_28 = local_20 * 2;
    printLongLongLine(local_28);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffc;
  printLongLongLine(0xfffffffffffffffc);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_00441d70,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (local_20 < 0) {
    if (local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_28 = local_20 * 2;
      printLongLongLine(local_28);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_34_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418740) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  }
  return;
}


undefined8 CWE191_Integer_Underflow__char_min_sub_61b_badSource(void)

{
  return 0x80;
}


undefined8 CWE191_Integer_Underflow__char_min_sub_61b_goodG2BSource(void)

{
  return 0xfe;
}


undefined8 CWE191_Integer_Underflow__char_min_sub_61b_goodB2GSource(void)

{
  return 0x80;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_67b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_67b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_67b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_54b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_54b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_05_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441e48,&local_a);
  }
  if ((staticTrue != 0) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441e48,&local_a);
  }
  if (staticFalse == 0) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441e48,&local_a);
  }
  if ((staticTrue != 0) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_04_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441ea0,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418c8d) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441ea0,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441ea0,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418d73) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_31_bad(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00441ef8,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  if (local_28 < 0) {
    local_20 = local_28 * 2;
    printLongLongLine(local_20);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodB2G(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00441ef8,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  if (local_28 < 0) {
    if (local_28 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_20 = local_28 * 2;
      printLongLongLine(local_20);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418fe0) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419034) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_11_bad(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_10 * 2);
      }
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
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    if (local_10 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_10 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_34_bad(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00442008,&local_b);
  local_9 = local_b;
  if (local_b < 0) {
    local_a = local_b * 2;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00442008,&local_b);
  local_9 = local_b;
  if (local_b < 0) {
    if (local_b < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_b * 2;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_sub_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_sub_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_sub_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_sub_61b_goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_66b_badSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_17_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 - 1));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_67_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004420e0,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004420e0,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_67b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041994e) */

void CWE191_Integer_Underflow__char_min_multiply_15_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041997c) */
/* WARNING: Removing unreachable block (ram,0x00419998) */
/* WARNING: Removing unreachable block (ram,0x00419982) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004199bc) */
/* WARNING: Removing unreachable block (ram,0x004199d8) */
/* WARNING: Removing unreachable block (ram,0x004199c2) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_63b_badSink(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_multiply_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_63b_goodB2GSink(local_20);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419db4) */

void CWE191_Integer_Underflow__int64_t_min_multiply_18_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419df4) */
/* WARNING: Removing unreachable block (ram,0x00419e1d) */
/* WARNING: Removing unreachable block (ram,0x00419e04) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x7f);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419ef2) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419f41) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x80;
}


void CWE191_Integer_Underflow__char_min_multiply_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x80;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_badSink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_badGlobal != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G1Global == 0) {
    if (lParm1 < 0) {
      if (lParm1 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(lParm1 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G2Sink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G2Global != 0) && (lParm1 < 0)) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodG2BSink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodG2BGlobal != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_14_bad(void)

{
  if (globalFive == 5) {
    printLongLongLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a2e6) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a356) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_16_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004422a8,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004422a8,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_min_multiply_32_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  local_30 = 0;
  printLongLongLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffc;
  printLongLongLine(0xfffffffffffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a67d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined8 local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_38;
  local_18 = local_38;
  local_38[0] = 0;
  local_20 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  printLine("data value is too small to perform multiplication.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442320,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442320,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442320,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE191_Integer_Underflow__char_rand_sub_61b_badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


undefined8 CWE191_Integer_Underflow__char_rand_sub_61b_goodG2BSource(void)

{
  return 0xfe;
}


ulong CWE191_Integer_Underflow__char_rand_sub_61b_goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


/* WARNING: Removing unreachable block (ram,0x0041a959) */

void CWE191_Integer_Underflow__int64_t_min_multiply_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a9a4) */
/* WARNING: Removing unreachable block (ram,0x0041a9b7) */
/* WARNING: Removing unreachable block (ram,0x0041a9e0) */
/* WARNING: Removing unreachable block (ram,0x0041a9c7) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041aa25) */
/* WARNING: Removing unreachable block (ram,0x0041aa4e) */
/* WARNING: Removing unreachable block (ram,0x0041aa35) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041aa74) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_67b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_67b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_67b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54e_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54e_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54e_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticTrue != 0) {
    local_9 = -0x80;
  }
  if (staticFalse == 0) {
    if (local_9 < 0) {
      if (local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ad3f) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00442473,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00442473,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00442473,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodB2G2Sink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_17_bad(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -0x8000000000000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 < 0) {
      printLongLongLine(local_18 * 2);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -0x8000000000000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_18 * 2);
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 < 0) {
      printLongLongLine(local_18 * 2);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_41_bad(void)

{
  badSink(0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53c_goodB2GSink(uParm1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b21d) */

void CWE191_Integer_Underflow__int64_t_min_multiply_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b266) */
/* WARNING: Removing unreachable block (ram,0x0041b279) */
/* WARNING: Removing unreachable block (ram,0x0041b2a2) */
/* WARNING: Removing unreachable block (ram,0x0041b289) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b2e5) */
/* WARNING: Removing unreachable block (ram,0x0041b30e) */
/* WARNING: Removing unreachable block (ram,0x0041b2f5) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b333) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b41d) */

void CWE191_Integer_Underflow__int64_t_min_multiply_31_bad(void)

{
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b4b3) */
/* WARNING: Removing unreachable block (ram,0x0041b4dc) */
/* WARNING: Removing unreachable block (ram,0x0041b4c3) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_sub_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_sub_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_sub_61b_goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b5e5) */

void CWE191_Integer_Underflow__char_min_multiply_34_bad(void)

{
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b659) */
/* WARNING: Removing unreachable block (ram,0x0041b675) */
/* WARNING: Removing unreachable block (ram,0x0041b65f) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54e_goodB2GSink(uParm1);
  return;
}


void badSink(long lParm1)

{
  if ((badStatic != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_21_bad(void)

{
  badStatic = 1;
  badSink(0x8000000000000000);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 < 0) {
      if (lParm1 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(lParm1 * 2);
      }
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
  goodB2G1Sink(0x8000000000000000);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if ((goodB2G2Static != 0) && (lParm1 < 0)) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  if ((goodG2BStatic != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_66b_badSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_15_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b9e6) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ba21) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_07_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE191_Integer_Underflow__char_rand_multiply_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  if (cVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


ulong goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53d_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_rand_sub_45_badData + -1)
                  );
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_45_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_45_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_45_badData = (byte)iVar2;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_rand_sub_45_goodG2BData +
                                           -1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_45_goodG2BData = 0xfe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_sub_45_goodB2GData == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_rand_sub_45_goodB2GData
                                             + -1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_45_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_45_goodB2GData = (byte)iVar2;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_17_bad(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -0x80;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 < 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -0x80;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 < 0) {
      if (local_11 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 < 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((globalFive == 5) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (globalFive == 5) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((globalFive == 5) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_004427d0,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__char_fscanf_sub_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


ulong goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_004427d0,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_rand_multiply_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  ulong *local_28;
  ulong *local_20;
  
  local_20 = &local_48;
  local_28 = &local_48;
  local_48 = 0;
  local_30 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  *local_20 = local_30;
  local_38 = *local_28;
  if ((long)local_38 < 0) {
    local_40 = local_38 * 2;
    printLongLongLine(local_40);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffc;
  printLongLongLine(0xfffffffffffffffc);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  ulong *local_28;
  ulong *local_20;
  
  local_20 = &local_48;
  local_28 = &local_48;
  local_48 = 0;
  local_30 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  *local_20 = local_30;
  local_38 = *local_28;
  if ((long)local_38 < 0) {
    if ((long)local_38 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_40 = local_38 * 2;
      printLongLongLine(local_40);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_14_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00442840,&local_18);
  }
  if (globalFive == 5) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00442840,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00442840,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53d_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53d_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_53d_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_fscanf_sub_32_bad(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_004428c0,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  local_28 = local_20 + -1;
  printLongLongLine(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffd;
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_004428c0,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (local_20 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_28 = local_20 + -1;
    printLongLongLine(local_28);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_sub_61b_badSource(void)

{
  return 0x8000000000000000;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_sub_61b_goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_sub_61b_goodB2GSource(void)

{
  return 0x8000000000000000;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_67b_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_67b_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_67b_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x80;
  local_16 = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_min_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x80;
  local_16 = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_05_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticTrue != 0) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFalse == 0) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticTrue != 0) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_41_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  if ((badStatic != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_21_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004429e8,&local_10);
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 < 0) {
      if (lParm1 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(lParm1 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004429e8,&local_10);
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if ((goodB2G2Static != 0) && (lParm1 < 0)) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004429e8,&local_10);
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if ((goodG2BStatic != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_multiply_45_badData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_rand_multiply_45_badData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_45_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_45_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_45_badData = (byte)iVar2;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_multiply_45_goodG2BData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_rand_multiply_45_goodG2BData
                                             * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_45_goodG2BData = 0xfe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__char_rand_multiply_45_goodB2GData < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE191_Integer_Underflow__char_rand_multiply_45_goodB2GData
                                               * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_45_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_45_goodB2GData = (byte)iVar2;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_41_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442a78,&local_9);
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442a78,&local_9);
  goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d966) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dacd) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_15_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_04_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442bb8,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e168) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442bb8,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442bb8,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e23e) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_31_bad(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00442c08,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  local_20 = local_28 + -1;
  printLongLongLine(local_20);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodB2G(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00442c08,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  if (local_28 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_20 = local_28 + -1;
    printLongLongLine(local_20);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_67b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_67b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_67b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_min_sub_45_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_45_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_45_badData = 0x8000000000000000;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_min_sub_45_goodG2BData + -1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_45_goodG2BData = 0xfffffffffffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_sub_45_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_min_sub_45_goodB2GData + -1);
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_45_goodB2GData = 0x8000000000000000;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54e_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53d_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53d_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_53d_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_67b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_67b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_13_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00442ce0,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00442ce0,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00442ce0,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_22_badSink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_rand_multiply_22_badGlobal != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G1Global == 0) {
    if (lParm1 < 0) {
      if (lParm1 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(lParm1 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G2Sink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G2Global != 0) && (lParm1 < 0)) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodG2BSink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodG2BGlobal != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ecc1) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ed31) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x80;
}


void CWE191_Integer_Underflow__char_min_sub_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x80;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_22_badSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_sub_22_badGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G1Global == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G2Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G2Global != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodG2BSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_14_bad(void)

{
  if (globalFive == 5) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f0c6) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f130) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_min_sub_32_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  local_30 = 0x7fffffffffffffff;
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffd;
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f34b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined8 local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_38;
  local_18 = local_38;
  local_38[0] = 0;
  local_20 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_32_good(void)

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


void CWE191_Integer_Underflow__int64_t_min_multiply_08_bad(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_10 * 2);
      }
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
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    if (local_10 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_10 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_18_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442f08,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00442f08,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_34_bad(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00442f40,&local_b);
  local_9 = local_b;
  local_a = local_b + -1;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00442f40,&local_b);
  local_9 = local_b;
  if (local_b == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_b + -1;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54e_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54e_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_54e_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f9a7) */

void CWE191_Integer_Underflow__int64_t_min_multiply_02_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f9e5) */
/* WARNING: Removing unreachable block (ram,0x0041fa0e) */
/* WARNING: Removing unreachable block (ram,0x0041f9f5) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fa3f) */
/* WARNING: Removing unreachable block (ram,0x0041fa68) */
/* WARNING: Removing unreachable block (ram,0x0041fa4f) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_03_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00443048,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00443048,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00443048,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_11_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443080,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443080,&local_18);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
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
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443080,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_sub_61b_badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_sub_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_sub_61b_goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_badSink(uVar7);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G1Sink(uVar7);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodB2G2Sink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_rand_multiply_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004202d6) */

void CWE191_Integer_Underflow__int64_t_min_multiply_03_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420314) */
/* WARNING: Removing unreachable block (ram,0x0042033d) */
/* WARNING: Removing unreachable block (ram,0x00420324) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042036e) */
/* WARNING: Removing unreachable block (ram,0x00420397) */
/* WARNING: Removing unreachable block (ram,0x0042037e) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0x7f);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticTrue != 0) {
    local_9 = -0x80;
  }
  if (staticFalse == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004204ff) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_22_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443188,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443188,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443188,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodB2G2Sink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_41_bad(void)

{
  badSink(0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_65b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_65b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_65b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_67_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_67b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_67b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_22_badSink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_min_multiply_22_badGlobal != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G1Global == 0) {
    if (lParm1 < 0) {
      if (lParm1 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(lParm1 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G2Sink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G2Global != 0) && (lParm1 < 0)) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_22_goodG2BSink(long lParm1)

{
  if ((CWE191_Integer_Underflow__int64_t_min_multiply_22_goodG2BGlobal != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_04_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420b7e) */
/* WARNING: Removing unreachable block (ram,0x00420b9a) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420c00) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420c3f) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_31_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420db0) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_14_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004432f8,&local_a);
  }
  if ((globalFive == 5) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004432f8,&local_a);
  }
  if (globalFive == 5) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004432f8,&local_a);
  }
  if ((globalFive == 5) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_07_bad(void)

{
  if (staticFive == 5) {
    printLongLongLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004210a4) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421114) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54e_goodB2GSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_fscanf_multiply_32_bad(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_00443398,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (local_19 < 0) {
    local_1a = local_19 * 2;
    printHexCharLine((ulong)(uint)(int)local_1a);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1a = 0xfe;
  local_1b = 0xfc;
  printHexCharLine(0xfffffffc);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_00443398,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (local_19 < 0) {
    if (local_19 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1a = local_19 * 2;
      printHexCharLine((ulong)(uint)(int)local_1a);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_17_bad(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004433d8,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_20 + -1;
    printLongLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004433d8,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_20 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_20 + -1;
      printLongLongLine(local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(local_18 + -1);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_34_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004215c2) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__char_min_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_54e_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_15_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004218f3) */

void CWE191_Integer_Underflow__char_min_multiply_02_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042191f) */
/* WARNING: Removing unreachable block (ram,0x0042193b) */
/* WARNING: Removing unreachable block (ram,0x00421925) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042195d) */
/* WARNING: Removing unreachable block (ram,0x00421979) */
/* WARNING: Removing unreachable block (ram,0x00421963) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_67_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_67b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_67b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004434d8,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004434d8,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53d_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53d_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53d_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_12_bad(void)

{
  int iVar1;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_10 * 2);
      }
    }
  }
  else {
    if (local_10 < 0) {
      printLongLongLine(local_10 * 2);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421d97) */
/* WARNING: Removing unreachable block (ram,0x00421dc0) */
/* WARNING: Removing unreachable block (ram,0x00421d5b) */
/* WARNING: Removing unreachable block (ram,0x00421d84) */
/* WARNING: Removing unreachable block (ram,0x00421d6b) */
/* WARNING: Removing unreachable block (ram,0x00421da7) */

void goodB2G(void)

{
  globalReturnsTrueOrFalse();
  globalReturnsTrueOrFalse();
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  else {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE191_Integer_Underflow__char_rand_sub_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


ulong goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_09_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004435b8,&local_a);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a < 0)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004435b8,&local_a);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a < 0) {
      if (local_a < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004435b8,&local_a);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a < 0)) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_13_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00443608,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00443608,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00443608,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_22_badSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_sub_22_badGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G1Global == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G2Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G2Global != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_22_goodG2BSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_sub_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_06_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004436a4,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422584) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004436a4,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004436a4,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422647) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_04_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00443700,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042277f) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00443700,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00443700,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042283f) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_31_bad(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_00443750,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (local_c < 0) {
    local_b = local_c * 2;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_00443750,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (local_c < 0) {
    if (local_c < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_b = local_c * 2;
      printHexCharLine((ulong)(uint)(int)local_b);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_31_good(void)

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


void CWE191_Integer_Underflow__int64_t_fscanf_sub_08_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443790,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443790,&local_18);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
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
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443790,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_09_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004437e0,&local_18);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004437e0,&local_18);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004437e0,&local_18);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x80;
  local_16 = 0x80;
  CWE191_Integer_Underflow__char_min_sub_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_min_sub_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x80;
  local_16 = 0x80;
  CWE191_Integer_Underflow__char_min_sub_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  if ((badStatic != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badStatic = 1;
  badSink(uVar7);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 < 0) {
      if (lParm1 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(lParm1 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink(uVar7);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if ((goodB2G2Static != 0) && (lParm1 < 0)) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink(uVar7);
  return;
}


void goodG2BSink(long lParm1)

{
  if ((goodG2BStatic != 0) && (lParm1 < 0)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_05_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFalse == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_67_bad(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00443908,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_67b_badSink((ulong)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_67b_goodG2BSink(0xfe);
  return;
}


void goodB2G(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00443908,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_67b_goodB2GSink((ulong)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_41_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalTrue != 0) {
    local_10 = -0x8000000000000000;
  }
  if (globalFalse == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_10 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423b4f) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_21_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443990,&local_10);
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443990,&local_10);
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if (goodB2G2Static != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443990,&local_10);
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_22_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_min_sub_22_badSink(0x8000000000000000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G1Sink(0x8000000000000000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_min_sub_22_goodB2G2Sink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_min_sub_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_22_badSink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_fscanf_multiply_22_badGlobal != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G1Global == 0) {
    if (cParm1 < 0) {
      if (cParm1 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G2Sink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G2Global != 0) && (cParm1 < 0)) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_22_goodG2BSink(char cParm1)

{
  if ((CWE191_Integer_Underflow__char_fscanf_multiply_22_goodG2BGlobal != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_34_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424636) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042468a) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_34_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_min_multiply_32_bad(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x80;
  local_1a = 0x80;
  local_1b = 0;
  printHexCharLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1a = 0xfe;
  local_1b = 0xfc;
  printHexCharLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042498d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined local_1c [2];
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_1c;
  local_18 = local_1c;
  local_1c[0] = 0x20;
  local_19 = 0x80;
  local_1a = 0x80;
  printLine("data value is too small to perform multiplication.");
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_sub_54e_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_54c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_54d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_09_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443b70,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443b70,&local_18);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443b70,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424d3b) */

void CWE191_Integer_Underflow__int64_t_min_multiply_01_bad(void)

{
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424db1) */
/* WARNING: Removing unreachable block (ram,0x00424dda) */
/* WARNING: Removing unreachable block (ram,0x00424dc1) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53d_badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53d_goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_53d_goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalTrue != 0) {
    local_9 = -0x80;
  }
  if (globalFalse == 0) {
    if (local_9 < 0) {
      if (local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424f6e) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_12_bad(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00443cb0,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_20 + -1;
      printLongLongLine(local_18);
    }
  }
  else {
    local_10 = local_20 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00443cb0,&local_20);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00443cb0,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_20 + -1;
      printLongLongLine(local_18);
    }
  }
  else {
    if (local_20 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_20 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  else {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004252f4) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042535e) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_12_bad(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_b = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00443d30,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_b + -1;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    local_9 = local_b + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00443d30,&local_b);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00443d30,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_b + -1;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    if (local_b == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_b + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(0xfffffffd);
  }
  else {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_multiply_54c_goodB2GSink(uParm1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425681) */

void CWE191_Integer_Underflow__char_min_multiply_31_bad(void)

{
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004256f5) */
/* WARNING: Removing unreachable block (ram,0x00425711) */
/* WARNING: Removing unreachable block (ram,0x004256fb) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_66_bad(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE191_Integer_Underflow__char_rand_sub_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_rand_sub_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE191_Integer_Underflow__char_rand_sub_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443dd0,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443dd0,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
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
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = -0x8000000000000000;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_10 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425e56) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00443e73,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_sub_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00443e73,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54d_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54d_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_54d_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_54e_goodB2GSink((ulong)(uint)(int)cParm1);
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


void CWE191_Integer_Underflow__char_rand_multiply_08_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
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
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_11_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443ec8,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443ec8,&local_18);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
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
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00443ec8,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_18 + -1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_02_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00443f18,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00443f18,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00443f18,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_67_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_67b_badSink(0x80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_67b_goodG2BSink(0xfe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_multiply_67b_goodB2GSink(0x80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_21_bad(void)

{
  badStatic = 1;
  badSink(0x8000000000000000);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
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
  goodB2G1Sink(0x8000000000000000);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if (goodB2G2Static != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443f98,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443f98,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_53b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_02_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_10_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFalse == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalTrue != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = -0x80;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 < 0) {
      if (local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426e56) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_rand_multiply_32_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  if ((char)local_1a < 0) {
    local_1b = local_1a * 2;
    printHexCharLine((ulong)(uint)(int)local_1b);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1a = 0xfe;
  local_1b = 0xfc;
  printHexCharLine(0xfffffffc);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  if ((char)local_1a < 0) {
    if ((char)local_1a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1b = local_1a * 2;
      printHexCharLine((ulong)(uint)(int)local_1b);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_12_bad(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_004440d0,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 < 0) {
      if (local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_20 * 2;
        printLongLongLine(local_18);
      }
    }
  }
  else {
    if (local_20 < 0) {
      local_10 = local_20 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_004440d0,&local_20);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_004440d0,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 < 0) {
      if (local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_20 * 2;
        printLongLongLine(local_18);
      }
    }
  }
  else {
    if (local_20 < 0) {
      if (local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_20 * 2;
        printLongLongLine(local_10);
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  else {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_67_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_67b_badSink((ulong)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_67b_goodG2BSink(0xfe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_67b_goodB2GSink((ulong)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_01_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_52b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_52b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_52b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_11_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
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
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_67b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_67b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_67b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52c_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52c_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52c_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_sub_45_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_45_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00444228,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_sub_45_goodG2BData + -1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_sub_45_goodG2BData = 0xfffffffffffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_sub_45_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_fscanf_sub_45_goodB2GData + -1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00444228,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_45_goodB2GData = local_10;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_68_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_68_badData = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_68_goodG2BData = 0xfe;
  CWE191_Integer_Underflow__char_min_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_multiply_68_goodB2GData = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_12_bad(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_b = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00444260,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b < 0) {
      if (local_b < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_b * 2;
        printHexCharLine((ulong)(uint)(int)local_a);
      }
    }
  }
  else {
    if (local_b < 0) {
      local_9 = local_b * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00444260,&local_b);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00444260,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b < 0) {
      if (local_b < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_b * 2;
        printHexCharLine((ulong)(uint)(int)local_a);
      }
    }
  }
  else {
    if (local_b < 0) {
      if (local_b < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_9 = local_b * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(0xfffffffc);
  }
  else {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_66_bad(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE191_Integer_Underflow__char_rand_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_rand_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE191_Integer_Underflow__char_rand_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_64b_badSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_64b_goodG2BSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_64b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_51b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_51b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_51b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_09_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_54b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_sub_54b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_51_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_51b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_51b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_51b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_05_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444350,&local_a);
  }
  if (staticTrue != 0) {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444350,&local_a);
  }
  if (staticFalse == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444350,&local_a);
  }
  if (staticTrue != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_9 = local_a + -1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_53b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_multiply_53b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_53_good(void)

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


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_08_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444398,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444398,&local_18);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
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
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444398,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004443eb,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_multiply_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004443eb,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004443ee,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_52b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004443ee,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_52b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_multiply_68_badData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_rand_multiply_68_badData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_multiply_68_goodG2BData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_rand_multiply_68_goodG2BData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__char_rand_multiply_68_goodB2GData < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE191_Integer_Underflow__char_rand_multiply_68_goodB2GData
                                               * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_51b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_51b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_51b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_06_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428d47) */
/* WARNING: Removing unreachable block (ram,0x00428d63) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428dcb) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428e0b) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_54b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004444e8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004444e8,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_64b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52c_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52c_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52c_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_52b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_sub_52b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_multiply_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_51_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00444523,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_51b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00444523,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_51b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_68_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_68_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_68_badData = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_68_goodG2BData = 0xfe;
  CWE191_Integer_Underflow__char_rand_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_68_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_multiply_68_goodB2GData = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_68_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00444558,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_68_badData = local_9;
  CWE191_Integer_Underflow__char_fscanf_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_68_goodG2BData = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00444558,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_68_goodB2GData = local_9;
  CWE191_Integer_Underflow__char_fscanf_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_02_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00444560,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00444560,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00444560,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_sub_65b_badSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_sub_65b_goodB2GSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_41_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004445a0,&local_10);
  badSink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004445a0,&local_10);
  goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_multiply_45_badData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_fscanf_multiply_45_badData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_45_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004445d8,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_45_badData = local_9;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_multiply_45_goodG2BData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_fscanf_multiply_45_goodG2BData
                                             * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_45_goodG2BData = 0xfe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__char_fscanf_multiply_45_goodB2GData < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE191_Integer_Underflow__char_fscanf_multiply_45_goodB2GData
                                               * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004445d8,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_45_goodB2GData = local_9;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_53b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_53b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_63b_badSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_63b_goodG2BSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_63b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0044464b,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_53b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0044464b,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_53b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_52b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_multiply_52b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_51b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_51b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_51b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_44_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00444688,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00444688,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429e12) */

void CWE191_Integer_Underflow__char_min_multiply_16_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429e40) */
/* WARNING: Removing unreachable block (ram,0x00429e5c) */
/* WARNING: Removing unreachable block (ram,0x00429e46) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_17_bad(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00444728,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_20 < 0) {
      local_18 = local_20 * 2;
      printLongLongLine(local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00444728,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_20 < 0) {
      if (local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_20 * 2;
        printLongLongLine(local_18);
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 < 0) {
      printLongLongLine(local_18 * 2);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_44_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00444768,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00444768,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_65b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_65b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_65b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_10_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004447e0,&local_18);
  }
  if ((globalTrue != 0) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004447e0,&local_18);
  }
  if (globalFalse == 0) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004447e0,&local_18);
  }
  if ((globalTrue != 0) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_sub_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_64b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_64b_badSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_64b_goodG2BSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_multiply_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_multiply_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_63b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_53b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_51_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_51b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_multiply_51b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


undefined8 CWE191_Integer_Underflow__int64_t_fscanf_multiply_61b_badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_004448d0,&local_10);
  return local_10;
}


undefined8 CWE191_Integer_Underflow__int64_t_fscanf_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


undefined8 CWE191_Integer_Underflow__int64_t_fscanf_multiply_61b_goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_004448d0,&local_10);
  return local_10;
}


void CWE191_Integer_Underflow__char_min_sub_68_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_68_badData = 0x80;
  CWE191_Integer_Underflow__char_min_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_68_goodG2BData = 0xfe;
  CWE191_Integer_Underflow__char_min_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_sub_68_goodB2GData = 0x80;
  CWE191_Integer_Underflow__char_min_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_65b_badSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_rand_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_65b_goodB2GSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_multiply_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_multiply_64b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_63b_badSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_63b_goodG2BSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_63b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_01_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00444910,&local_a);
  if (local_a < 0) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00444910,&local_a);
  if (local_a < 0) {
    if (local_a < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_52b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_52b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_51b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_51b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_51b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004449b3,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_52b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004449b3,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_52b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_rand_sub_68_badData + -1)
                  );
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_rand_sub_68_goodG2BData +
                                           -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_sub_68_goodB2GData == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_rand_sub_68_goodB2GData
                                             + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_multiply_61b_badSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_multiply_61b_goodG2BSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_multiply_61b_goodB2GSource(0);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_16_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_22_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_min_multiply_22_badSink(0x8000000000000000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G1Sink(0x8000000000000000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_min_multiply_22_goodB2G2Sink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_min_multiply_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_16_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00444a88,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00444a88,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_22_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00444ac0,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_fscanf_multiply_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00444ac0,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00444ac0,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_fscanf_multiply_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_fscanf_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_07_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00444ac8,&local_18);
  }
  if ((staticFive == 5) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00444ac8,&local_18);
  }
  if (staticFive == 5) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00444ac8,&local_18);
  }
  if ((staticFive == 5) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b8ce) */

void CWE191_Integer_Underflow__char_min_multiply_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b908) */
/* WARNING: Removing unreachable block (ram,0x0042b91a) */
/* WARNING: Removing unreachable block (ram,0x0042b936) */
/* WARNING: Removing unreachable block (ram,0x0042b920) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b96c) */
/* WARNING: Removing unreachable block (ram,0x0042b988) */
/* WARNING: Removing unreachable block (ram,0x0042b972) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b9aa) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_03_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042bb02) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042bb56) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_64b_badSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_64b_goodG2BSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_51_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_51b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_multiply_51b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00444bdb,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_sub_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00444bdb,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_sub_63b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_52b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_min_sub_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_51_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00444c10,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_51b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00444c10,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_51b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_68_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_68_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_68_badData = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_68_goodG2BData = 0xfe;
  CWE191_Integer_Underflow__char_rand_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_68_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_sub_68_goodB2GData = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_13_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_63_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_sub_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_rand_sub_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_sub_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_18_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c4bb) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_17_bad(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -0x8000000000000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(local_18 + -1);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -0x8000000000000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_18 + -1);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(local_18 + -1);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_fscanf_sub_45_badData +
                                           -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_45_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00444cf8,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_45_badData = local_9;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_fscanf_sub_45_goodG2BData
                                           + -1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_sub_45_goodG2BData = 0xfe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_fscanf_sub_45_goodB2GData == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_fscanf_sub_45_goodB2GData
                                             + -1));
  }
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00444cf8,&local_9);
  CWE191_Integer_Underflow__char_fscanf_sub_45_goodB2GData = local_9;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_06_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c874) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c943) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_53b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_53b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    printLongLongLine(uVar7 * 2);
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if ((long)uVar7 < 0) {
    if ((long)uVar7 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(uVar7 * 2);
    }
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_min_multiply_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_multiply_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_multiply_61b_badSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_multiply_61b_goodG2BSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_multiply_61b_goodB2GSource(0);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_68b_badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_min_sub_68_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_68b_goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_min_sub_68_goodG2BData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_min_sub_68_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_min_sub_68_goodB2GData + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_65b_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_65b_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_65b_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_28;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if ((long)local_28 < 0) {
      printLongLongLine(local_28 * 2);
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_28;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if ((long)local_28 < 0) {
      if ((long)local_28 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_28 * 2);
      }
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 < 0) {
      printLongLongLine(local_18 * 2);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_16_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d3e5) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink(uVar7,uParm2,uVar7);
  return;
}


void goodG2BSink(long lParm1)

{
  if (lParm1 < 0) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 < 0) {
    if (lParm1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lParm1 * 2);
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink(uVar7,uParm2,uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_54c_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__char_min_multiply_45_badData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_multiply_45_badData
                                             * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_45_bad(void)

{
  CWE191_Integer_Underflow__char_min_multiply_45_badData = 0x80;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__char_min_multiply_45_goodG2BData < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_min_multiply_45_goodG2BData
                                             * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_multiply_45_goodG2BData = 0xfe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_min_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__char_min_multiply_45_goodB2GData < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE191_Integer_Underflow__char_min_multiply_45_goodB2GData
                                               * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_multiply_45_goodB2GData = 0x80;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_64b_badSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_64b_goodG2BSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_14_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalFive == 5) && ((char)local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if ((char)local_9 < 0) {
      if ((char)local_9 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalFive == 5) && ((char)local_9 < 0)) {
    if ((char)local_9 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_9 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_sub_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_sub_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_63b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE191_Integer_Underflow__int64_t_rand_multiply_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  return uVar7;
}


undefined8 CWE191_Integer_Underflow__int64_t_rand_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


ulong CWE191_Integer_Underflow__int64_t_rand_multiply_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  return uVar7;
}


/* WARNING: Removing unreachable block (ram,0x0042de59) */

void CWE191_Integer_Underflow__char_min_multiply_18_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042de87) */
/* WARNING: Removing unreachable block (ram,0x0042dea3) */
/* WARNING: Removing unreachable block (ram,0x0042de8d) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_51_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_51b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_sub_51b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_63b_badSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_63b_goodG2BSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_sub_68_badData + -1))
  ;
  return;
}


void CWE191_Integer_Underflow__char_min_sub_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_sub_68_goodG2BData +
                                           -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_min_sub_68_goodB2GData == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_sub_68_goodB2GData
                                             + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_03_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if ((char)bVar1 < 0) {
    if ((char)bVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_53c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_fscanf_sub_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445153,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445153,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_multiply_63b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_sub_45_badData + -1))
  ;
  return;
}


void CWE191_Integer_Underflow__char_min_sub_45_bad(void)

{
  CWE191_Integer_Underflow__char_min_sub_45_badData = 0x80;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_sub_45_goodG2BData +
                                           -1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_sub_45_goodG2BData = 0xfe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_min_sub_45_goodB2GData == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_sub_45_goodB2GData
                                             + -1));
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_sub_45_goodB2GData = 0x80;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = -0x8000000000000000;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e571) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_64_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_multiply_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_rand_multiply_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_multiply_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_06_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e78a) */
/* WARNING: Removing unreachable block (ram,0x0042e79c) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e7e9) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e822) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_52b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_52b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_multiply_61b_badSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_multiply_61b_goodG2BSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_multiply_61b_goodB2GSource(0);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00445288,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_multiply_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00445288,&local_9);
  CWE191_Integer_Underflow__char_fscanf_multiply_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_sub_61b_badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_sub_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_sub_61b_goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_16_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_13_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004452f0,&local_18);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004452f0,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004452f0,&local_18);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_06_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0044534c,&local_18);
  local_10 = local_18 + -1;
  printLongLongLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042f071) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0044534c,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0044534c,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_18 + -1;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042f14a) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_15_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00445398,&local_18);
  if (local_18 < 0) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00445398,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00445398,&local_18);
  if (local_18 < 0) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffc);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((staticFive == 5) && ((long)local_20 < 0)) {
    printLongLongLine(local_20 * 2);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticFive == 5) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if ((staticFive == 5) && ((long)local_20 < 0)) {
    if ((long)local_20 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if ((badStatic != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_21_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 < 0) {
      if (cParm1 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if ((goodB2G2Static != 0) && (cParm1 < 0)) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if ((goodG2BStatic != 0) && (cParm1 < 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_rand_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_004454a8,&local_10);
  return local_10;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  if (lVar1 < 0) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


undefined8 goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_004454a8,&local_10);
  return local_10;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_sub_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x7f);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = -0x80;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042fd4a) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0xfffffffffffffffe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    if ((long)local_20 < 0) {
      printLongLongLine(local_20 * 2);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  else {
    if ((long)local_20 < 0) {
      if ((long)local_20 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printLongLongLine(local_20 * 2);
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  else {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54e_badSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54e_goodG2BSink(char cParm1)

{
  if (cParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_54e_goodB2GSink(char cParm1)

{
  if (cParm1 < 0) {
    if (cParm1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_sub_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_sub_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_51_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_51b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_sub_51b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_68_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_68_badData = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_68_goodG2BData = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_sub_68_goodB2GData = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_63b_badSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_63b_goodG2BSink(char *pcParm1)

{
  if (*pcParm1 < 0) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_multiply_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (cVar1 < 0) {
    if (cVar1 < -0x3f) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_64b_badSink(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_multiply_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_multiply_64b_goodB2GSink(local_20);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_06_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0044560c,&local_a);
  local_9 = local_a + -1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043077e) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0044560c,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0044560c,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_9 = local_a + -1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430833) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_05_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00445658,&local_18);
  }
  if ((staticTrue != 0) && (local_18 < 0)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00445658,&local_18);
  }
  if (staticFalse == 0) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffffffffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00445658,&local_18);
  }
  if ((staticTrue != 0) && (local_18 < 0)) {
    if (local_18 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_10 < 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_17_bad(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004456b0,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 < 0) {
      local_11 = local_12 * 2;
      printHexCharLine((ulong)(uint)(int)local_11);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004456b0,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 < 0) {
      if (local_12 < -0x3f) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_11 = local_12 * 2;
        printHexCharLine((ulong)(uint)(int)local_11);
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 < 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_65_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__char_fscanf_sub_65b_badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_004456eb,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_fscanf_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__char_fscanf_sub_65b_goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_004456eb,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_06_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430de9) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430eae) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_63b_badSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_63b_goodG2BSink(long *plParm1)

{
  if (*plParm1 < 0) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_multiply_63b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
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
  printf((char *)(double)fParm1,&DAT_00445791);
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
  printf(pcParm1,&DAT_004457ae);
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
    __isoc99_sscanf(lVar1,&DAT_004457bc,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_004457c4,&local_14);
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

