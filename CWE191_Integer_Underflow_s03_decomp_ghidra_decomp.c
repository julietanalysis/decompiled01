
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00662ff8;
  if (PTR___gmon_start___00662ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400950(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00663010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00663018)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_00663020)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00663028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00663030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00663038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00663040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00663048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00663050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00663058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00663060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00663068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00663070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00663078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00663080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00663088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00663090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00663098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006630a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006630a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006630b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006630b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00662ff8)();
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
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_54_good();");
  CWE191_Integer_Underflow__int_rand_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_15_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_31_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_45_good();");
  CWE191_Integer_Underflow__int_rand_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_22_good();");
  CWE191_Integer_Underflow__short_rand_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_17_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_10_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_44_good();");
  CWE191_Integer_Underflow__short_min_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_14_good();");
  CWE191_Integer_Underflow__short_min_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_11_good();");
  CWE191_Integer_Underflow__short_min_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_42_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_05_good();");
  CWE191_Integer_Underflow__short_rand_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_66_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_53_good();");
  CWE191_Integer_Underflow__short_min_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_34_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_02_good();");
  CWE191_Integer_Underflow__short_min_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_41_good();");
  CWE191_Integer_Underflow__short_min_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_31_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_03_good();");
  CWE191_Integer_Underflow__short_min_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_45_good();");
  CWE191_Integer_Underflow__short_rand_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_03_good();");
  CWE191_Integer_Underflow__int_rand_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_08_good();");
  CWE191_Integer_Underflow__short_min_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_08_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_01_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_67_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_16_good();");
  CWE191_Integer_Underflow__int_rand_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_32_good();");
  CWE191_Integer_Underflow__int_rand_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_03_good();");
  CWE191_Integer_Underflow__short_rand_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_44_good();");
  CWE191_Integer_Underflow__short_rand_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_61_good();");
  CWE191_Integer_Underflow__int_rand_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_68_good();");
  CWE191_Integer_Underflow__short_rand_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_53_good();");
  CWE191_Integer_Underflow__short_min_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_06_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_18_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_53_good();");
  CWE191_Integer_Underflow__short_rand_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_42_good();");
  CWE191_Integer_Underflow__int_rand_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_67_good();");
  CWE191_Integer_Underflow__short_min_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_12_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_17_good();");
  CWE191_Integer_Underflow__short_rand_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_21_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_44_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_65_good();");
  CWE191_Integer_Underflow__short_min_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_05_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_68_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_41_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_22_good();");
  CWE191_Integer_Underflow__int_rand_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_45_good();");
  CWE191_Integer_Underflow__int_rand_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_09_good();");
  CWE191_Integer_Underflow__short_rand_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_10_good();");
  CWE191_Integer_Underflow__short_min_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_07_good();");
  CWE191_Integer_Underflow__int_rand_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_18_good();");
  CWE191_Integer_Underflow__short_min_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_17_good();");
  CWE191_Integer_Underflow__int_rand_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_21_good();");
  CWE191_Integer_Underflow__short_rand_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_02_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_12_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_12_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_31_good();");
  CWE191_Integer_Underflow__short_min_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_21_good();");
  CWE191_Integer_Underflow__short_min_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_53_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_15_good();");
  CWE191_Integer_Underflow__int_rand_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_12_good();");
  CWE191_Integer_Underflow__short_rand_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_17_good();");
  CWE191_Integer_Underflow__short_min_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_06_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_01_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_22_good();");
  CWE191_Integer_Underflow__short_min_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_04_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_17_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_10_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_21_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_03_good();");
  CWE191_Integer_Underflow__int_rand_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_03_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_15_good();");
  CWE191_Integer_Underflow__short_rand_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_22_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_09_good();");
  CWE191_Integer_Underflow__short_min_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_11_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_66_good();");
  CWE191_Integer_Underflow__short_min_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_09_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_67_good();");
  CWE191_Integer_Underflow__short_rand_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_51_good();");
  CWE191_Integer_Underflow__short_rand_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_04_good();");
  CWE191_Integer_Underflow__short_min_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_61_good();");
  CWE191_Integer_Underflow__short_rand_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_54_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_10_good();");
  CWE191_Integer_Underflow__short_rand_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_16_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_52_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_12_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_54_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_42_good();");
  CWE191_Integer_Underflow__int_rand_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_32_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_18_good();");
  CWE191_Integer_Underflow__short_rand_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_14_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_07_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_05_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_45_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_02_good();");
  CWE191_Integer_Underflow__short_rand_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_12_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_44_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_13_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_52_good();");
  CWE191_Integer_Underflow__short_rand_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_09_good();");
  CWE191_Integer_Underflow__int_rand_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_61_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_32_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_61_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_64_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_13_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_04_good();");
  CWE191_Integer_Underflow__short_rand_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_16_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_10_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_15_good();");
  CWE191_Integer_Underflow__short_min_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_65_good();");
  CWE191_Integer_Underflow__short_rand_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_34_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_12_good();");
  CWE191_Integer_Underflow__short_min_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_17_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_45_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_21_good();");
  CWE191_Integer_Underflow__int_rand_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_64_good();");
  CWE191_Integer_Underflow__short_min_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_61_good();");
  CWE191_Integer_Underflow__short_rand_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_03_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_08_good();");
  CWE191_Integer_Underflow__int_rand_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_09_good();");
  CWE191_Integer_Underflow__short_rand_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_02_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_45_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_08_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_02_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_10_good();");
  CWE191_Integer_Underflow__short_rand_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_68_good();");
  CWE191_Integer_Underflow__short_min_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_51_good();");
  CWE191_Integer_Underflow__short_min_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_10_good();");
  CWE191_Integer_Underflow__int_rand_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_01_good();");
  CWE191_Integer_Underflow__short_min_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_22_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_65_good();");
  CWE191_Integer_Underflow__int_rand_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_21_good();");
  CWE191_Integer_Underflow__short_min_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_01_good();");
  CWE191_Integer_Underflow__short_rand_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_13_good();");
  CWE191_Integer_Underflow__int_rand_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_05_good();");
  CWE191_Integer_Underflow__int_rand_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_41_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_63_good();");
  CWE191_Integer_Underflow__int_rand_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_63_good();");
  CWE191_Integer_Underflow__short_min_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_17_good();");
  CWE191_Integer_Underflow__short_rand_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_64_good();");
  CWE191_Integer_Underflow__int_rand_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_45_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_13_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_04_good();");
  CWE191_Integer_Underflow__short_min_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_32_good();");
  CWE191_Integer_Underflow__short_min_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_18_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_12_good();");
  CWE191_Integer_Underflow__int_rand_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_15_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_11_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_12_good();");
  CWE191_Integer_Underflow__short_min_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_54_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_41_good();");
  CWE191_Integer_Underflow__short_min_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_68_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_22_good();");
  CWE191_Integer_Underflow__int_rand_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_66_good();");
  CWE191_Integer_Underflow__short_min_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_53_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_02_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_51_good();");
  CWE191_Integer_Underflow__short_min_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_07_good();");
  CWE191_Integer_Underflow__short_rand_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_09_good();");
  CWE191_Integer_Underflow__short_min_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_09_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_66_good();");
  CWE191_Integer_Underflow__short_rand_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_66_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_64_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_12_good();");
  CWE191_Integer_Underflow__int_rand_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_63_good();");
  CWE191_Integer_Underflow__short_rand_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_21_good();");
  CWE191_Integer_Underflow__int_rand_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_06_good();");
  CWE191_Integer_Underflow__int_rand_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_03_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_68_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_07_good();");
  CWE191_Integer_Underflow__short_min_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_07_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_07_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_32_good();");
  CWE191_Integer_Underflow__short_rand_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_65_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_52_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_17_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_42_good();");
  CWE191_Integer_Underflow__short_rand_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_21_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_22_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_08_good();");
  CWE191_Integer_Underflow__int_rand_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_21_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_18_good();");
  CWE191_Integer_Underflow__short_min_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_42_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_34_good();");
  CWE191_Integer_Underflow__int_rand_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_16_good();");
  CWE191_Integer_Underflow__int_rand_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_63_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_16_good();");
  CWE191_Integer_Underflow__short_rand_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_11_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_10_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_05_good();");
  CWE191_Integer_Underflow__short_min_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_52_good();");
  CWE191_Integer_Underflow__int_rand_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_41_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_10_good();");
  CWE191_Integer_Underflow__int_rand_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_07_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_68_good();");
  CWE191_Integer_Underflow__short_min_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_41_good();");
  CWE191_Integer_Underflow__int_rand_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_64_good();");
  CWE191_Integer_Underflow__short_min_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_06_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_68_good();");
  CWE191_Integer_Underflow__int_rand_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_61_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_53_good();");
  CWE191_Integer_Underflow__short_rand_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_11_good();");
  CWE191_Integer_Underflow__short_rand_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_42_good();");
  CWE191_Integer_Underflow__short_rand_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_13_good();");
  CWE191_Integer_Underflow__short_min_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_65_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_32_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_61_good();");
  CWE191_Integer_Underflow__short_min_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_64_good();");
  CWE191_Integer_Underflow__short_rand_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_06_good();");
  CWE191_Integer_Underflow__short_min_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_05_good();");
  CWE191_Integer_Underflow__short_min_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_54_good();");
  CWE191_Integer_Underflow__short_min_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_13_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_05_good();");
  CWE191_Integer_Underflow__short_rand_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_09_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_51_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_18_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_63_good();");
  CWE191_Integer_Underflow__int_rand_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_54_good();");
  CWE191_Integer_Underflow__short_rand_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_68_good();");
  CWE191_Integer_Underflow__short_rand_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_13_good();");
  CWE191_Integer_Underflow__int_rand_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_16_good();");
  CWE191_Integer_Underflow__short_rand_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_04_good();");
  CWE191_Integer_Underflow__int_rand_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_01_good();");
  CWE191_Integer_Underflow__short_min_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_31_good();");
  CWE191_Integer_Underflow__short_min_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_14_good();");
  CWE191_Integer_Underflow__int_rand_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_64_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_14_good();");
  CWE191_Integer_Underflow__int_rand_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_21_good();");
  CWE191_Integer_Underflow__short_rand_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_14_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_13_good();");
  CWE191_Integer_Underflow__short_min_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_17_good();");
  CWE191_Integer_Underflow__short_min_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_54_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_68_good();");
  CWE191_Integer_Underflow__int_rand_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_11_good();");
  CWE191_Integer_Underflow__int_rand_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_03_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_22_good();");
  CWE191_Integer_Underflow__short_rand_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_44_good();");
  CWE191_Integer_Underflow__int_rand_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_22_good();");
  CWE191_Integer_Underflow__short_min_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_16_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_44_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_44_good();");
  CWE191_Integer_Underflow__short_rand_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_34_good();");
  CWE191_Integer_Underflow__short_min_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_02_good();");
  CWE191_Integer_Underflow__short_min_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_13_good();");
  CWE191_Integer_Underflow__short_rand_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_01_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_02_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_04_good();");
  CWE191_Integer_Underflow__int_rand_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_42_good();");
  CWE191_Integer_Underflow__short_min_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_41_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_51_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_08_good();");
  CWE191_Integer_Underflow__short_rand_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_52_good();");
  CWE191_Integer_Underflow__int_rand_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_41_good();");
  CWE191_Integer_Underflow__short_rand_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_06_good();");
  CWE191_Integer_Underflow__short_rand_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_31_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_66_good();");
  CWE191_Integer_Underflow__short_rand_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_22_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_09_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_32_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_07_good();");
  CWE191_Integer_Underflow__short_min_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_63_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_08_good();");
  CWE191_Integer_Underflow__short_rand_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_42_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_42_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_65_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_08_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_65_good();");
  CWE191_Integer_Underflow__short_min_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_16_good();");
  CWE191_Integer_Underflow__short_min_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_12_good();");
  CWE191_Integer_Underflow__short_rand_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_45_good();");
  CWE191_Integer_Underflow__short_min_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_67_good();");
  CWE191_Integer_Underflow__short_rand_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_03_good();");
  CWE191_Integer_Underflow__short_rand_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_65_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_07_good();");
  CWE191_Integer_Underflow__int_rand_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_64_good();");
  CWE191_Integer_Underflow__int_rand_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_14_good();");
  CWE191_Integer_Underflow__short_rand_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_05_good();");
  CWE191_Integer_Underflow__int_rand_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_31_good();");
  CWE191_Integer_Underflow__short_rand_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_07_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_44_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_34_good();");
  CWE191_Integer_Underflow__short_rand_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_63_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_34_good();");
  CWE191_Integer_Underflow__short_min_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_18_good();");
  CWE191_Integer_Underflow__short_rand_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_32_good();");
  CWE191_Integer_Underflow__short_min_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_41_good();");
  CWE191_Integer_Underflow__int_rand_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_31_good();");
  CWE191_Integer_Underflow__int_rand_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_54_good();");
  CWE191_Integer_Underflow__int_rand_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_32_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_10_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_61_good();");
  CWE191_Integer_Underflow__int_rand_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_16_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_15_good();");
  CWE191_Integer_Underflow__short_rand_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_63_good();");
  CWE191_Integer_Underflow__short_rand_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_09_good();");
  CWE191_Integer_Underflow__int_rand_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_31_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_11_good();");
  CWE191_Integer_Underflow__short_min_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_05_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_51_good();");
  CWE191_Integer_Underflow__short_rand_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_14_good();");
  CWE191_Integer_Underflow__short_rand_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_04_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_08_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_51_good();");
  CWE191_Integer_Underflow__int_rand_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_65_good();");
  CWE191_Integer_Underflow__short_rand_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_13_good();");
  CWE191_Integer_Underflow__short_rand_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_67_good();");
  CWE191_Integer_Underflow__int_rand_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_52_good();");
  CWE191_Integer_Underflow__short_min_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_51_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_42_good();");
  CWE191_Integer_Underflow__short_min_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_05_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_03_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_15_good();");
  CWE191_Integer_Underflow__short_min_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_66_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_14_good();");
  CWE191_Integer_Underflow__short_min_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_66_good();");
  CWE191_Integer_Underflow__int_rand_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_51_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_13_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_11_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_17_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_66_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_31_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_02_good();");
  CWE191_Integer_Underflow__int_rand_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_18_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_14_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_15_good();");
  CWE191_Integer_Underflow__int_rand_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_61_good();");
  CWE191_Integer_Underflow__short_min_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_67_good();");
  CWE191_Integer_Underflow__int_rand_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_01_good();");
  CWE191_Integer_Underflow__short_rand_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_52_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_66_good();");
  CWE191_Integer_Underflow__int_rand_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_07_good();");
  CWE191_Integer_Underflow__short_rand_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_01_good();");
  CWE191_Integer_Underflow__int_rand_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_15_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_42_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_01_good();");
  CWE191_Integer_Underflow__int_rand_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_34_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_67_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_52_good();");
  CWE191_Integer_Underflow__short_min_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_04_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_67_good();");
  CWE191_Integer_Underflow__short_min_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_15_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_53_good();");
  CWE191_Integer_Underflow__int_rand_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_41_good();");
  CWE191_Integer_Underflow__short_rand_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_06_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_53_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_04_good();");
  CWE191_Integer_Underflow__short_rand_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_54_good();");
  CWE191_Integer_Underflow__short_min_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_45_good();");
  CWE191_Integer_Underflow__short_min_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_18_good();");
  CWE191_Integer_Underflow__int_rand_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_32_good();");
  CWE191_Integer_Underflow__short_rand_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_34_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_18_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_67_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_05_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_08_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_45_good();");
  CWE191_Integer_Underflow__short_rand_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_18_good();");
  CWE191_Integer_Underflow__int_rand_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_65_good();");
  CWE191_Integer_Underflow__int_rand_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_11_good();");
  CWE191_Integer_Underflow__int_rand_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_34_good();");
  CWE191_Integer_Underflow__int_rand_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_44_good();");
  CWE191_Integer_Underflow__short_min_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_06_good();");
  CWE191_Integer_Underflow__short_rand_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_09_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_51_good();");
  CWE191_Integer_Underflow__int_rand_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_14_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_64_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_52_good();");
  CWE191_Integer_Underflow__short_rand_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_31_good();");
  CWE191_Integer_Underflow__int_rand_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_02_good();");
  CWE191_Integer_Underflow__int_rand_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_16_good();");
  CWE191_Integer_Underflow__short_min_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_06_good();");
  CWE191_Integer_Underflow__int_rand_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_14_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_63_good();");
  CWE191_Integer_Underflow__short_min_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_15_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_02_good();");
  CWE191_Integer_Underflow__short_rand_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_68_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_16_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_04_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_34_good();");
  CWE191_Integer_Underflow__short_rand_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_54_good();");
  CWE191_Integer_Underflow__short_rand_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_04_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_06_good();");
  CWE191_Integer_Underflow__short_min_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_53_good();");
  CWE191_Integer_Underflow__int_rand_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_61_good();");
  CWE191_Integer_Underflow__short_fscanf_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_10_good();");
  CWE191_Integer_Underflow__short_min_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_31_good();");
  CWE191_Integer_Underflow__short_rand_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_44_good();");
  CWE191_Integer_Underflow__int_rand_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_32_good();");
  CWE191_Integer_Underflow__int_rand_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_21_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_52_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_44_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_03_good();");
  CWE191_Integer_Underflow__short_min_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_41_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_63_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_11_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_17_good();");
  CWE191_Integer_Underflow__int_rand_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_11_good();");
  CWE191_Integer_Underflow__short_rand_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_67_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_64_good();");
  CWE191_Integer_Underflow__short_rand_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_53_good();");
  CWE191_Integer_Underflow__short_fscanf_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_08_good();");
  CWE191_Integer_Underflow__short_min_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_01_good();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_06_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_54_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_15_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_31_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_45_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_22_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_17_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_10_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_44_bad();");
  CWE191_Integer_Underflow__short_min_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_14_bad();");
  CWE191_Integer_Underflow__short_min_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_11_bad();");
  CWE191_Integer_Underflow__short_min_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_42_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_05_bad();");
  CWE191_Integer_Underflow__short_rand_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_66_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_53_bad();");
  CWE191_Integer_Underflow__short_min_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_34_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_02_bad();");
  CWE191_Integer_Underflow__short_min_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_41_bad();");
  CWE191_Integer_Underflow__short_min_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_31_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_03_bad();");
  CWE191_Integer_Underflow__short_min_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_45_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_03_bad();");
  CWE191_Integer_Underflow__int_rand_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_08_bad();");
  CWE191_Integer_Underflow__short_min_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_08_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_01_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_67_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_16_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_32_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_03_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_44_bad();");
  CWE191_Integer_Underflow__short_rand_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_61_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_68_bad();");
  CWE191_Integer_Underflow__short_rand_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_53_bad();");
  CWE191_Integer_Underflow__short_min_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_06_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_18_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_53_bad();");
  CWE191_Integer_Underflow__short_rand_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_42_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_67_bad();");
  CWE191_Integer_Underflow__short_min_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_12_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_17_bad();");
  CWE191_Integer_Underflow__short_rand_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_21_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_44_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_65_bad();");
  CWE191_Integer_Underflow__short_min_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_05_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_68_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_41_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_22_bad();");
  CWE191_Integer_Underflow__int_rand_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_45_bad();");
  CWE191_Integer_Underflow__int_rand_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_09_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_10_bad();");
  CWE191_Integer_Underflow__short_min_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_07_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_18_bad();");
  CWE191_Integer_Underflow__short_min_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_17_bad();");
  CWE191_Integer_Underflow__int_rand_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_21_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_02_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_12_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_12_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_31_bad();");
  CWE191_Integer_Underflow__short_min_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_21_bad();");
  CWE191_Integer_Underflow__short_min_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_53_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_15_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_12_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_17_bad();");
  CWE191_Integer_Underflow__short_min_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_06_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_01_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_22_bad();");
  CWE191_Integer_Underflow__short_min_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_04_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_17_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_10_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_21_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_03_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_03_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_15_bad();");
  CWE191_Integer_Underflow__short_rand_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_22_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_09_bad();");
  CWE191_Integer_Underflow__short_min_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_11_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_66_bad();");
  CWE191_Integer_Underflow__short_min_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_09_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_67_bad();");
  CWE191_Integer_Underflow__short_rand_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_51_bad();");
  CWE191_Integer_Underflow__short_rand_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_04_bad();");
  CWE191_Integer_Underflow__short_min_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_61_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_54_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_10_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_16_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_52_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_12_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_54_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_42_bad();");
  CWE191_Integer_Underflow__int_rand_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_32_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_18_bad();");
  CWE191_Integer_Underflow__short_rand_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_14_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_07_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_05_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_45_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_02_bad();");
  CWE191_Integer_Underflow__short_rand_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_12_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_44_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_13_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_52_bad();");
  CWE191_Integer_Underflow__short_rand_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_09_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_61_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_32_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_61_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_64_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_13_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_04_bad();");
  CWE191_Integer_Underflow__short_rand_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_16_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_10_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_15_bad();");
  CWE191_Integer_Underflow__short_min_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_65_bad();");
  CWE191_Integer_Underflow__short_rand_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_34_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_12_bad();");
  CWE191_Integer_Underflow__short_min_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_17_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_45_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_21_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_64_bad();");
  CWE191_Integer_Underflow__short_min_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_61_bad();");
  CWE191_Integer_Underflow__short_rand_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_03_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_08_bad();");
  CWE191_Integer_Underflow__int_rand_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_09_bad();");
  CWE191_Integer_Underflow__short_rand_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_02_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_45_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_08_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_02_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_10_bad();");
  CWE191_Integer_Underflow__short_rand_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_68_bad();");
  CWE191_Integer_Underflow__short_min_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_51_bad();");
  CWE191_Integer_Underflow__short_min_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_10_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_01_bad();");
  CWE191_Integer_Underflow__short_min_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_22_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_65_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_21_bad();");
  CWE191_Integer_Underflow__short_min_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_01_bad();");
  CWE191_Integer_Underflow__short_rand_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_13_bad();");
  CWE191_Integer_Underflow__int_rand_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_05_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_41_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_63_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_63_bad();");
  CWE191_Integer_Underflow__short_min_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_17_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_64_bad();");
  CWE191_Integer_Underflow__int_rand_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_45_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_13_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_04_bad();");
  CWE191_Integer_Underflow__short_min_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_32_bad();");
  CWE191_Integer_Underflow__short_min_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_18_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_12_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_15_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_11_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_12_bad();");
  CWE191_Integer_Underflow__short_min_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_54_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_41_bad();");
  CWE191_Integer_Underflow__short_min_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_68_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_22_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_66_bad();");
  CWE191_Integer_Underflow__short_min_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_53_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_02_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_51_bad();");
  CWE191_Integer_Underflow__short_min_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_07_bad();");
  CWE191_Integer_Underflow__short_rand_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_09_bad();");
  CWE191_Integer_Underflow__short_min_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_09_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_66_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_66_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_64_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_12_bad();");
  CWE191_Integer_Underflow__int_rand_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_63_bad();");
  CWE191_Integer_Underflow__short_rand_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_21_bad();");
  CWE191_Integer_Underflow__int_rand_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_06_bad();");
  CWE191_Integer_Underflow__int_rand_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_03_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_68_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_07_bad();");
  CWE191_Integer_Underflow__short_min_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_07_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_07_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_32_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_65_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_52_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_17_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_42_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_21_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_22_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_08_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_21_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_18_bad();");
  CWE191_Integer_Underflow__short_min_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_42_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_34_bad();");
  CWE191_Integer_Underflow__int_rand_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_16_bad();");
  CWE191_Integer_Underflow__int_rand_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_63_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_16_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_11_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_10_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_05_bad();");
  CWE191_Integer_Underflow__short_min_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_52_bad();");
  CWE191_Integer_Underflow__int_rand_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_41_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_10_bad();");
  CWE191_Integer_Underflow__int_rand_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_07_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_68_bad();");
  CWE191_Integer_Underflow__short_min_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_41_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_64_bad();");
  CWE191_Integer_Underflow__short_min_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_06_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_68_bad();");
  CWE191_Integer_Underflow__int_rand_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_61_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_53_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_11_bad();");
  CWE191_Integer_Underflow__short_rand_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_42_bad();");
  CWE191_Integer_Underflow__short_rand_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_13_bad();");
  CWE191_Integer_Underflow__short_min_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_65_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_32_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_61_bad();");
  CWE191_Integer_Underflow__short_min_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_64_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_06_bad();");
  CWE191_Integer_Underflow__short_min_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_05_bad();");
  CWE191_Integer_Underflow__short_min_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_54_bad();");
  CWE191_Integer_Underflow__short_min_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_13_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_05_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_09_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_51_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_18_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_63_bad();");
  CWE191_Integer_Underflow__int_rand_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_54_bad();");
  CWE191_Integer_Underflow__short_rand_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_68_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_13_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_16_bad();");
  CWE191_Integer_Underflow__short_rand_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_04_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_01_bad();");
  CWE191_Integer_Underflow__short_min_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_31_bad();");
  CWE191_Integer_Underflow__short_min_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_14_bad();");
  CWE191_Integer_Underflow__int_rand_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_64_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_14_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_21_bad();");
  CWE191_Integer_Underflow__short_rand_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_14_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_13_bad();");
  CWE191_Integer_Underflow__short_min_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_17_bad();");
  CWE191_Integer_Underflow__short_min_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_54_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_68_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_11_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_03_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_22_bad();");
  CWE191_Integer_Underflow__short_rand_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_44_bad();");
  CWE191_Integer_Underflow__int_rand_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_22_bad();");
  CWE191_Integer_Underflow__short_min_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_16_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_44_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_44_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_34_bad();");
  CWE191_Integer_Underflow__short_min_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_02_bad();");
  CWE191_Integer_Underflow__short_min_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_13_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_01_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_02_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_04_bad();");
  CWE191_Integer_Underflow__int_rand_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_42_bad();");
  CWE191_Integer_Underflow__short_min_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_41_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_51_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_08_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_52_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_41_bad();");
  CWE191_Integer_Underflow__short_rand_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_06_bad();");
  CWE191_Integer_Underflow__short_rand_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_31_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_66_bad();");
  CWE191_Integer_Underflow__short_rand_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_22_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_09_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_32_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_07_bad();");
  CWE191_Integer_Underflow__short_min_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_63_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_08_bad();");
  CWE191_Integer_Underflow__short_rand_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_42_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_42_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_65_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_08_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_65_bad();");
  CWE191_Integer_Underflow__short_min_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_16_bad();");
  CWE191_Integer_Underflow__short_min_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_12_bad();");
  CWE191_Integer_Underflow__short_rand_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_45_bad();");
  CWE191_Integer_Underflow__short_min_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_67_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_03_bad();");
  CWE191_Integer_Underflow__short_rand_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_65_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_07_bad();");
  CWE191_Integer_Underflow__int_rand_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_64_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_14_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_05_bad();");
  CWE191_Integer_Underflow__int_rand_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_31_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_07_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_44_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_34_bad();");
  CWE191_Integer_Underflow__short_rand_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_63_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_34_bad();");
  CWE191_Integer_Underflow__short_min_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_18_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_32_bad();");
  CWE191_Integer_Underflow__short_min_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_41_bad();");
  CWE191_Integer_Underflow__int_rand_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_31_bad();");
  CWE191_Integer_Underflow__int_rand_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_54_bad();");
  CWE191_Integer_Underflow__int_rand_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_32_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_10_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_61_bad();");
  CWE191_Integer_Underflow__int_rand_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_16_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_15_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_63_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_09_bad();");
  CWE191_Integer_Underflow__int_rand_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_31_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_11_bad();");
  CWE191_Integer_Underflow__short_min_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_05_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_51_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_14_bad();");
  CWE191_Integer_Underflow__short_rand_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_04_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_08_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_51_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_65_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_13_bad();");
  CWE191_Integer_Underflow__short_rand_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_67_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_52_bad();");
  CWE191_Integer_Underflow__short_min_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_51_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_42_bad();");
  CWE191_Integer_Underflow__short_min_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_05_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_03_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_15_bad();");
  CWE191_Integer_Underflow__short_min_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_66_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_14_bad();");
  CWE191_Integer_Underflow__short_min_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_66_bad();");
  CWE191_Integer_Underflow__int_rand_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_51_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_13_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_11_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_17_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_66_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_31_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_02_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_18_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_14_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_15_bad();");
  CWE191_Integer_Underflow__int_rand_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_61_bad();");
  CWE191_Integer_Underflow__short_min_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_67_bad();");
  CWE191_Integer_Underflow__int_rand_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_01_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_52_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_66_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_07_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_01_bad();");
  CWE191_Integer_Underflow__int_rand_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_15_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_42_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_01_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_34_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_67_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_52_bad();");
  CWE191_Integer_Underflow__short_min_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_04_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_67_bad();");
  CWE191_Integer_Underflow__short_min_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_15_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_53_bad();");
  CWE191_Integer_Underflow__int_rand_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_41_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_06_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_53_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_04_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_54_bad();");
  CWE191_Integer_Underflow__short_min_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_45_bad();");
  CWE191_Integer_Underflow__short_min_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_18_bad();");
  CWE191_Integer_Underflow__int_rand_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_32_bad();");
  CWE191_Integer_Underflow__short_rand_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_34_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_18_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_67_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_05_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_08_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_45_bad();");
  CWE191_Integer_Underflow__short_rand_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_18_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_65_bad();");
  CWE191_Integer_Underflow__int_rand_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_11_bad();");
  CWE191_Integer_Underflow__int_rand_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_34_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_44_bad();");
  CWE191_Integer_Underflow__short_min_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_06_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_09_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_51_bad();");
  CWE191_Integer_Underflow__int_rand_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_14_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_64_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_52_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_31_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_02_bad();");
  CWE191_Integer_Underflow__int_rand_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_16_bad();");
  CWE191_Integer_Underflow__short_min_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_06_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_14_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_63_bad();");
  CWE191_Integer_Underflow__short_min_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_15_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_02_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_68_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_16_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_04_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_34_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_54_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_04_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_multiply_06_bad();");
  CWE191_Integer_Underflow__short_min_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_53_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_61_bad();");
  CWE191_Integer_Underflow__short_fscanf_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_10_bad();");
  CWE191_Integer_Underflow__short_min_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_31_bad();");
  CWE191_Integer_Underflow__short_rand_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_44_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_sub_32_bad();");
  CWE191_Integer_Underflow__int_rand_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_21_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_52_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_44_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_03_bad();");
  CWE191_Integer_Underflow__short_min_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_41_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_63_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_11_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_17_bad();");
  CWE191_Integer_Underflow__int_rand_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_11_bad();");
  CWE191_Integer_Underflow__short_rand_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_67_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_sub_64_bad();");
  CWE191_Integer_Underflow__short_rand_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_53_bad();");
  CWE191_Integer_Underflow__short_fscanf_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_sub_08_bad();");
  CWE191_Integer_Underflow__short_min_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_01_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_06_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_sub_06_bad();
  return 0;
}


void CWE191_Integer_Underflow__short_min_sub_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_min_sub_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_64b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f6a0,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


ulong goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f6a0,&local_c);
  return (ulong)local_c;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_min_multiply_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_63b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


ulong CWE191_Integer_Underflow__short_fscanf_multiply_61b_badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f738,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE191_Integer_Underflow__short_fscanf_multiply_61b_goodG2BSource(void)

{
  return 0xfffe;
}


ulong CWE191_Integer_Underflow__short_fscanf_multiply_61b_goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f738,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__short_min_sub_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0x7fff);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalTrue != 0) {
    local_a = -0x8000;
  }
  if (globalFalse == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004052a6) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    printIntLine((ulong)(local_24 - 1));
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (local_24 == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_24 - 1));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_multiply_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_63b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_09_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f7e8,&local_c);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f7e8,&local_c);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f7e8,&local_c);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f840,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__short_fscanf_sub_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


ulong goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f840,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_05_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f878,&local_10);
  }
  if (staticTrue != 0) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f878,&local_10);
  }
  if (staticFalse == 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f878,&local_10);
  }
  if (staticTrue != 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_16_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0043f8c0,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0043f8c0,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_multiply_61b_badSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_multiply_61b_goodG2BSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_multiply_61b_goodB2GSource(0);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE191_Integer_Underflow__int_rand_sub_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE191_Integer_Underflow__int_rand_sub_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_bad(void)

{
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f998,&local_14);
  local_c = local_14;
  local_10 = local_14 - 1;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f998,&local_14);
  local_c = local_14;
  if (local_14 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_14 - 1;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66b_badSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66b_goodG2BSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_15_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406373) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004063b2) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_64b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_rand_sub_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_64b_goodB2GSink(local_1a);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_63b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_rand_multiply_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_63b_goodB2GSink(local_1a);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_22_badSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_sub_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_sub_22_goodB2G1Global == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_22_goodB2G2Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_sub_22_goodB2G2Global != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_22_goodG2BSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_rand_multiply_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if ((int)local_30 < 0) {
    local_34 = local_30 * 2;
    printIntLine((ulong)local_34);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_20 = 0xfffffffe;
  local_24 = 0xfffffffc;
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if ((int)local_30 < 0) {
    if ((int)local_30 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_34 = local_30 * 2;
      printIntLine((ulong)local_34);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 badSource(void)

{
  return 0;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0043fb18,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_sub_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0043fb18,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_63b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406bba) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406ca4) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE191_Integer_Underflow__short_min_multiply_61b_badSource(void)

{
  return 0x8000;
}


undefined8 CWE191_Integer_Underflow__short_min_multiply_61b_goodG2BSource(void)

{
  return 0xfffe;
}


undefined8 CWE191_Integer_Underflow__short_min_multiply_61b_goodB2GSource(void)

{
  return 0x8000;
}


void CWE191_Integer_Underflow__int_rand_multiply_67b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_67b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_67b_goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_sub_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_sub_61b_goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_67_bad(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0043fbd8,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_67b_badSink((ulong)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0043fbd8,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_67b_goodB2GSink((ulong)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54e_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54e_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_22_badSink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_fscanf_multiply_22_badGlobal != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G1Global == 0) {
    if (sParm1 < 0) {
      if (sParm1 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G2Sink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G2Global != 0) && (sParm1 < 0)) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_22_goodG2BSink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_fscanf_multiply_22_goodG2BGlobal != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0043fc5b,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0043fc5b,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_54b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_multiply_54b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_68_badData = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_68_badData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_rand_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_68_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_68_goodB2GData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf)
    ;
  }
  CWE191_Integer_Underflow__short_rand_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_11_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fc60,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fc60,&local_c);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fc60,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_07_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fcb8,&local_c);
  }
  if ((staticFive == 5) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fcb8,&local_c);
  }
  if (staticFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fcb8,&local_c);
  }
  if ((staticFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_05_bad(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407868) */

void goodB2G1(void)

{
  if (staticFalse == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004078b9) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407b2f) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407c26) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_min_multiply_61b_badSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_min_multiply_61b_goodG2BSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_min_multiply_61b_goodB2GSource(0);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if ((short)local_22 < 0) {
      printIntLine((ulong)(uint)(int)(short)(local_22 * 2));
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
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if ((short)local_22 < 0) {
      if ((short)local_22 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_22 * 2));
      }
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 < 0) {
      printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_34_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040841f) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_17_bad(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043ff50,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_12 = local_14 + -1;
    printIntLine((ulong)(uint)(int)local_12);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043ff50,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_12 = local_14 + -1;
      printIntLine((ulong)(uint)(int)local_12);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_66b_badSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_66b_goodG2BSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_44_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ffe8,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ffe8,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53d_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53d_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_22_badSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_rand_multiply_22_badGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G1Global == 0) {
    if (iParm1 < 0) {
      if (iParm1 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(iParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G2Sink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G2Global != 0) && (iParm1 < 0)) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_22_goodG2BSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_rand_multiply_22_goodG2BGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_06_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004400d4,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408ed7) */

void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004400d4,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004400d4,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408f8c) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_min_sub_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_63b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE191_Integer_Underflow__short_rand_multiply_61b_badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


undefined8 CWE191_Integer_Underflow__short_rand_multiply_61b_goodG2BSource(void)

{
  return 0xfffe;
}


ulong CWE191_Integer_Underflow__short_rand_multiply_61b_goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__int_rand_multiply_53d_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53d_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53d_goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


ulong CWE191_Integer_Underflow__short_fscanf_sub_61b_badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440153,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE191_Integer_Underflow__short_fscanf_sub_61b_goodG2BSource(void)

{
  return 0xfffe;
}


ulong CWE191_Integer_Underflow__short_fscanf_sub_61b_goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440153,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52c_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52c_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52c_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_12_bad(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_c = 0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_c - 1));
    }
  }
  else {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004095cb) */
/* WARNING: Removing unreachable block (ram,0x004095f2) */

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
    printUnsignedLine(0xfffffffd);
  }
  else {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_68_badData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_68_badData =
         (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_rand_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_68_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_68_goodB2GData =
         (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_68_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004401f0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_68_badData = local_a;
  CWE191_Integer_Underflow__short_fscanf_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004401f0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_68_goodB2GData = local_a;
  CWE191_Integer_Underflow__short_fscanf_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409a8e) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409adf) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_sub_65b_badSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_sub_65b_goodB2GSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_fscanf_multiply_45_badData
                                          * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_45_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004402a0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_45_badData = local_a;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_fscanf_multiply_45_goodG2BData
                                          * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_45_goodG2BData = 0xfffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__short_fscanf_multiply_45_goodB2GData < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE191_Integer_Underflow__short_fscanf_multiply_45_goodB2GData
                                            * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004402a0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_45_goodB2GData = local_a;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_54b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_54b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_53b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_53b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_06_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004402e4,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a058) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004402e4,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004402e4,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a127) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_65_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__short_fscanf_sub_65b_badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00440333,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_fscanf_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__short_fscanf_sub_65b_goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00440333,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440337,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_53b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440337,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_53b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_52b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_multiply_52b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_51b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_51b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_51b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_sub_68_badData + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_sub_68_goodG2BData + -1
                                        ));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_min_sub_68_goodB2GData == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_sub_68_goodB2GData +
                                          -1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a514) */

void CWE191_Integer_Underflow__short_min_multiply_16_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a548) */
/* WARNING: Removing unreachable block (ram,0x0040a567) */
/* WARNING: Removing unreachable block (ram,0x0040a550) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_64b_badSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_64b_goodG2BSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_02_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040aee2) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040af1f) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_51_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_51b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_multiply_51b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_min_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


ulong CWE191_Integer_Underflow__int_rand_sub_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE191_Integer_Underflow__int_rand_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_rand_sub_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__short_min_sub_68_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_68_badData = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_min_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_sub_68_goodB2GData = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf)
    ;
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_68_badData = rand();
    CWE191_Integer_Underflow__int_rand_multiply_68_badData =
         CWE191_Integer_Underflow__int_rand_multiply_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_68_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_68_goodB2GData = rand();
    CWE191_Integer_Underflow__int_rand_multiply_68_goodB2GData =
         CWE191_Integer_Underflow__int_rand_multiply_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_65b_badSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_rand_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_65b_goodB2GSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_63b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_63b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_sub_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_11_bad(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b960) */

void goodB2G1(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b9b9) */

void goodB2G2(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bad1) */

void CWE191_Integer_Underflow__short_min_multiply_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bb10) */
/* WARNING: Removing unreachable block (ram,0x0040bb23) */
/* WARNING: Removing unreachable block (ram,0x0040bb42) */
/* WARNING: Removing unreachable block (ram,0x0040bb2b) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bb7d) */
/* WARNING: Removing unreachable block (ram,0x0040bb9c) */
/* WARNING: Removing unreachable block (ram,0x0040bb85) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bbc0) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_17_bad(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004406b8,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_18 - 1;
    printUnsignedLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004406b8,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_14 = local_18 - 1;
      printUnsignedLine((ulong)local_14);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printUnsignedLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_52b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_52b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004406f0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_multiply_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004406f0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_64b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_53b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_sub_53b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_51b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_51b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_51b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00440730,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00440730,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440768,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_52b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440768,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_52b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_sub_68_badData + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_sub_68_goodG2BData +
                                        -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_sub_68_goodB2GData == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_sub_68_goodB2GData +
                                          -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_16_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_sub_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_sub_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_multiply_45_badData
                                          * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_45_badData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_45_badData =
         (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_rand_multiply_45_goodG2BData
                                          * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_45_goodG2BData = 0xfffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__short_rand_multiply_45_goodB2GData < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE191_Integer_Underflow__short_rand_multiply_45_goodB2GData
                                            * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_45_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_multiply_45_goodB2GData =
         (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_16_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440870,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440870,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_min_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_18_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61b_badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440958,&local_c);
  return (ulong)local_c;
}


undefined8 CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61b_goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440958,&local_c);
  return (ulong)local_c;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__int_rand_multiply_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 < 0) {
    if (iVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_64b_badSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_64b_goodG2BSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_51_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_51b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_51b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_51_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440a30,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_51b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440a30,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_51b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_51_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440a34,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_51b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440a34,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_51b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_01_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d6a5) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61b_badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61b_goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61b_goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_sub_45_badData + -1)
              );
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_45_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440a98,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_45_badData = local_a;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_sub_45_goodG2BData +
                                        -1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_45_goodG2BData = 0xfffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_sub_45_goodB2GData == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_sub_45_goodB2GData
                                          + -1));
  }
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440a98,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_45_goodB2GData = local_a;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_06_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040daf6) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040dbeb) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_53b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_53b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_63b_badSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_63b_goodG2BSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_min_multiply_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_64b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_07_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440b60,&local_10);
  }
  if (staticFive == 5) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440b60,&local_10);
  }
  if (staticFive == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440b60,&local_10);
  }
  if (staticFive == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_52b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_sub_52b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_21_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_66b_badSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_66b_goodB2GSink(long lParm1)

{
  int iVar1;
  
  iVar1 = *(int *)(lParm1 + 8);
  if (iVar1 < 0) {
    if (iVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_16_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e6a6) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 badSource(void)

{
  return 0x8000;
}


void CWE191_Integer_Underflow__short_min_multiply_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x8000;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_rand_multiply_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_rand_multiply_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_rand_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_02_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ea28) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ea68) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE191_Integer_Underflow__unsigned_int_min_sub_61b_badSource(void)

{
  return 0;
}


undefined8 CWE191_Integer_Underflow__unsigned_int_min_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


undefined8 CWE191_Integer_Underflow__unsigned_int_min_sub_61b_goodB2GSource(void)

{
  return 0;
}


void CWE191_Integer_Underflow__short_rand_multiply_64b_badSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_64b_goodG2BSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_51_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_51b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_sub_51b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54e_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54e_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54e_goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_min_sub_61b_badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_min_sub_61b_goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_min_sub_61b_goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_32_bad(void)

{
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0;
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00440dc8,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  local_20 = local_1c - 1;
  printUnsignedLine((ulong)local_20);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_20 = 0xfffffffe;
  local_24 = 0xfffffffd;
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0;
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00440dc8,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  if (local_1c == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_20 = local_1c - 1;
    printUnsignedLine((ulong)local_20);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_sub_45_badData + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_45_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_45_badData = 0x8000;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_sub_45_goodG2BData + -1
                                        ));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_45_goodG2BData = 0xfffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_min_sub_45_goodB2GData == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_sub_45_goodB2GData +
                                          -1));
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_sub_45_goodB2GData = 0x8000;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    printUnsignedLine((ulong)(local_24 - 1));
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (local_24 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_24 - 1));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printUnsignedLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_64b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_rand_multiply_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_64b_goodB2GSink(local_1a);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_06_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f377) */
/* WARNING: Removing unreachable block (ram,0x0040f38b) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f3df) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f41b) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_52b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_52b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440ee0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_sub_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440ee0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_64b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54e_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54e_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54e_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_63b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_63b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_63b_goodB2GSink(int *piParm1)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 < 0) {
    if (iVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_07_bad(void)

{
  if (staticFive == 5) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fa44) */

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


/* WARNING: Removing unreachable block (ram,0x0040fa97) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440fd0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_multiply_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440fd0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_63b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE191_Integer_Underflow__unsigned_int_rand_sub_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE191_Integer_Underflow__unsigned_int_rand_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__unsigned_int_rand_sub_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__int_rand_sub_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_42_good(void)

{
  goodB2G();
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


void CWE191_Integer_Underflow__short_rand_sub_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_51_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_51b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_51b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_63b_badSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_63b_goodG2BSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(short sParm1)

{
  if ((badStatic != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_21_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441118,&local_a);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 < 0) {
      if (sParm1 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441118,&local_a);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if ((goodB2G2Static != 0) && (sParm1 < 0)) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441118,&local_a);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if ((goodG2BStatic != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_rand_sub_61b_badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_rand_sub_61b_goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_rand_sub_61b_goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_sub_45_badData + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_45_badData = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_45_badData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_sub_45_goodG2BData +
                                        -1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_45_goodG2BData = 0xfffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_sub_45_goodB2GData == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_sub_45_goodB2GData +
                                          -1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_45_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_sub_45_goodB2GData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf)
    ;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_17_bad(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441218,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      local_12 = local_14 * 2;
      printIntLine((ulong)(uint)(int)local_12);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441218,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      if (local_14 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_12 = local_14 * 2;
        printIntLine((ulong)(uint)(int)local_12);
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 < 0) {
      printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_22_badSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_sub_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_sub_22_goodB2G1Global == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_22_goodB2G2Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_sub_22_goodB2G2Global != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_22_goodG2BSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_06_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041110e) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004111f7) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_44_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004412f0,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004412f0,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_15_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441330,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441330,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441330,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_67_bad(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004413b0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_67b_badSink((ulong)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004413b0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_67b_goodB2GSink((ulong)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 0xfffffffe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
      }
    }
  }
  else {
    if ((int)local_1c < 0) {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
      }
    }
  }
  else {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
    printIntLine(0xfffffffc);
  }
  else {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_67b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_67b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_67b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52c_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52c_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52c_goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_09_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00441490,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00441490,&local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00441490,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
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
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004124d8) */

void CWE191_Integer_Underflow__short_min_multiply_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412515) */
/* WARNING: Removing unreachable block (ram,0x00412528) */
/* WARNING: Removing unreachable block (ram,0x00412547) */
/* WARNING: Removing unreachable block (ram,0x00412530) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412580) */
/* WARNING: Removing unreachable block (ram,0x0041259f) */
/* WARNING: Removing unreachable block (ram,0x00412588) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004125c2) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412698) */

void CWE191_Integer_Underflow__short_min_multiply_31_bad(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041271c) */
/* WARNING: Removing unreachable block (ram,0x0041273b) */
/* WARNING: Removing unreachable block (ram,0x00412724) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE191_Integer_Underflow__short_rand_sub_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0xfffe;
  local_14 = 0xfffe;
  CWE191_Integer_Underflow__short_rand_sub_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE191_Integer_Underflow__short_rand_sub_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_10_bad(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412bcd) */

void goodB2G1(void)

{
  if (globalFalse == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412c1e) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_67_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_67b_badSink(0x8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_multiply_67b_goodB2GSink(0x8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_13_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004416b8,&local_c);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004416b8,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004416b8,&local_c);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 0xfffffffe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  else {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  else {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
    printUnsignedLine(0xfffffffd);
  }
  else {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_63b_badSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_63b_goodG2BSink(short *psParm1)

{
  if (*psParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalFive == 5) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalFive == 5) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_22_badSink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_min_multiply_22_badGlobal != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_multiply_22_goodB2G1Global == 0) {
    if (sParm1 < 0) {
      if (sParm1 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_22_goodB2G2Sink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_min_multiply_22_goodB2G2Global != 0) && (sParm1 < 0)) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_22_goodG2BSink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_min_multiply_22_goodG2BGlobal != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_rand_multiply_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  if ((short)local_2c < 0) {
    local_2e = local_2c * 2;
    printIntLine((ulong)(uint)(int)local_2e);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1c = 0xfffe;
  local_1e = 0xfffc;
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  if ((short)local_2c < 0) {
    if ((short)local_2c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_2e = local_2c * 2;
      printIntLine((ulong)(uint)(int)local_2e);
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_14_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441850,&local_c);
  }
  if (globalFive == 5) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441850,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441850,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_fscanf_sub_32_bad(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_004418a0,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  local_1c = local_1a + -1;
  printIntLine((ulong)(uint)(int)local_1c);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1c = 0xfffe;
  local_1e = 0xfffd;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_004418a0,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (local_1a == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_1a + -1;
    printIntLine((ulong)(uint)(int)local_1c);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_16_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_67b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_67b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_67b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441970,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441970,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441973,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441973,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_03_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004419f0,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004419f0,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004419f0,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_04_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041483e) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414930) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_31_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_rand_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_04_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441ac8,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414d0c) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441ac8,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441ac8,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414dc8) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_31_bad(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441b18,&local_10);
  local_a = local_10;
  local_c = local_10;
  local_e = local_10 + -1;
  printIntLine((ulong)(uint)(int)local_e);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441b18,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (local_10 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_e = local_10 + -1;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_18_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441b50,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00441b50,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_51b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_51b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_51b_goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalFive == 5) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalFive == 5) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_12_bad(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00441cd8,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e < 0) {
      if (local_e < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_e * 2;
        printIntLine((ulong)(uint)(int)local_c);
      }
    }
  }
  else {
    if (local_e < 0) {
      local_a = local_e * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00441cd8,&local_e);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00441cd8,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e < 0) {
      if (local_e < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_e * 2;
        printIntLine((ulong)(uint)(int)local_c);
      }
    }
  }
  else {
    if (local_e < 0) {
      if (local_e < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_e * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
    printIntLine(0xfffffffc);
  }
  else {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_sub_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_sub_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_22_badSink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_rand_multiply_22_badGlobal != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G1Global == 0) {
    if (sParm1 < 0) {
      if (sParm1 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G2Sink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G2Global != 0) && (sParm1 < 0)) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_22_goodG2BSink(short sParm1)

{
  if ((CWE191_Integer_Underflow__short_rand_multiply_22_goodG2BGlobal != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53d_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53d_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004161e0) */

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


/* WARNING: Removing unreachable block (ram,0x0041623c) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0x7fff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041666b) */

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


/* WARNING: Removing unreachable block (ram,0x004166c1) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_17_bad(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -0x8000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 < 0) {
      printIntLine(0);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -0x8000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 < 0) {
      if (local_12 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine(0);
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 < 0) {
      printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_min_sub_32_bad(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0x8000;
  local_1c = 0x8000;
  local_1e = 0x7fff;
  printIntLine(0x7fff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1c = 0xfffe;
  local_1e = 0xfffd;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004169e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = local_20;
  local_18 = local_20;
  local_20[0] = 0;
  local_1a = 0x8000;
  local_1c = 0x8000;
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__short_min_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65b_badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00441f78,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65b_goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00441f78,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_64b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
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


void CWE191_Integer_Underflow__unsigned_int_rand_sub_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_02_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442028,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442028,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442028,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_22_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_rand_multiply_22_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_rand_multiply_22_goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_rand_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_sub_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_sub_68_badData = rand();
    CWE191_Integer_Underflow__int_rand_sub_68_badData =
         CWE191_Integer_Underflow__int_rand_sub_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_sub_68_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_sub_68_goodB2GData = rand();
    CWE191_Integer_Underflow__int_rand_sub_68_goodB2GData =
         CWE191_Integer_Underflow__int_rand_sub_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if ((badStatic != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_21_bad(void)

{
  badStatic = 1;
  badSink(0xffff8000);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 < 0) {
      if (sParm1 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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
  goodB2G1Sink(0xffff8000);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if ((goodB2G2Static != 0) && (sParm1 < 0)) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  if ((goodG2BStatic != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004176d9) */

void CWE191_Integer_Underflow__short_min_multiply_03_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041770b) */
/* WARNING: Removing unreachable block (ram,0x0041772a) */
/* WARNING: Removing unreachable block (ram,0x00417713) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417751) */
/* WARNING: Removing unreachable block (ram,0x00417770) */
/* WARNING: Removing unreachable block (ram,0x00417759) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_22_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004420eb,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_fscanf_sub_22_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004420eb,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004420eb,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_fscanf_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_04_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041798a) */
/* WARNING: Removing unreachable block (ram,0x0041799e) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004179f0) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417a2b) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_31_bad(void)

{
  printIntLine(0x7fff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417b6e) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__short_min_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417bc9) */

void CWE191_Integer_Underflow__short_min_multiply_18_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417bfd) */
/* WARNING: Removing unreachable block (ram,0x00417c1c) */
/* WARNING: Removing unreachable block (ram,0x00417c05) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_10_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004421a8,&local_c);
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004421a8,&local_c);
  }
  if (globalFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004421a8,&local_c);
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_rand_multiply_45_badData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf)
    ;
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_45_badData = rand();
    CWE191_Integer_Underflow__int_rand_multiply_45_badData =
         CWE191_Integer_Underflow__int_rand_multiply_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_rand_multiply_45_goodG2BData * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_rand_multiply_45_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_rand_multiply_45_goodB2GData * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_45_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_multiply_45_goodB2GData = rand();
    CWE191_Integer_Underflow__int_rand_multiply_45_goodB2GData =
         CWE191_Integer_Underflow__int_rand_multiply_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041819c) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418296) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_15_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041838a) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004183cc) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004422c0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_54b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004422c0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_54b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_67_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_67b_badSink(0x8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_sub_67b_goodB2GSink(0x8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_01_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004422c8,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004422c8,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53d_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53d_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53d_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_12_bad(void)

{
  int iVar1;
  short local_a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_a < 0) {
      if (local_a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_a * 2));
      }
    }
  }
  else {
    if (local_a < 0) {
      printIntLine((ulong)(uint)(int)(short)(local_a * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418a3d) */
/* WARNING: Removing unreachable block (ram,0x00418a5c) */
/* WARNING: Removing unreachable block (ram,0x00418a0b) */
/* WARNING: Removing unreachable block (ram,0x00418a2a) */
/* WARNING: Removing unreachable block (ram,0x00418a13) */
/* WARNING: Removing unreachable block (ram,0x00418a45) */

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
    printIntLine(0xfffffffc);
  }
  else {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_13_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00442378,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00442378,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00442378,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_rand_sub_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  local_2e = local_2c - 1;
  printIntLine((ulong)(uint)(int)local_2e);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1c = 0xfffe;
  local_1e = 0xfffd;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  if (local_2c == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_2e = local_2c - 1;
    printIntLine((ulong)(uint)(int)local_2e);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52c_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52c_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_52b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE191_Integer_Underflow__int_rand_multiply_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_multiply_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE191_Integer_Underflow__int_rand_multiply_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442428,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_badData = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442428,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_64b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_64b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_64b_goodB2GSink(int *piParm1)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 < 0) {
    if (iVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_65_good(void)

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


void CWE191_Integer_Underflow__short_fscanf_multiply_08_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442498,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442498,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442498,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_11_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a < 0) {
      if (local_a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine(0);
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
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    if (local_a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine(0);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419aae) */

void CWE191_Integer_Underflow__short_min_multiply_02_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419ae0) */
/* WARNING: Removing unreachable block (ram,0x00419aff) */
/* WARNING: Removing unreachable block (ram,0x00419ae8) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419b26) */
/* WARNING: Removing unreachable block (ram,0x00419b45) */
/* WARNING: Removing unreachable block (ram,0x00419b2e) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_15_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_21_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004425b0,&local_a);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004425b0,&local_a);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004425b0,&local_a);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_03_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442600,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442600,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442600,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442638,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442638,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_04_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a30f) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a3f5) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_31_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_18_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_18_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004426f8,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004426f8,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_multiply_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_64b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_67_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1a = 0xfffe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
      }
    }
  }
  else {
    if ((short)local_1a < 0) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
      }
    }
  }
  else {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
    printIntLine(0xfffffffc);
  }
  else {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041af4f) */

void CWE191_Integer_Underflow__short_min_multiply_01_bad(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041afb3) */
/* WARNING: Removing unreachable block (ram,0x0041afd2) */
/* WARNING: Removing unreachable block (ram,0x0041afbb) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53d_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53d_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53d_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_12_bad(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00442838,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_e + -1;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    local_a = local_e + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00442838,&local_e);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00442838,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_e + -1;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    if (local_e == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_e + -1;
      printIntLine((ulong)(uint)(int)local_a);
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = -0x8000;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a < 0) {
      if (local_a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine(0);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b3c1) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0x7fff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b6b5) */

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


/* WARNING: Removing unreachable block (ram,0x0041b70b) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52c_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52c_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_68_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_68_badData = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_min_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_68_goodB2GData = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_65_good(void)

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


void CWE191_Integer_Underflow__short_min_multiply_08_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a < 0) {
      if (local_a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine(0);
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
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    if (local_a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine(0);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_11_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004429b8,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004429b8,&local_c);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004429b8,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_02_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442a08,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442a08,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442a08,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_22_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_rand_sub_22_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_rand_sub_22_goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_rand_sub_22_goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_rand_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_65_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__short_fscanf_multiply_65b_badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00442a40,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__short_fscanf_multiply_65b_goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00442a40,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_21_bad(void)

{
  badStatic = 1;
  badSink(0xffff8000);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
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
  goodB2G1Sink(0xffff8000);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_03_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c5cb) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c60b) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_53b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442ac0,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442ac0,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodB2GData == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_65b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_65b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_65b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_18_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c9bb) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_10_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442b90,&local_c);
  }
  if (globalTrue != 0) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442b90,&local_c);
  }
  if (globalFalse == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442b90,&local_c);
  }
  if (globalTrue != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_sub_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_sub_45_badData = rand();
    CWE191_Integer_Underflow__int_rand_sub_45_badData =
         CWE191_Integer_Underflow__int_rand_sub_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_sub_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_sub_45_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_sub_45_goodB2GData = rand();
    CWE191_Integer_Underflow__int_rand_sub_45_goodB2GData =
         CWE191_Integer_Underflow__int_rand_sub_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_16_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00442c10,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00442c10,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_51_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_51b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d0c6) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d1b6) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_min_sub_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_min_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_min_sub_61b_goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_06_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442d14,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d6d2) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442d14,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442d14,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d791) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53d_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53d_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53d_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_01_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442d98,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442d98,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_12_bad(void)

{
  int iVar1;
  short local_a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dbf9) */
/* WARNING: Removing unreachable block (ram,0x0041dc25) */

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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52c_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52c_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041de0f) */

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


/* WARNING: Removing unreachable block (ram,0x0041de6b) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442edb,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442edb,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_41_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442ee0,&local_c);
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442ee0,&local_c);
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_68_badData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_68_badData = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_68_badData =
         CWE191_Integer_Underflow__unsigned_int_rand_sub_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodB2GData = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodB2GData =
         CWE191_Integer_Underflow__unsigned_int_rand_sub_68_goodB2GData ^
         iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_63b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_63b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
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


void CWE191_Integer_Underflow__short_rand_multiply_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_52c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_41_bad(void)

{
  badSink(0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_53c_goodB2GSink((ulong)(uint)(int)sParm1);
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


void CWE191_Integer_Underflow__short_fscanf_sub_08_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442fc8,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442fc8,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442fc8,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443018,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_goodB2GData == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_goodB2GData - 1))
    ;
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443018,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_03_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52c_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52c_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52c_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_multiply_61b_badSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_multiply_61b_goodG2BSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_multiply_61b_goodB2GSource(0);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_fscanf_multiply_68_badData
                                          * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_fscanf_multiply_68_goodG2BData
                                          * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__short_fscanf_multiply_68_goodB2GData < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE191_Integer_Underflow__short_fscanf_multiply_68_goodB2GData
                                            * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_34_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_65b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_65b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_65b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_16_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f442) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_64b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalTrue != 0) {
    local_a = -0x8000;
  }
  if (globalFalse == 0) {
    if (local_a < 0) {
      if (local_a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine(0);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f797) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1a = 0xfffe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  else {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_01_bad(void)

{
  printIntLine(0x7fff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fb3c) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__short_min_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_68_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443323,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_68_badData = local_a;
  CWE191_Integer_Underflow__short_fscanf_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443323,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_68_goodB2GData = local_a;
  CWE191_Integer_Underflow__short_fscanf_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_63b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_14_bad(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042019a) */

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


/* WARNING: Removing unreachable block (ram,0x004201ed) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_multiply_65b_badSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_multiply_65b_goodB2GSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_09_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443370,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443370,&local_c);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443370,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_22_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_min_multiply_22_badSink(0xffff8000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__short_min_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_min_multiply_22_goodB2G1Sink(0xffff8000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__short_min_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_min_multiply_22_goodB2G2Sink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_min_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_54b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_54b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044340b,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_54b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044340b,&local_a);
  CWE191_Integer_Underflow__short_fscanf_sub_54b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_02_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_45_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_sub_45_goodB2GData == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004434b8,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_53b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004434b8,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_53b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_06_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421177) */
/* WARNING: Removing unreachable block (ram,0x00421189) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004211da) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421214) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_63b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_multiply_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_65b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_65b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_65b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFalse == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalTrue != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if ((int)local_24 < 0) {
      printIntLine((ulong)(local_24 * 2));
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
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if ((int)local_24 < 0) {
      if ((int)local_24 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_24 * 2));
      }
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      printIntLine((ulong)(uint)(local_14 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_45_badData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_45_badData = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_45_badData =
         CWE191_Integer_Underflow__unsigned_int_rand_sub_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodB2GData == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodB2GData = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodB2GData =
         CWE191_Integer_Underflow__unsigned_int_rand_sub_45_goodB2GData ^
         iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_sub_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_03_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421dcf) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421e0c) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_01_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_multiply_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52c_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52c_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_52c_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


ulong CWE191_Integer_Underflow__int_rand_multiply_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE191_Integer_Underflow__int_rand_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_rand_multiply_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_68_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_68_badData = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_min_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_multiply_68_goodB2GData = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_17_bad(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printUnsignedLine(0xffffffff);
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004225a1) */

void goodB2G(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLine("data value is too large to perform subtraction.");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printUnsignedLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_65b_badSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_rand_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_65b_goodB2GSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_54b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_sub_54b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443830,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_52b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443830,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_52b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_multiply_68_badData
                                          * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_rand_multiply_68_goodG2BData
                                          * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__short_rand_multiply_68_goodB2GData < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE191_Integer_Underflow__short_rand_multiply_68_goodB2GData
                                            * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_51b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_51b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_51b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_multiply_61b_badSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_multiply_61b_goodG2BSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_multiply_61b_goodB2GSource(0);
  if (iVar1 < 0) {
    if (iVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_sub_68_badData + -1)
              );
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_sub_68_goodG2BData +
                                        -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_sub_68_goodB2GData == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_sub_68_goodB2GData
                                          + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void badSink(int iParm1)

{
  if ((badStatic != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 < 0) {
      if (iParm1 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(iParm1 * 2));
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
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if ((goodB2G2Static != 0) && (iParm1 < 0)) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if ((goodG2BStatic != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticFive == 5) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticFive == 5) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_sub_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54e_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54e_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_min_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_sub_68_goodB2GData == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_sub_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_22_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443aa0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_fscanf_multiply_22_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443aa0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443aa0,&local_a);
  CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_fscanf_multiply_22_goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_fscanf_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticTrue != 0) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticTrue != 0) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_01_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_15_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443b60,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443b60,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443b60,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_66b_badSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_66b_goodG2BSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticFive == 5) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticFive == 5) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_07_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00443c20,&local_c);
  }
  if (staticFive == 5) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00443c20,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00443c20,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00443c70,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__short_fscanf_multiply_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


ulong goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00443c70,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__short_min_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_multiply_45_badData *
                                          2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_45_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_45_badData = 0x8000;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__short_min_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_min_multiply_45_goodG2BData
                                          * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_45_goodG2BData = 0xfffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_min_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__short_min_multiply_45_goodB2GData < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE191_Integer_Underflow__short_min_multiply_45_goodB2GData
                                            * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_multiply_45_goodB2GData = 0x8000;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_22_bad(void)

{
  CWE191_Integer_Underflow__short_min_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_min_sub_22_badSink(0xffff8000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__short_min_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_min_sub_22_goodB2G1Sink(0xffff8000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__short_min_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_min_sub_22_goodB2G2Sink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_min_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_63b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_rand_sub_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_sub_63b_goodB2GSink(local_1a);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 CWE191_Integer_Underflow__short_min_sub_61b_badSource(void)

{
  return 0x8000;
}


undefined8 CWE191_Integer_Underflow__short_min_sub_61b_goodG2BSource(void)

{
  return 0xfffe;
}


undefined8 CWE191_Integer_Underflow__short_min_sub_61b_goodB2GSource(void)

{
  return 0x8000;
}


void CWE191_Integer_Underflow__int_rand_sub_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54e_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54e_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_05_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00443dc0,&local_c);
  }
  if ((staticTrue != 0) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00443dc0,&local_c);
  }
  if (staticFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00443dc0,&local_c);
  }
  if ((staticTrue != 0) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_41_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443e50,&local_a);
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443e50,&local_a);
  goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_41_good(void)

{
  goodB2G();
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


void CWE191_Integer_Underflow__unsigned_int_min_sub_08_bad(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042557e) */

void goodB2G1(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004255d7) */

void goodB2G2(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x004257b0) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042589d) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_34_bad(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00443f90,&local_e);
  local_a = local_e;
  if (local_e < 0) {
    local_c = local_e * 2;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00443f90,&local_e);
  local_a = local_e;
  if (local_e < 0) {
    if (local_e < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_e * 2;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_14_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00443fd0,&local_10);
  }
  if (globalFive == 5) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00443fd0,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00443fd0,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_66b_badSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) < 0) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) < 0) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_22 - 1));
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (local_22 == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_22 - 1));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042617d) */

void CWE191_Integer_Underflow__short_min_multiply_15_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004261b1) */
/* WARNING: Removing unreachable block (ram,0x004261d0) */
/* WARNING: Removing unreachable block (ram,0x004261b9) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004261f9) */
/* WARNING: Removing unreachable block (ram,0x00426218) */
/* WARNING: Removing unreachable block (ram,0x00426201) */

void goodB2G2(void)

{
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_goodB2GData == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_sub_68_goodB2GData - 1))
    ;
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0x7fff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042667f) */

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


/* WARNING: Removing unreachable block (ram,0x004266d5) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_rand_sub_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  local_34 = local_30 - 1;
  printIntLine((ulong)local_34);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_20 = 0xfffffffe;
  local_24 = 0xfffffffd;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if (local_30 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_34 = local_30 - 1;
    printIntLine((ulong)local_34);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_rand_sub_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_rand_sub_22_goodB2G1Global == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_rand_sub_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_rand_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_03_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__short_min_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_multiply_68_badData *
                                          2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__short_min_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_min_multiply_68_goodG2BData
                                          * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_min_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__short_min_multiply_68_goodB2GData < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE191_Integer_Underflow__short_min_multiply_68_goodB2GData
                                            * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_sub_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54e_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54e_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_54e_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_04_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004442f0,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004270e4) */

void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004442f0,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004442f0,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427196) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_31_bad(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00444338,&local_18);
  local_c = local_18;
  local_10 = local_18;
  local_14 = local_18 - 1;
  printUnsignedLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00444338,&local_18);
  local_c = local_18;
  local_10 = local_18;
  if (local_18 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_14 = local_18 - 1;
    printUnsignedLine((ulong)local_14);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444370,&local_a);
  local_14 = local_a;
  CWE191_Integer_Underflow__short_fscanf_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0xfffe;
  local_14 = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444370,&local_a);
  local_14 = local_a;
  CWE191_Integer_Underflow__short_fscanf_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticTrue != 0) {
    local_a = -0x8000;
  }
  if (staticFalse == 0) {
    if (local_a < 0) {
      if (local_a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine(0);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042779c) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_41_bad(void)

{
  badSink(0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_rand_sub_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_rand_sub_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_rand_sub_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_rand_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0044444b,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0044444b,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalTrue != 0) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalTrue != 0) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_sub_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_sub_61b_goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427f98) */

void CWE191_Integer_Underflow__short_min_multiply_34_bad(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042801c) */
/* WARNING: Removing unreachable block (ram,0x0042803b) */
/* WARNING: Removing unreachable block (ram,0x00428024) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_17_bad(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -0x8000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -0x8000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_12 + -1));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + -1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_66b_badSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) < 0) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) < 0) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void badSink(short sParm1)

{
  if ((badStatic != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_21_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 < 0) {
      if (sParm1 < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if ((goodB2G2Static != 0) && (sParm1 < 0)) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if ((goodG2BStatic != 0) && (sParm1 < 0)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__unsigned_int_min_sub_32_bad(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0xffffffff;
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_20 = 0xfffffffe;
  local_24 = 0xfffffffd;
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428654) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = local_28;
  local_18 = local_28;
  local_28[0] = 0;
  local_1c = 0;
  local_20 = 0;
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_15_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004445f0,&local_c);
  local_a = local_c + -1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004445f0,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004445f0,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0x7fff);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = -0x8000;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428b51) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__short_rand_multiply_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  if (sVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


ulong goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54e_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54e_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_54e_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_22_badSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_sub_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G1Global == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G2Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_sub_22_goodB2G2Global != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_22_goodG2BSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_67b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_67b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong CWE191_Integer_Underflow__short_rand_sub_61b_badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


undefined8 CWE191_Integer_Underflow__short_rand_sub_61b_goodG2BSource(void)

{
  return 0xfffe;
}


ulong CWE191_Integer_Underflow__short_rand_sub_61b_goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_08_bad(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444880,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444880,&local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444880,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_04_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429986) */
/* WARNING: Removing unreachable block (ram,0x00429998) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004299e7) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429a20) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_31_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429b52) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x8000;
  local_14 = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0xfffe;
  local_14 = 0xfffe;
  CWE191_Integer_Underflow__short_min_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x8000;
  local_14 = 0x8000;
  CWE191_Integer_Underflow__short_min_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_66_good(void)

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


void CWE191_Integer_Underflow__int_rand_multiply_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticTrue != 0) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFalse == 0) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticTrue != 0) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_41_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_41_good(void)

{
  goodB2G();
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


void CWE191_Integer_Underflow__short_min_sub_08_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
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
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_05_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444a68,&local_c);
  }
  if (staticTrue != 0) {
    local_a = local_c + -1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444a68,&local_c);
  }
  if (staticFalse == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444a68,&local_c);
  }
  if (staticTrue != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_a = local_c + -1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
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
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_41_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444b30,&local_a);
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444b30,&local_a);
  goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_67_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_67b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__short_rand_sub_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


ulong goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53_bad(void)

{
  CWE191_Integer_Underflow__short_min_multiply_53b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_multiply_53b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFalse == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticTrue != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_13_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00444c78,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00444c78,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00444c78,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_34_bad(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00444d08,&local_e);
  local_a = local_e;
  local_c = local_e + -1;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00444d08,&local_e);
  local_a = local_e;
  if (local_e == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_e + -1;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_66b_badSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) < 0) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) < 0) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if (sVar1 < 0) {
    if (sVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__unsigned_int_rand_sub_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  local_34 = local_30 - 1;
  printUnsignedLine((ulong)local_34);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_20 = 0xfffffffe;
  local_24 = 0xfffffffd;
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if (local_30 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_34 = local_30 - 1;
    printUnsignedLine((ulong)local_34);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 0xfffffffe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  else {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  else {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_67b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_67b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_11_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
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
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x8000;
}


void CWE191_Integer_Underflow__short_min_sub_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x8000;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444eb0,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444eb0,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_21_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444ee8,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444ee8,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444ee8,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_03_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00444f30,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00444f30,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00444f30,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_22_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_min_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ca2c) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042cb13) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE191_Integer_Underflow__short_rand_multiply_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0xfffe;
  local_14 = 0xfffe;
  CWE191_Integer_Underflow__short_rand_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE191_Integer_Underflow__short_rand_multiply_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445018,&local_a);
  local_14 = local_a;
  CWE191_Integer_Underflow__short_fscanf_sub_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0xfffe;
  local_14 = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_sub_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445018,&local_a);
  local_14 = local_a;
  CWE191_Integer_Underflow__short_fscanf_sub_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_18_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445020,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445020,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_02_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if ((short)uVar1 < 0) {
    if ((short)uVar1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_sub_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0x7fff);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticTrue != 0) {
    local_a = -0x8000;
  }
  if (staticFalse == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d97c) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_34_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_multiply_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_67_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_multiply_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_multiply_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_65b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_65b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_65b_goodB2GSink(int iParm1)

{
  if (iParm1 < 0) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_12_bad(void)

{
  int iVar1;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_14 = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_004451e8,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_14 - 1;
      printUnsignedLine((ulong)local_10);
    }
  }
  else {
    local_c = local_14 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_004451e8,&local_14);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_004451e8,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_14 - 1;
      printUnsignedLine((ulong)local_10);
    }
  }
  else {
    if (local_14 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_14 - 1;
      printUnsignedLine((ulong)local_c);
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
    printUnsignedLine(0xfffffffd);
  }
  else {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_14_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00445268,&local_c);
  }
  if ((globalFive == 5) && (local_c < 0)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00445268,&local_c);
  }
  if (globalFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00445268,&local_c);
  }
  if ((globalFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_sub_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e89b) */

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


/* WARNING: Removing unreachable block (ram,0x0042e8ee) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform subtraction.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_fscanf_multiply_32_bad(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_004453a0,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (local_1a < 0) {
    local_1c = local_1a * 2;
    printIntLine((ulong)(uint)(int)local_1c);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1c = 0xfffe;
  local_1e = 0xfffc;
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_004453a0,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (local_1a < 0) {
    if (local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_1a * 2;
      printIntLine((ulong)(uint)(int)local_1c);
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_34_bad(void)

{
  printIntLine(0x7fff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ebf4) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__short_min_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((int)local_1c < 0)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((int)local_1c < 0) {
      if ((int)local_1c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(local_1c * 2));
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
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && ((int)local_1c < 0)) {
    if ((int)local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c < 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_15_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_sub_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_67b_badSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_67b_goodG2BSink(short sParm1)

{
  if (sParm1 < 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_67b_goodB2GSink(short sParm1)

{
  if (sParm1 < 0) {
    if (sParm1 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445523,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445523,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445523,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_11_bad(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00445528,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00445528,&local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00445528,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_02_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445570,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445570,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445570,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_rand_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_rand_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_multiply_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
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


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
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


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_04_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004455f8,&local_c);
  if (local_c < 0) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042fd4e) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004455f8,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004455f8,&local_c);
  if (local_c < 0) {
    if (local_c < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042fe1a) */

void goodG2B1(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_31_bad(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445650,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (local_10 < 0) {
    local_e = local_10 * 2;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void goodB2G(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445650,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (local_10 < 0) {
    if (local_10 < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_e = local_10 * 2;
      printIntLine((ulong)(uint)(int)local_e);
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_sub_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_sub_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x8000;
  local_14 = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0xfffe;
  local_14 = 0xfffe;
  CWE191_Integer_Underflow__short_min_sub_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x8000;
  local_14 = 0x8000;
  CWE191_Integer_Underflow__short_min_sub_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__short_min_sub_66_good(void)

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


void CWE191_Integer_Underflow__int_rand_sub_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_18_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430411) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_10_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00445738,&local_10);
  }
  if (globalTrue != 0) {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00445738,&local_10);
  }
  if (globalFalse == 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00445738,&local_10);
  }
  if (globalTrue != 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printUnsignedLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1c == 0) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_41_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalTrue != 0) && ((short)local_1a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFalse == 0) {
    if ((short)local_1a < 0) {
      if ((short)local_1a < -0x3fff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalTrue != 0) && ((short)local_1a < 0)) {
    if ((short)local_1a < -0x3fff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_sub_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_rand_multiply_68_badData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_rand_multiply_68_goodG2BData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_rand_multiply_68_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_rand_multiply_68_goodB2GData * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445880,&local_10);
  local_c = local_10 - 1;
  printUnsignedLine((ulong)local_c);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445880,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printUnsignedLine((ulong)local_c);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53d_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53d_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430ff1) */

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


/* WARNING: Removing unreachable block (ram,0x0043104d) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too small to perform multiplication.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_a < 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffc);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_min_multiply_32_bad(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0x8000;
  local_1c = 0x8000;
  local_1e = 0;
  printIntLine(0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1c = 0xfffe;
  local_1e = 0xfffc;
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431254) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = local_20;
  local_18 = local_20;
  local_20[0] = 0;
  local_1a = 0x8000;
  local_1c = 0x8000;
  printLine("data value is too small to perform multiplication.");
  return;
}


void CWE191_Integer_Underflow__short_min_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 - 1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_sub_18_good(void)

{
  goodB2G();
  goodG2B();
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
  printf((char *)(double)fParm1,&DAT_004459bd);
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
  printf(pcParm1,&DAT_004459da);
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
    __isoc99_sscanf(lVar1,&DAT_004459e8,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_004459f0,&local_14);
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

