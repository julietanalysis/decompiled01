
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00642ff8;
  if (PTR___gmon_start___00642ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004009e0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00643010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00643018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00643020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00643028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00643030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00643038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00643040)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00643048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00643050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00643058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00643060)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00643068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00643070)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00643078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00643080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00643088)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00643090)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00643098)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_006430a0)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006430a8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_006430b0)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006430b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006430c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006430c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006430d0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006430d8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00642ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400bd7) */
/* WARNING: Removing unreachable block (ram,0x00400be1) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400c14) */
/* WARNING: Removing unreachable block (ram,0x00400c1e) */

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


/* WARNING: Removing unreachable block (ram,0x00400c64) */
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
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_44_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_44_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_15_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_15_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_07_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_07_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_21_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_21_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_03_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_03_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_11_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_11_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_45_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_45_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_34_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_34_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_52_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_52_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_10_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_10_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_52_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_52_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_08_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_08_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_04_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_04_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_17_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_17_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_15_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_15_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_42_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_42_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_03_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_03_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_07_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_07_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_02_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_02_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_11_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_11_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_52_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_52_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_44_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_44_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_17_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_17_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_14_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_14_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_31_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_31_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_54_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_54_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_05_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_05_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_07_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_07_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_32_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_32_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_51_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_51_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_12_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_12_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_65_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_65_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_53_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_53_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_31_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_31_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_13_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_13_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_32_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_32_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_54_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_54_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_12_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_12_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_02_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_02_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_51_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_51_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_12_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_12_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_12_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_12_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_07_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_07_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_11_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_11_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_14_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_14_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_13_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_13_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_13_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_13_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_68_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_68_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_03_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_03_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_16_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_16_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_09_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_09_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_51_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_51_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_10_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_10_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_05_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_05_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_09_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_09_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_42_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_42_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_64_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_64_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_18_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_18_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_52_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_52_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_06_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_06_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_41_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_41_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_41_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_41_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_32_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_32_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_02_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_02_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_68_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_68_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_32_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_32_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_34_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_34_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_32_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_32_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_64_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_64_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_06_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_06_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_11_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_11_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_42_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_42_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_66_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_66_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_66_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_66_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_13_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_13_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_14_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_14_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_02_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_02_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_15_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_15_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_21_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_21_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_61_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_61_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_65_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_65_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_34_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_34_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_45_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_45_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_04_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_04_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_42_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_42_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_53_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_09_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_09_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_14_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_14_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_42_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_42_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_08_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_08_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_07_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_07_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_02_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_02_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_06_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_06_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_65_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_65_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_31_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_31_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_68_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_68_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_01_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_01_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_31_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_31_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_63_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_63_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_12_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_12_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_18_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_18_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_63_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_63_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_52_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_52_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_53_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_53_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_22_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_22_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_45_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_45_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_22_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_22_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_66_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_66_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_51_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_51_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_64_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_64_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_18_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_18_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_64_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_64_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_03_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_03_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_22_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_22_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_66_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_66_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_63_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_63_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_17_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_17_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_09_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_09_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_05_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_05_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_64_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_64_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_45_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_45_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_14_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_14_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_63_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_63_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_44_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_44_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_05_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_05_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_18_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_18_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_61_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_61_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_31_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_31_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_18_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_18_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_08_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_08_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_42_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_42_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_18_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_18_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_32_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_32_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_61_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_61_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_08_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_08_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_12_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_12_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_04_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_04_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_66_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_66_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_53_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_53_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_68_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_68_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_10_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_10_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_07_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_07_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_14_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_14_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_21_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_21_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_07_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_07_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_34_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_34_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_52_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_52_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_06_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_06_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_11_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_11_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_67_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_67_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_21_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_21_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_08_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_08_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_44_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_44_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_15_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_15_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_45_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_45_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_03_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_03_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_41_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_41_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_45_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_45_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_31_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_31_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_01_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_01_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_61_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_61_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_06_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_06_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_17_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_17_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_05_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_05_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_16_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_16_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_67_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_67_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_51_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_51_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_42_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_42_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_17_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_17_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_67_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_67_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_45_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_45_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_54_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_54_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_67_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_67_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_41_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_41_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_68_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_68_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_04_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_04_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_52_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_52_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_67_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_67_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_44_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_44_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_22_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_22_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_22_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_22_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_41_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_41_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_53_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_31_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_31_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_16_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_16_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_51_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_51_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_22_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_22_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_15_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_15_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_06_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_06_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_53_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_53_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_01_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_01_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_65_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_65_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_54_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_54_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_09_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_09_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_09_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_09_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_32_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_32_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_54_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_54_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_04_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_04_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_06_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_06_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_51_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_51_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_02_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_02_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_01_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_01_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_09_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_09_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_12_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_12_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_66_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_66_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_18_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_18_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_61_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_61_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_22_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_22_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_10_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_10_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_04_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_04_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_34_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_34_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_67_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_67_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_10_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_10_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_54_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_16_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_16_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_53_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_53_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_68_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_68_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_64_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_64_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_63_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_63_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_01_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_01_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_21_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_21_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_01_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_01_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_68_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_68_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_65_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_65_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_17_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_17_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_04_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_04_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_65_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_65_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_63_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_63_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_10_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_10_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_15_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_15_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_61_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_61_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_11_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_11_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_16_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_16_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_01_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_01_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_41_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_41_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_17_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_17_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_54_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_14_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_14_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_13_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_13_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_03_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_03_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_15_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_15_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_16_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_16_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_41_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_41_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_34_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_34_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_13_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_13_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_13_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_13_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_34_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_34_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_03_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_03_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_63_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_63_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_67_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_67_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_08_good();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_08_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_66_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_66_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_11_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_11_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_05_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_05_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_16_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_16_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_44_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_44_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_05_good();");
  CWE124_Buffer_Underwrite__CWE839_rand_05_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_02_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_02_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_21_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_21_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_21_good();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_21_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_65_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_65_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_64_good();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_64_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_10_good();");
  CWE124_Buffer_Underwrite__CWE839_negative_10_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_44_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_44_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_08_good();");
  CWE124_Buffer_Underwrite__malloc_char_loop_08_good();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_61_good();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_61_good();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_44_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_44_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_15_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_15_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_07_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_07_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_21_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_21_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_03_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_03_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_11_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_11_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_45_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_45_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_34_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_34_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_52_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_52_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_10_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_10_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_52_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_52_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_08_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_08_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_04_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_04_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_17_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_17_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_15_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_15_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_42_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_42_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_03_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_03_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_07_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_07_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_02_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_02_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_11_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_11_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_52_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_52_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_44_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_44_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_17_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_17_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_14_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_14_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_31_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_31_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_54_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_54_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_05_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_05_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_07_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_07_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_32_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_32_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_51_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_51_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_12_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_12_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_65_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_65_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_53_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_53_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_31_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_31_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_13_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_13_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_32_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_32_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_54_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_54_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_12_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_12_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_02_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_02_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_51_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_51_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_12_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_12_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_12_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_12_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_07_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_07_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_11_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_11_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_14_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_14_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_13_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_13_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_13_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_13_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_68_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_68_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_03_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_03_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_16_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_16_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_09_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_09_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_51_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_51_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_10_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_10_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_05_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_05_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_09_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_09_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_42_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_42_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_64_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_64_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_18_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_18_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_52_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_52_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_06_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_06_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_41_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_41_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_41_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_41_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_32_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_32_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_02_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_02_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_68_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_68_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_32_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_32_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_34_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_34_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_32_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_32_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_64_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_64_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_06_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_06_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_11_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_11_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_42_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_42_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_66_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_66_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_66_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_66_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_13_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_13_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_14_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_14_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_02_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_02_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_15_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_15_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_21_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_21_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_61_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_61_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_65_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_65_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_34_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_34_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_45_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_45_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_04_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_04_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_42_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_42_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_53_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_09_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_09_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_14_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_14_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_42_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_42_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_08_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_08_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_07_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_07_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_02_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_02_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_06_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_06_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_65_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_65_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_31_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_31_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_68_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_68_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_01_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_01_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_31_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_31_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_63_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_63_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_12_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_12_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_18_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_18_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_63_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_63_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_52_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_52_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_53_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_53_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_22_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_22_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_45_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_45_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_22_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_22_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_66_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_66_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_51_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_51_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_64_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_64_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_18_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_18_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_64_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_64_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_03_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_03_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_22_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_22_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_66_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_66_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_63_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_63_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_17_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_17_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_09_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_09_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_05_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_05_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_64_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_64_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_45_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_45_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_14_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_14_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_63_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_63_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_44_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_44_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_05_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_05_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_18_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_18_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_61_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_61_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_31_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_31_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_18_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_18_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_08_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_08_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_42_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_42_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_18_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_18_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_32_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_32_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_61_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_61_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_08_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_08_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_12_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_12_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_04_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_04_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_66_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_66_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_53_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_53_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_68_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_68_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_10_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_10_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_07_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_07_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_14_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_14_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_21_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_21_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_07_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_07_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_34_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_34_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_52_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_52_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_06_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_06_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_11_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_11_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_67_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_67_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_21_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_21_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_08_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_08_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_44_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_44_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_15_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_15_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_45_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_45_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_03_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_03_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_41_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_41_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_45_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_45_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_31_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_31_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_01_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_01_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_61_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_61_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_06_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_06_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_17_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_17_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_05_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_05_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_16_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_16_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_67_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_67_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_51_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_51_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_42_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_42_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_17_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_17_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_67_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_67_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_45_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_45_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_54_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_54_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_67_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_67_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_41_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_41_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_68_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_68_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_04_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_04_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_52_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_52_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_67_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_67_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_44_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_44_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_22_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_22_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_22_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_22_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_41_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_41_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_53_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_31_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_31_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_16_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_16_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_51_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_51_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_22_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_22_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_15_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_15_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_06_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_06_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_53_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_53_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_01_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_01_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_65_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_65_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_54_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_54_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_09_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_09_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_09_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_09_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_32_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_32_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_54_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_54_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_04_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_04_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_06_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_06_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_51_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_51_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_02_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_02_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_01_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_01_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_09_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_09_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_12_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_12_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_66_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_66_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_18_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_18_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_61_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_61_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_22_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_22_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_10_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_10_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_04_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_04_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_34_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_34_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_67_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_67_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_10_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_10_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_54_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_16_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_16_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_53_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_53_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_68_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_68_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_64_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_64_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_63_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_63_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_01_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_01_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_21_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_21_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_01_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_01_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_68_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_68_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_65_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_65_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_17_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_17_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_04_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_04_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_65_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_65_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_63_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_63_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_10_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_10_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_15_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_15_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_61_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_61_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_11_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_11_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_16_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_16_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_01_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_01_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_41_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_41_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_17_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_17_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_54_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_14_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_14_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_13_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_13_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_03_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_03_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_15_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_15_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_16_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_16_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_41_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_41_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_34_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_34_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_13_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_13_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_13_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_13_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_34_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_34_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_03_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_03_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_63_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_63_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_67_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_67_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_cpy_08_bad();");
  CWE124_Buffer_Underwrite__malloc_char_cpy_08_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_66_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_66_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_11_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_11_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_05_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_05_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_16_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_16_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_44_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_44_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_rand_05_bad();");
  CWE124_Buffer_Underwrite__CWE839_rand_05_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_02_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_02_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_21_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_21_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memmove_21_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memmove_21_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_65_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_65_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_ncpy_64_bad();");
  CWE124_Buffer_Underwrite__malloc_char_ncpy_64_bad();
  printLine("Calling CWE124_Buffer_Underwrite__CWE839_negative_10_bad();");
  CWE124_Buffer_Underwrite__CWE839_negative_10_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_44_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_44_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_loop_08_bad();");
  CWE124_Buffer_Underwrite__malloc_char_loop_08_bad();
  printLine("Calling CWE124_Buffer_Underwrite__malloc_char_memcpy_61_bad();");
  CWE124_Buffer_Underwrite__malloc_char_memcpy_61_bad();
  return 0;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_68_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_68_badData = (long)__s + -8;
  CWE124_Buffer_Underwrite__malloc_char_loop_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_68_goodG2BData = __s;
  CWE124_Buffer_Underwrite__malloc_char_loop_68b_goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_68_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_52_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_52b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_52b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_05_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_41_badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_41_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_41_badSink((long)__s + -8);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_41_goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_41_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_41_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403c50) */

void CWE124_Buffer_Underwrite__CWE839_negative_15_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403ca2) */
/* WARNING: Removing unreachable block (ram,0x00403ca8) */
/* WARNING: Removing unreachable block (ram,0x00403cd2) */
/* WARNING: Removing unreachable block (ram,0x00403cbe) */
/* WARNING: Removing unreachable block (ram,0x00403cd8) */

void goodB2G1(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403d2c) */
/* WARNING: Removing unreachable block (ram,0x00403d32) */
/* WARNING: Removing unreachable block (ram,0x00403d5c) */
/* WARNING: Removing unreachable block (ram,0x00403d48) */
/* WARNING: Removing unreachable block (ram,0x00403d62) */

void goodB2G2(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403de8) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403e6c) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_51_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_51b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_51b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_51_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54e_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54e_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54e_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_16_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (undefined8 *)((long)local_18 + -8);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  CWE124_Buffer_Underwrite__CWE839_rand_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE124_Buffer_Underwrite__CWE839_rand_66b_goodG2BSink(local_28);
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
  
  local_1c = 0xffffffff;
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
  CWE124_Buffer_Underwrite__CWE839_rand_66b_goodB2GSink(local_38);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_09_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_53b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_53b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53_good(void)

{
  goodG2B();
  return;
}


undefined8 badSource(void)

{
  return 0xfffffffb;
}


void CWE124_Buffer_Underwrite__CWE839_negative_42_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = badSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = goodG2BSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


undefined8 goodB2GSource(void)

{
  return 0xfffffffb;
}


void goodB2G(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = goodB2GSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


long badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_42_bad(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)badSource(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void * goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void goodG2B(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)goodG2BSource(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_42_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_34_bad(void)

{
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (void *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  memmove(local_20,local_98,100);
  *(undefined *)((long)local_20 + 99) = 0;
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_28 = local_18;
  local_20 = local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  memmove(local_20,local_98,100);
  *(undefined *)((long)local_20 + 99) = 0;
  printLine(local_20);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_34_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_66b_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_66b_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_13_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_51_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_51b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_51b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_1c < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
    local_20 = 0;
    while (local_20 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
      local_20 = local_20 + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004052a1) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_1c < 0) || (9 < (int)local_1c)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
    local_20 = 0;
    while (local_20 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_1c < 0) || (9 < (int)local_1c)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
    local_20 = 0;
    while (local_20 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
      local_20 = local_20 + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405421) */
/* WARNING: Removing unreachable block (ram,0x0040549e) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405534) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_63b_badSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_63b_goodG2BSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004056bc) */

void CWE124_Buffer_Underwrite__CWE839_negative_05_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (staticTrue != 0) {
    local_c = 0xfffffffb;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_c = -5;
  }
  if (staticFalse == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004057c8) */
/* WARNING: Removing unreachable block (ram,0x004057ce) */
/* WARNING: Removing unreachable block (ram,0x004057f8) */
/* WARNING: Removing unreachable block (ram,0x004057e4) */
/* WARNING: Removing unreachable block (ram,0x004057fe) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405938) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (staticTrue != 0) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_41_bad(void)

{
  badSink(0xfffffffb);
  return;
}


void goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_52b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_52c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_52b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_52c_goodG2BSink(uParm1);
  return;
}


void badSink(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memcpy_45_badData;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_45_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_45_badData = (long)__s + -8;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memcpy_45_goodG2BData;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_45_goodG2BData = __s;
  goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54e_badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54e_goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_66_bad(void)

{
  undefined local_48 [16];
  long local_38;
  void *local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_38 = (long)local_18 + -8;
  local_10 = local_38;
  CWE124_Buffer_Underwrite__malloc_char_memmove_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_38 = local_18;
  CWE124_Buffer_Underwrite__malloc_char_memmove_66b_goodG2BSink(local_48);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_06_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
    memset(&local_88,0x43,99);
    local_28 = local_28 & 0xffffff;
    *local_10 = local_88;
    local_10[1] = local_80;
    local_10[2] = local_78;
    local_10[3] = local_70;
    local_10[4] = local_68;
    local_10[5] = local_60;
    local_10[6] = local_58;
    local_10[7] = local_50;
    local_10[8] = local_48;
    local_10[9] = local_40;
    local_10[10] = local_38;
    local_10[0xb] = local_30;
    *(uint *)(local_10 + 0xc) = local_28;
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040609b) */

void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 != (undefined8 *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(&local_88,0x43,99);
    local_28 = local_28 & 0xffffff;
    *local_10 = local_88;
    local_10[1] = local_80;
    local_10[2] = local_78;
    local_10[3] = local_70;
    local_10[4] = local_68;
    local_10[5] = local_60;
    local_10[6] = local_58;
    local_10[7] = local_50;
    local_10[8] = local_48;
    local_10[9] = local_40;
    local_10[10] = local_38;
    local_10[0xb] = local_30;
    *(uint *)(local_10 + 0xc) = local_28;
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 != (undefined8 *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(&local_88,0x43,99);
    local_28 = local_28 & 0xffffff;
    *local_10 = local_88;
    local_10[1] = local_80;
    local_10[2] = local_78;
    local_10[3] = local_70;
    local_10[4] = local_68;
    local_10[5] = local_60;
    local_10[6] = local_58;
    local_10[7] = local_50;
    local_10[8] = local_48;
    local_10[9] = local_40;
    local_10[10] = local_38;
    local_10[0xb] = local_30;
    *(uint *)(local_10 + 0xc) = local_28;
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406325) */

void CWE124_Buffer_Underwrite__CWE839_negative_34_bad(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_18 = 0xfffffffb;
  local_14 = 0xfffffffb;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004063b3) */

void goodG2B(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_18 = 7;
  local_14 = 7;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040640f) */
/* WARNING: Removing unreachable block (ram,0x00406415) */
/* WARNING: Removing unreachable block (ram,0x0040643f) */
/* WARNING: Removing unreachable block (ram,0x0040642b) */
/* WARNING: Removing unreachable block (ram,0x00406445) */

void goodB2G(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_66b_badSink(long lParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(lParm1 + 8);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_66b_goodG2BSink(long lParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(lParm1 + 8);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_66b_goodB2GSink(long lParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(lParm1 + 8);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_63_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_63b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_63b_badSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_63b_goodG2BSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_17_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_20;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      strncpy(local_18,local_88,99);
      local_18[99] = 0;
      printLine(local_18);
      return;
    }
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) break;
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_18 = (char *)((long)local_20 + -8);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_20;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      strncpy(local_18,local_88,99);
      local_18[99] = 0;
      printLine(local_18);
      return;
    }
    local_20 = (char *)malloc(100);
    if (local_20 == (char *)0x0) break;
    memset(local_20,0x41,99);
    local_20[99] = 0;
    local_18 = local_20;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_52_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_52b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_52b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_52_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_51b_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_51b_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_16_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = (long)local_20 + -8;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_16_good(void)

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


void CWE124_Buffer_Underwrite__CWE839_negative_08_bad(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -5;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -5;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -5;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_64b_badSink(undefined8 *puParm1)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_18 = (undefined8 *)*puParm1;
  local_10 = puParm1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_18 = local_88;
  local_18[1] = local_80;
  local_18[2] = local_78;
  local_18[3] = local_70;
  local_18[4] = local_68;
  local_18[5] = local_60;
  local_18[6] = local_58;
  local_18[7] = local_50;
  local_18[8] = local_48;
  local_18[9] = local_40;
  local_18[10] = local_38;
  local_18[0xb] = local_30;
  *(uint *)(local_18 + 0xc) = local_28;
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_64b_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_18 = (undefined8 *)*puParm1;
  local_10 = puParm1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_18 = local_88;
  local_18[1] = local_80;
  local_18[2] = local_78;
  local_18[3] = local_70;
  local_18[4] = local_68;
  local_18[5] = local_60;
  local_18[6] = local_58;
  local_18[7] = local_50;
  local_18[8] = local_48;
  local_18[9] = local_40;
  local_18[10] = local_38;
  local_18[0xb] = local_30;
  *(uint *)(local_18 + 0xc) = local_28;
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54e_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54e_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54e_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  local_20 = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE124_Buffer_Underwrite__CWE839_negative_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  local_20 = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_66b_goodB2GSink(local_28);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_68b_badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_ncpy_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_68b_goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_ncpy_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
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


void CWE124_Buffer_Underwrite__CWE839_rand_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_68_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_68_badData = (long)__s + -8;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_68_goodG2BData = __s;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_68b_goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_63_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_memmove_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_memmove_63b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_12_bad(void)

{
  int iVar1;
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_28 = malloc(100);
    if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_28,0x41,99);
    *(undefined *)((long)local_28 + 99) = 0;
    local_10 = local_28;
  }
  else {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (void *)((long)local_20 + -8);
  }
  memset(local_98,0x43,99);
  local_35 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_98[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_28 = malloc(100);
    if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_28,0x41,99);
    *(undefined *)((long)local_28 + 99) = 0;
    local_10 = local_28;
  }
  else {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_98,0x43,99);
  local_35 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_98[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_12_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54e_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54e_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_63b_badSink(int *piParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *piParm1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_63b_goodG2BSink(int *piParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *piParm1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_63b_goodB2GSink(int *piParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *piParm1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
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


void CWE124_Buffer_Underwrite__malloc_char_memcpy_08_bad(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_53c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_67_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_67b_badSink(0xfffffffb);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_67b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_67b_goodB2GSink(0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE124_Buffer_Underwrite__CWE839_rand_61b_badSource(void)

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


undefined8 CWE124_Buffer_Underwrite__CWE839_rand_61b_goodG2BSource(void)

{
  return 7;
}


ulong CWE124_Buffer_Underwrite__CWE839_rand_61b_goodB2GSource(void)

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


void CWE124_Buffer_Underwrite__malloc_char_cpy_52c_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_52c_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_02_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = (long)local_20 + -8;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_51_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_51b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_51b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE124_Buffer_Underwrite__CWE839_negative_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_63b_goodB2GSink(&local_c);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_17_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      memmove(local_18,local_88,100);
      *(undefined *)((long)local_18 + 99) = 0;
      printLine(local_18);
      return;
    }
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) break;
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_18 = (void *)((long)local_20 + -8);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      memmove(local_18,local_88,100);
      *(undefined *)((long)local_18 + 99) = 0;
      printLine(local_18);
      return;
    }
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) break;
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_18 = local_20;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_17_good(void)

{
  goodG2B();
  return;
}


void badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_44_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  badSink((long)__s + -8);
  return;
}


void goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_44_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_52b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_52c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_53b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_53b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_61_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_61b_badSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_61b_goodG2BSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_61b_goodB2GSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_54d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_54d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_01_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = (long)local_20 + -8;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_01_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53d_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53d_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409568) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (staticFive == 5) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_memmove_61b_badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void * CWE124_Buffer_Underwrite__malloc_char_memmove_61b_goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_04_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
    memset(local_88,0x43,99);
    local_25 = 0;
    strncpy(local_10,local_88,99);
    local_10[99] = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00409723) */

void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strncpy(local_10,local_88,99);
    local_10[99] = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strncpy(local_10,local_88,99);
    local_10[99] = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_52_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_52b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_52b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_51b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_51b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_52b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_52c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_17_bad(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -5;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_14 < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_14 * 4) = 1;
      local_18 = 0;
      while (local_18 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_18 * 4));
        local_18 = local_18 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -5;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_14 < 0) || (9 < local_14)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)local_14 * 4) = 1;
      local_18 = 0;
      while (local_18 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_18 * 4));
        local_18 = local_18 + 1;
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_14 < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_14 * 4) = 1;
      local_18 = 0;
      while (local_18 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_18 * 4));
        local_18 = local_18 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_16_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_16_good(void)

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


void CWE124_Buffer_Underwrite__malloc_char_loop_08_bad(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xfffffffb,uParm2,0xfffffffb);
  return;
}


void goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xfffffffb,uParm2,0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_61_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = (void *)CWE124_Buffer_Underwrite__malloc_char_memmove_61b_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = (void *)CWE124_Buffer_Underwrite__malloc_char_memmove_61b_goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_61_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_18_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (void *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_63_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_cpy_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_cpy_63b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_51_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_51b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_51b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_52_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_52b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_52b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_54c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_54c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_51b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_51b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_16_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_65_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_65b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_65b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_65_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_ncpy_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_45_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_45_badData = (long)__s + -8;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_ncpy_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_45_goodG2BData = __s;
  goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_06_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
    memset(local_88,0x43,99);
    local_25 = 0;
    strncpy(local_10,local_88,99);
    local_10[99] = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040adc1) */

void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strncpy(local_10,local_88,99);
    local_10[99] = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strncpy(local_10,local_88,99);
    local_10[99] = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_61_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_61b_badSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_61b_goodG2BSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_61b_goodB2GSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_51_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_51b_badSink(0xfffffffb);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_51b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_51b_goodB2GSink(0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_65b_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_65b_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_51_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_51b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_51b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_51_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_cpy_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_45_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_45_badData = (long)__s + -8;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_cpy_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_45_goodG2BData = __s;
  goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_64b_badSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_18,local_88,99);
  local_18[99] = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_64b_goodG2BSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_18,local_88,99);
  local_18[99] = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_52c_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_52c_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_68_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_68_badData = (long)__s + -8;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_68_goodG2BData = __s;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_68b_goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_20 < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bb2c) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bbb0) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
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


void CWE124_Buffer_Underwrite__CWE839_rand_42_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = badSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = goodG2BSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_10 = goodB2GSource(0xffffffff);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_64_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_64b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_64b_badSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_64b_goodG2BSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_64b_badSink(int *piParm1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  int *local_18;
  int local_c;
  
  local_1c = *piParm1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (local_1c < 10) {
    *(undefined4 *)((long)&local_48 + (long)local_1c * 4) = 1;
    local_c = 0;
    local_18 = piParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_18 = piParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_64b_goodG2BSink(int *piParm1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  int *local_18;
  int local_c;
  
  local_1c = *piParm1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (local_1c < 10) {
    *(undefined4 *)((long)&local_48 + (long)local_1c * 4) = 1;
    local_c = 0;
    local_18 = piParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_18 = piParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_64b_goodB2GSink(int *piParm1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  int *local_18;
  int local_c;
  
  local_1c = *piParm1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((local_1c < 0) || (9 < local_1c)) {
    local_18 = piParm1;
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)local_1c * 4) = 1;
    local_c = 0;
    local_18 = piParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c679) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (staticTrue != 0) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_41_bad(void)

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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
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


void CWE124_Buffer_Underwrite__CWE839_rand_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_cpy_61b_badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void * CWE124_Buffer_Underwrite__malloc_char_cpy_61b_goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_52b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_52c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_64_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_cpy_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_cpy_64b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_28 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_28 = rand();
    local_28 = local_28 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if ((int)local_28 < 10) {
    *(undefined4 *)((long)&local_58 + (long)(int)local_28 * 4) = 1;
    local_1c = 0;
    local_24 = local_28;
    local_20 = local_28;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    local_24 = local_28;
    local_20 = local_28;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cc52) */

void goodG2B(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_18 = 7;
  local_14 = 7;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_28 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_28 = rand();
    local_28 = local_28 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (((int)local_28 < 0) || (9 < (int)local_28)) {
    local_24 = local_28;
    local_20 = local_28;
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_58 + (long)(int)local_28 * 4) = 1;
    local_1c = 0;
    local_24 = local_28;
    local_20 = local_28;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


long badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_42_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = (void *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void * goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void goodG2B(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = (void *)goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_42_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_11_bad(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_11_good(void)

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


void CWE124_Buffer_Underwrite__malloc_char_memmove_08_bad(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_66b_badSink(long lParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(lParm1 + 8);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_66b_goodG2BSink(long lParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(lParm1 + 8);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_66b_goodB2GSink(long lParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(lParm1 + 8);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52b_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_52c_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52b_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52b_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_52c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_44_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  badSink((long)__s + -8);
  return;
}


void goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_44_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_53c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_53c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_68_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_68_badData = (long)__s + -8;
  CWE124_Buffer_Underwrite__malloc_char_memmove_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_68_goodG2BData = __s;
  CWE124_Buffer_Underwrite__malloc_char_memmove_68b_goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_52c_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_52c_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53c_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_53d_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53c_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53c_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_05_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_ncpy_61b_badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void * CWE124_Buffer_Underwrite__malloc_char_ncpy_61b_goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_14_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54b_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54c_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54b_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54b_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54c_goodB2GSink((ulong)uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__malloc_char_ncpy_32_bad(void)

{
  char local_a8 [99];
  undefined local_45;
  char *local_38;
  char *local_30;
  void *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = (char *)0x0;
  local_20 = (char *)0x0;
  local_28 = malloc(100);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  *(undefined *)((long)local_28 + 99) = 0;
  local_20 = (char *)((long)local_28 + -8);
  *local_10 = local_20;
  local_30 = *local_18;
  memset(local_a8,0x43,99);
  local_45 = 0;
  strncpy(local_30,local_a8,99);
  local_30[99] = 0;
  printLine(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char local_a8 [99];
  undefined local_45;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = (char *)0x0;
  local_20 = (char *)0x0;
  local_28 = (char *)malloc(100);
  if (local_28 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  local_28[99] = 0;
  local_20 = local_28;
  *local_10 = local_28;
  local_30 = *local_18;
  memset(local_a8,0x43,99);
  local_45 = 0;
  strncpy(local_30,local_a8,99);
  local_30[99] = 0;
  printLine(local_30);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_66b_badSink(long lParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(lParm1 + 0x10);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_66b_goodG2BSink(long lParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(lParm1 + 0x10);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_65b_badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_65b_goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (badStatic != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_21_bad(void)

{
  badStatic = 1;
  badSink(0xfffffffb);
  return;
}


void goodB2G1Sink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (goodB2G1Static == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
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
  goodB2G1Sink(0xfffffffb);
  return;
}


void goodB2G2Sink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (goodB2G2Static != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xfffffffb);
  return;
}


void goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (goodG2BStatic != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_68b_badSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_68_badData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_rand_68_badData < 10) {
    *(undefined4 *)((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_rand_68_badData * 4) =
         1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_68b_goodG2BSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_68_goodG2BData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_rand_68_goodG2BData < 10) {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_rand_68_goodG2BData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_68b_goodB2GSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData < 0) ||
     (9 < CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


long badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (badStatic != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_21_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  badStatic = 1;
  local_18 = badSource(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (goodG2B1Static == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  goodG2B1Static = 0;
  local_18 = goodG2B1Source(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (goodG2B2Static != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  goodG2B2Static = 1;
  local_18 = goodG2B2Source(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_15_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = (long)local_20 + -8;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_53d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_53d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_31_bad(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (char *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  strncpy(local_28,local_98,99);
  local_28[99] = 0;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  local_20 = local_18;
  local_28 = local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  strncpy(local_28,local_98,99);
  local_28[99] = 0;
  printLine(local_28);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54b_badSink(0xfffffffb);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54b_goodB2GSink(0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


long badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_42_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_18 = badSource(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void * goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_18 = goodG2BSource(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_42_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_14_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__malloc_char_cpy_32_bad(void)

{
  char local_a8 [99];
  undefined local_45;
  char *local_38;
  char *local_30;
  void *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = (char *)0x0;
  local_20 = (char *)0x0;
  local_28 = malloc(100);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  *(undefined *)((long)local_28 + 99) = 0;
  local_20 = (char *)((long)local_28 + -8);
  *local_10 = local_20;
  local_30 = *local_18;
  memset(local_a8,0x43,99);
  local_45 = 0;
  strcpy(local_30,local_a8);
  printLine(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char local_a8 [99];
  undefined local_45;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = (char *)0x0;
  local_20 = (char *)0x0;
  local_28 = (char *)malloc(100);
  if (local_28 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  local_28[99] = 0;
  local_20 = local_28;
  *local_10 = local_28;
  local_30 = *local_18;
  memset(local_a8,0x43,99);
  local_45 = 0;
  strcpy(local_30,local_a8);
  printLine(local_30);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_66_bad(void)

{
  undefined local_48 [16];
  long local_38;
  void *local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_38 = (long)local_18 + -8;
  local_10 = local_38;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_38 = local_18;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_66b_goodG2BSink(local_48);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53b_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_53c_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53b_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53b_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_65_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_65b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_65b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_67_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_67b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_67b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_67b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_67b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_54b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_54b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fa99) */

void CWE124_Buffer_Underwrite__CWE839_negative_07_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (staticFive == 5) {
    local_c = 0xfffffffb;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fb0b) */
/* WARNING: Removing unreachable block (ram,0x0040fb11) */
/* WARNING: Removing unreachable block (ram,0x0040fb3b) */
/* WARNING: Removing unreachable block (ram,0x0040fb27) */
/* WARNING: Removing unreachable block (ram,0x0040fb41) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fba9) */
/* WARNING: Removing unreachable block (ram,0x0040fbaf) */
/* WARNING: Removing unreachable block (ram,0x0040fbd9) */
/* WARNING: Removing unreachable block (ram,0x0040fbc5) */
/* WARNING: Removing unreachable block (ram,0x0040fbdf) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fd1d) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (staticFive == 5) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_65b_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_65b_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_65b_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_68_badData = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_68_badData =
         CWE124_Buffer_Underwrite__CWE839_rand_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE124_Buffer_Underwrite__CWE839_rand_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_68_goodG2BData = 7;
  CWE124_Buffer_Underwrite__CWE839_rand_68b_goodG2BSink();
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
    CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData =
         CWE124_Buffer_Underwrite__CWE839_rand_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE124_Buffer_Underwrite__CWE839_rand_68b_goodB2GSink();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_ncpy_22_badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_ncpy_22_badGlobal != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B1Global == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B2Global != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_54c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_05_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  if (staticTrue != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_22_bad(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_22_badGlobal = 1;
  local_10 = (undefined8 *)CWE124_Buffer_Underwrite__malloc_char_memcpy_22_badSource(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B1Source(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B2Source(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_03_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (void *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_41_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_41_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_41_badSink((long)__s + -8);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_41_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_41_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_41_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_68b_badSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memmove_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_68b_goodG2BSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memmove_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_04_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
    memset(local_88,0x43,99);
    local_25 = 0;
    strcpy(local_10,local_88);
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00410b81) */

void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strcpy(local_10,local_88);
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strcpy(local_10,local_88);
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_31_bad(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (char *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  strcpy(local_28,local_98);
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  local_20 = local_18;
  local_28 = local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  strcpy(local_28,local_98);
  printLine(local_28);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53c_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53d_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53c_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53c_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53_bad(void)

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
  CWE124_Buffer_Underwrite__CWE839_rand_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_53b_goodG2BSink(7);
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
  CWE124_Buffer_Underwrite__CWE839_rand_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_34_bad(void)

{
  undefined local_a8 [99];
  undefined local_45;
  long local_38;
  long local_28;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_38 = (long)local_20 + -8;
  local_28 = local_38;
  local_18 = local_38;
  memset(local_a8,0x43,99);
  local_45 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_28 + local_10) = local_a8[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_28 + 99) = 0;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_a8 [99];
  undefined local_45;
  void *local_38;
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  local_38 = local_20;
  local_28 = local_20;
  memset(local_a8,0x43,99);
  local_45 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_28 + local_10) = local_a8[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_28 + 99) = 0;
  printLine(local_28);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_34_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_66b_badSink(long lParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = *(long *)(lParm1 + 0x10);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_66b_goodG2BSink(long lParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = *(long *)(lParm1 + 0x10);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE124_Buffer_Underwrite__CWE839_negative_65b_badSink(0xfffffffb,uParm2,0xfffffffb);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE124_Buffer_Underwrite__CWE839_negative_65b_goodG2BSink(7,uParm2,7);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE124_Buffer_Underwrite__CWE839_negative_65b_goodB2GSink(0xfffffffb,uParm2,0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_22_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_22_badGlobal = 1;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_ncpy_22_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B1Global = 0;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B2Global = 1;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_ncpy_22_goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_65_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_65b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_65b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_65_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_53c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_67_bad(void)

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
  CWE124_Buffer_Underwrite__CWE839_rand_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_67b_goodG2BSink(7);
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
  CWE124_Buffer_Underwrite__CWE839_rand_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_22_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_rand_22_badGlobal != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G1Sink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G1Global == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G2Sink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G2Global != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_22_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_rand_22_goodG2BGlobal != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_cpy_22_badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_cpy_22_badGlobal != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B1Global == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B2Global != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_52c_badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_52c_goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54d_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54e_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_68b_badSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_68_badData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_negative_68_badData < 10) {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_negative_68_badData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_68b_goodG2BSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_68_goodG2BData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_negative_68_goodG2BData < 10) {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_negative_68_goodG2BData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_68b_goodB2GSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_68_goodB2GData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((CWE124_Buffer_Underwrite__CWE839_negative_68_goodB2GData < 0) ||
     (9 < CWE124_Buffer_Underwrite__CWE839_negative_68_goodB2GData)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_negative_68_goodB2GData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52b_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_52c_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52b_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52b_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_63b_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*puParm1;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_63b_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*puParm1;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54e_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54e_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_66_bad(void)

{
  undefined local_48 [16];
  long local_38;
  void *local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_38 = (long)local_18 + -8;
  local_10 = local_38;
  CWE124_Buffer_Underwrite__malloc_char_loop_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_38 = local_18;
  CWE124_Buffer_Underwrite__malloc_char_loop_66b_goodG2BSink(local_48);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_66_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_13_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_53b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_53b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_22_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_22_badGlobal = 1;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_cpy_22_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B1Global = 0;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B2Global = 1;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_cpy_22_goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53b_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53c_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53b_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53b_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52c_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52c_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52c_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52_bad(void)

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
  CWE124_Buffer_Underwrite__CWE839_rand_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_52b_goodG2BSink(7);
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
  CWE124_Buffer_Underwrite__CWE839_rand_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_68_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_68_badData = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_68_goodG2BData = 7;
  CWE124_Buffer_Underwrite__CWE839_negative_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_68_goodB2GData = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_68b_goodB2GSink();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_20 < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412e1e) */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_03_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_14_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_13_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_52b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_52c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_52b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_18_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53b_badSink(0xfffffffb);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_53b_goodB2GSink(0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_51_bad(void)

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
  CWE124_Buffer_Underwrite__CWE839_rand_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_51b_goodG2BSink(7);
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
  CWE124_Buffer_Underwrite__CWE839_rand_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_12_bad(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_20;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = (char *)malloc(100);
    if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    local_20[99] = 0;
    local_10 = local_20;
  }
  else {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = (char *)malloc(100);
    if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    local_20[99] = 0;
    local_10 = local_20;
  }
  else {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_12_good(void)

{
  goodG2B();
  return;
}


long badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (badStatic != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_21_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  badStatic = 1;
  local_10 = (char *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (goodG2B1Static == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void goodG2B1(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  goodG2B1Static = 0;
  local_10 = (char *)goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (goodG2B2Static != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void goodG2B2(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  goodG2B2Static = 1;
  local_10 = (char *)goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_03_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_14_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_52_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_52b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_52b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_52_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__malloc_char_memcpy_32_bad(void)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  long local_38;
  undefined8 *local_30;
  void *local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0;
  local_28 = malloc(100);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  *(undefined *)((long)local_28 + 99) = 0;
  local_20 = (long)local_28 + -8;
  *local_10 = local_20;
  local_30 = (undefined8 *)*local_18;
  memset(&local_a8,0x43,99);
  local_48 = local_48 & 0xffffff;
  *local_30 = local_a8;
  local_30[1] = local_a0;
  local_30[2] = local_98;
  local_30[3] = local_90;
  local_30[4] = local_88;
  local_30[5] = local_80;
  local_30[6] = local_78;
  local_30[7] = local_70;
  local_30[8] = local_68;
  local_30[9] = local_60;
  local_30[10] = local_58;
  local_30[0xb] = local_50;
  *(uint *)(local_30 + 0xc) = local_48;
  *(undefined *)((long)local_30 + 99) = 0;
  printLine(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  void *local_38;
  undefined8 *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = (void *)0x0;
  local_20 = (void *)0x0;
  local_28 = malloc(100);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  *(undefined *)((long)local_28 + 99) = 0;
  local_20 = local_28;
  *local_10 = local_28;
  local_30 = (undefined8 *)*local_18;
  memset(&local_a8,0x43,99);
  local_48 = local_48 & 0xffffff;
  *local_30 = local_a8;
  local_30[1] = local_a0;
  local_30[2] = local_98;
  local_30[3] = local_90;
  local_30[4] = local_88;
  local_30[5] = local_80;
  local_30[6] = local_78;
  local_30[7] = local_70;
  local_30[8] = local_68;
  local_30[9] = local_60;
  local_30[10] = local_58;
  local_30[0xb] = local_50;
  *(uint *)(local_30 + 0xc) = local_48;
  *(undefined *)((long)local_30 + 99) = 0;
  printLine(local_30);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_32_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_45_badData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_rand_45_badData < 10) {
    *(undefined4 *)((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_rand_45_badData * 4) =
         1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_45_badData = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_45_badData =
         CWE124_Buffer_Underwrite__CWE839_rand_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_45_goodG2BData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_rand_45_goodG2BData < 10) {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_rand_45_goodG2BData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData < 0) ||
     (9 < CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
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
    CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData = rand();
    CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData =
         CWE124_Buffer_Underwrite__CWE839_rand_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_09_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_18_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_67b_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = puParm1;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_67b_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = puParm1;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_02_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


long badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (badStatic != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_21_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  badStatic = 1;
  local_10 = (char *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (goodG2B1Static == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void goodG2B1(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  goodG2B1Static = 0;
  local_10 = (char *)goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (goodG2B2Static != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void goodG2B2(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  goodG2B2Static = 1;
  local_10 = (char *)goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_12_bad(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_20;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = (char *)malloc(100);
    if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    local_20[99] = 0;
    local_10 = local_20;
  }
  else {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = (char *)malloc(100);
    if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    local_20[99] = 0;
    local_10 = local_20;
  }
  else {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_63b_badSink(int *piParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *piParm1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_63b_goodG2BSink(int *piParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *piParm1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_10 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_63b_goodB2GSink(int *piParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = *piParm1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_10 < 0) || (9 < local_10)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_10 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_04_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
    memset(&local_88,0x43,99);
    local_28 = local_28 & 0xffffff;
    *local_10 = local_88;
    local_10[1] = local_80;
    local_10[2] = local_78;
    local_10[3] = local_70;
    local_10[4] = local_68;
    local_10[5] = local_60;
    local_10[6] = local_58;
    local_10[7] = local_50;
    local_10[8] = local_48;
    local_10[9] = local_40;
    local_10[10] = local_38;
    local_10[0xb] = local_30;
    *(uint *)(local_10 + 0xc) = local_28;
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00415551) */

void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 != (undefined8 *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(&local_88,0x43,99);
    local_28 = local_28 & 0xffffff;
    *local_10 = local_88;
    local_10[1] = local_80;
    local_10[2] = local_78;
    local_10[3] = local_70;
    local_10[4] = local_68;
    local_10[5] = local_60;
    local_10[6] = local_58;
    local_10[7] = local_50;
    local_10[8] = local_48;
    local_10[9] = local_40;
    local_10[10] = local_38;
    local_10[0xb] = local_30;
    *(uint *)(local_10 + 0xc) = local_28;
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 != (undefined8 *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(&local_88,0x43,99);
    local_28 = local_28 & 0xffffff;
    *local_10 = local_88;
    local_10[1] = local_80;
    local_10[2] = local_78;
    local_10[3] = local_70;
    local_10[4] = local_68;
    local_10[5] = local_60;
    local_10[6] = local_58;
    local_10[7] = local_50;
    local_10[8] = local_48;
    local_10[9] = local_40;
    local_10[10] = local_38;
    local_10[0xb] = local_30;
    *(uint *)(local_10 + 0xc) = local_28;
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_31_bad(void)

{
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined8 *local_28;
  undefined8 *local_20;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (undefined8 *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(&local_98,0x43,99);
  local_38 = local_38 & 0xffffff;
  *local_28 = local_98;
  local_28[1] = local_90;
  local_28[2] = local_88;
  local_28[3] = local_80;
  local_28[4] = local_78;
  local_28[5] = local_70;
  local_28[6] = local_68;
  local_28[7] = local_60;
  local_28[8] = local_58;
  local_28[9] = local_50;
  local_28[10] = local_48;
  local_28[0xb] = local_40;
  *(uint *)(local_28 + 0xc) = local_38;
  *(undefined *)((long)local_28 + 99) = 0;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_20 = local_18;
  local_28 = local_18;
  memset(&local_98,0x43,99);
  local_38 = local_38 & 0xffffff;
  *local_28 = local_98;
  local_28[1] = local_90;
  local_28[2] = local_88;
  local_28[3] = local_80;
  local_28[4] = local_78;
  local_28[5] = local_70;
  local_28[6] = local_68;
  local_28[7] = local_60;
  local_28[8] = local_58;
  local_28[9] = local_50;
  local_28[10] = local_48;
  local_28[0xb] = local_40;
  *(uint *)(local_28 + 0xc) = local_38;
  *(undefined *)((long)local_28 + 99) = 0;
  printLine(local_28);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_10_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFalse == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalTrue != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_53d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_52b_badSink(0xfffffffb);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_52b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_52b_goodB2GSink(0xfffffffb);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54e_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54e_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_67_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_67b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_67b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_67_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00415f5c) */

void CWE124_Buffer_Underwrite__CWE839_negative_16_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00415fae) */
/* WARNING: Removing unreachable block (ram,0x00415fb4) */
/* WARNING: Removing unreachable block (ram,0x00415fde) */
/* WARNING: Removing unreachable block (ram,0x00415fca) */
/* WARNING: Removing unreachable block (ram,0x00415fe4) */

void goodB2G(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041606a) */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_68b_badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_cpy_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_68b_goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_cpy_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void badSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memmove_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_45_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_45_badData = (long)__s + -8;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memmove_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_45_goodG2BData = __s;
  goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_45_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53d_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53d_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_06_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
    memset(local_88,0x43,99);
    local_25 = 0;
    memmove(local_10,local_88,100);
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00416454) */

void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    memmove(local_10,local_88,100);
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    memmove(local_10,local_88,100);
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_memcpy_22_badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_memcpy_22_badGlobal != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B1Global == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_memcpy_22_goodG2B2Global != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_10_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFalse == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalTrue != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_54b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_54b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE124_Buffer_Underwrite__CWE839_rand_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE124_Buffer_Underwrite__CWE839_rand_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE124_Buffer_Underwrite__CWE839_rand_64b_goodB2GSink(local_1c);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_14_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__malloc_char_loop_32_bad(void)

{
  undefined local_a8 [99];
  undefined local_45;
  long local_40;
  long local_38;
  void *local_30;
  long local_28;
  long *local_20;
  long *local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_40 = 0;
  local_28 = 0;
  local_30 = malloc(100);
  if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_30,0x41,99);
  *(undefined *)((long)local_30 + 99) = 0;
  local_28 = (long)local_30 + -8;
  *local_18 = local_28;
  local_38 = *local_20;
  memset(local_a8,0x43,99);
  local_45 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_38 + local_10) = local_a8[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_38 + 99) = 0;
  printLine(local_38);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_a8 [99];
  undefined local_45;
  void *local_40;
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_40 = (void *)0x0;
  local_28 = (void *)0x0;
  local_30 = malloc(100);
  if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_30,0x41,99);
  *(undefined *)((long)local_30 + 99) = 0;
  local_28 = local_30;
  *local_18 = local_30;
  local_38 = *local_20;
  memset(local_a8,0x43,99);
  local_45 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_38 + local_10) = local_a8[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_38 + 99) = 0;
  printLine(local_38);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_32_good(void)

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


void CWE124_Buffer_Underwrite__malloc_char_ncpy_08_bad(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_54d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE124_Buffer_Underwrite__CWE839_rand_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE124_Buffer_Underwrite__CWE839_rand_65b_goodG2BSink(7,uParm2,7);
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
  CWE124_Buffer_Underwrite__CWE839_rand_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53d_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_53d_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_64b_badSink(void **ppvParm1)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_10 = ppvParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_18,local_88,100);
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_64b_goodG2BSink(void **ppvParm1)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_10 = ppvParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_18,local_88,100);
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void badSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_45_badData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_negative_45_badData < 10) {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_negative_45_badData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_45_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_45_badData = 0xfffffffb;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_45_goodG2BData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (CWE124_Buffer_Underwrite__CWE839_negative_45_goodG2BData < 10) {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_negative_45_goodG2BData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_10 = CWE124_Buffer_Underwrite__CWE839_negative_45_goodB2GData;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((CWE124_Buffer_Underwrite__CWE839_negative_45_goodB2GData < 0) ||
     (9 < CWE124_Buffer_Underwrite__CWE839_negative_45_goodB2GData)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)
     ((long)&local_38 + (long)CWE124_Buffer_Underwrite__CWE839_negative_45_goodB2GData * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void goodB2G(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_45_goodB2GData = 0xfffffffb;
  goodB2GSink();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_09_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417969) */

void CWE124_Buffer_Underwrite__CWE839_negative_06_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041799f) */
/* WARNING: Removing unreachable block (ram,0x004179d9) */
/* WARNING: Removing unreachable block (ram,0x004179df) */
/* WARNING: Removing unreachable block (ram,0x00417a09) */
/* WARNING: Removing unreachable block (ram,0x004179f5) */
/* WARNING: Removing unreachable block (ram,0x00417a0f) */

void goodB2G1(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417a75) */
/* WARNING: Removing unreachable block (ram,0x00417a7b) */
/* WARNING: Removing unreachable block (ram,0x00417aa5) */
/* WARNING: Removing unreachable block (ram,0x00417a91) */
/* WARNING: Removing unreachable block (ram,0x00417aab) */

void goodB2G2(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417ad2) */
/* WARNING: Removing unreachable block (ram,0x00417b4f) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417be5) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__malloc_char_memmove_32_bad(void)

{
  undefined local_a8 [99];
  undefined local_45;
  void *local_38;
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = (void *)0x0;
  local_20 = (void *)0x0;
  local_28 = malloc(100);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  *(undefined *)((long)local_28 + 99) = 0;
  local_20 = (void *)((long)local_28 + -8);
  *local_10 = local_20;
  local_30 = *local_18;
  memset(local_a8,0x43,99);
  local_45 = 0;
  memmove(local_30,local_a8,100);
  *(undefined *)((long)local_30 + 99) = 0;
  printLine(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_a8 [99];
  undefined local_45;
  void *local_38;
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = (void *)0x0;
  local_20 = (void *)0x0;
  local_28 = malloc(100);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_28,0x41,99);
  *(undefined *)((long)local_28 + 99) = 0;
  local_20 = local_28;
  *local_10 = local_28;
  local_30 = *local_18;
  memset(local_a8,0x43,99);
  local_45 = 0;
  memmove(local_30,local_a8,100);
  *(undefined *)((long)local_30 + 99) = 0;
  printLine(local_30);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54d_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54e_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_53d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_53c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_53d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_04_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  local_20 = malloc(100);
  if (local_20 != (void *)0x0) {
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
    memset(local_88,0x43,99);
    local_25 = 0;
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined *)(local_10 + local_18) = local_88[local_18];
      local_18 = local_18 + 1;
    }
    *(undefined *)(local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00417f37) */

void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 != (void *)0x0) {
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
    memset(local_88,0x43,99);
    local_25 = 0;
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined *)((long)local_10 + local_18) = local_88[local_18];
      local_18 = local_18 + 1;
    }
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 != (void *)0x0) {
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
    memset(local_88,0x43,99);
    local_25 = 0;
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined *)((long)local_10 + local_18) = local_88[local_18];
      local_18 = local_18 + 1;
    }
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_31_bad(void)

{
  undefined local_98 [99];
  undefined local_35;
  long local_30;
  long local_28;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_30 = (long)local_20 + -8;
  local_28 = local_30;
  local_18 = local_30;
  memset(local_98,0x43,99);
  local_35 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_30 + local_10) = local_98[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_30 + 99) = 0;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  undefined local_98 [99];
  undefined local_35;
  void *local_30;
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  local_28 = local_20;
  local_30 = local_20;
  memset(local_98,0x43,99);
  local_35 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_30 + local_10) = local_98[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_30 + 99) = 0;
  printLine(local_30);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_31_good(void)

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


void CWE124_Buffer_Underwrite__malloc_char_cpy_08_bad(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_64_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_memmove_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_memmove_64b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_64_good(void)

{
  goodG2B();
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_memcpy_61b_badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void * CWE124_Buffer_Underwrite__malloc_char_memcpy_61b_goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void CWE124_Buffer_Underwrite__CWE839_negative_64b_badSink(int *piParm1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  int *local_18;
  int local_c;
  
  local_1c = *piParm1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (local_1c < 10) {
    *(undefined4 *)((long)&local_48 + (long)local_1c * 4) = 1;
    local_c = 0;
    local_18 = piParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_18 = piParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_64b_goodG2BSink(int *piParm1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  int *local_18;
  int local_c;
  
  local_1c = *piParm1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (local_1c < 10) {
    *(undefined4 *)((long)&local_48 + (long)local_1c * 4) = 1;
    local_c = 0;
    local_18 = piParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_18 = piParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_64b_goodB2GSink(int *piParm1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  int *local_18;
  int local_c;
  
  local_1c = *piParm1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((local_1c < 0) || (9 < local_1c)) {
    local_18 = piParm1;
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)local_1c * 4) = 1;
    local_c = 0;
    local_18 = piParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_loop_22_badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_loop_22_badGlobal != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B1Global == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B2Global != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_68_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_68_badData = (long)__s + -8;
  CWE124_Buffer_Underwrite__malloc_char_cpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_68_goodG2BData = __s;
  CWE124_Buffer_Underwrite__malloc_char_cpy_68b_goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_54b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_02_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


long badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (badStatic != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_21_bad(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (goodG2B1Static == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void goodG2B1(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (goodG2B2Static != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void goodG2B2(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_03_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (undefined8 *)((long)local_18 + -8);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_67_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_67b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_67b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_18_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (undefined8 *)((long)local_18 + -8);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_65b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_65b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE124_Buffer_Underwrite__CWE839_negative_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  CWE124_Buffer_Underwrite__CWE839_negative_64b_goodB2GSink(&local_c);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_11_bad(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_22_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_22_badGlobal = 1;
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_22_badSource(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B1Global = 0;
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B1Source(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B2Global = 1;
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_22_goodG2B2Source(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_12_bad(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_20;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = (undefined8 *)malloc(100);
    if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = (undefined8 *)malloc(100);
    if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54d_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_54e_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_54d_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_loop_54e_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_65_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_65b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_65b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_11_bad(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE124_Buffer_Underwrite__CWE839_rand_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE124_Buffer_Underwrite__CWE839_rand_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE124_Buffer_Underwrite__CWE839_rand_63b_goodB2GSink(local_1c);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_34_bad(void)

{
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined8 *local_28;
  undefined8 *local_20;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (undefined8 *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(&local_98,0x43,99);
  local_38 = local_38 & 0xffffff;
  *local_20 = local_98;
  local_20[1] = local_90;
  local_20[2] = local_88;
  local_20[3] = local_80;
  local_20[4] = local_78;
  local_20[5] = local_70;
  local_20[6] = local_68;
  local_20[7] = local_60;
  local_20[8] = local_58;
  local_20[9] = local_50;
  local_20[10] = local_48;
  local_20[0xb] = local_40;
  *(uint *)(local_20 + 0xc) = local_38;
  *(undefined *)((long)local_20 + 99) = 0;
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_28 = local_18;
  local_20 = local_18;
  memset(&local_98,0x43,99);
  local_38 = local_38 & 0xffffff;
  *local_20 = local_98;
  local_20[1] = local_90;
  local_20[2] = local_88;
  local_20[3] = local_80;
  local_20[4] = local_78;
  local_20[5] = local_70;
  local_20[6] = local_68;
  local_20[7] = local_60;
  local_20[8] = local_58;
  local_20[9] = local_50;
  local_20[10] = local_48;
  local_20[0xb] = local_40;
  *(uint *)(local_20 + 0xc) = local_38;
  *(undefined *)((long)local_20 + 99) = 0;
  printLine(local_20);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_11_bad(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_02_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (undefined8 *)((long)local_18 + -8);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54d_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_54e_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_cpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_10_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_ncpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_01_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (void *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_63b_badSink(void **ppvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = *ppvParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_63b_goodG2BSink(void **ppvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = *ppvParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_01_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_10_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_03_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = (long)local_20 + -8;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_65_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_65b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_65b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_18_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = (long)local_20 + -8;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_20,0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)((long)local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)((long)local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_18_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_41_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_41_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_41_badSink((long)__s + -8);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_41_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_41_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_01_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (undefined8 *)((long)local_18 + -8);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53d_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53d_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_52c_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_52c_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_51b_badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_51b_goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52c_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52c_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_52c_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memcpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_67b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_67b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_64_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_64b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_64_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_45_badData;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_45_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_45_badData = (long)__s + -8;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_45_goodG2BData;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_45_goodG2BData = __s;
  goodG2BSink();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_45_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_06_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  local_20 = malloc(100);
  if (local_20 != (void *)0x0) {
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
    memset(local_88,0x43,99);
    local_25 = 0;
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined *)(local_10 + local_18) = local_88[local_18];
      local_18 = local_18 + 1;
    }
    *(undefined *)(local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041c5d9) */

void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 != (void *)0x0) {
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
    memset(local_88,0x43,99);
    local_25 = 0;
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined *)((long)local_10 + local_18) = local_88[local_18];
      local_18 = local_18 + 1;
    }
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 != (void *)0x0) {
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
    memset(local_88,0x43,99);
    local_25 = 0;
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined *)((long)local_10 + local_18) = local_88[local_18];
      local_18 = local_18 + 1;
    }
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_68b_badSink(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_68_badData;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_68b_goodG2BSink(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_68_goodG2BData;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_44_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  badSink((long)__s + -8);
  return;
}


void goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_17_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_20;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      strcpy(local_18,local_88);
      printLine(local_18);
      return;
    }
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) break;
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_18 = (char *)((long)local_20 + -8);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_20;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      strcpy(local_18,local_88);
      printLine(local_18);
      return;
    }
    local_20 = (char *)malloc(100);
    if (local_20 == (char *)0x0) break;
    memset(local_20,0x41,99);
    local_20[99] = 0;
    local_18 = local_20;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_67b_badSink(long lParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = lParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_67b_goodG2BSink(long lParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = lParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_44_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  badSink((long)__s + -8);
  return;
}


void goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d1c9) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (globalFive == 5) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__CWE839_rand_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_28;
  int local_1c;
  
  local_28 = &local_3c;
  local_30 = &local_3c;
  local_3c = 0xffffffff;
  local_34 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_34 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_34 = rand();
    local_34 = local_34 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_28 = local_34;
  local_38 = *local_30;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if ((int)local_38 < 10) {
    *(undefined4 *)((long)&local_68 + (long)(int)local_38 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_68 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d399) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0xffffffff;
  local_24 = 7;
  local_28 = 7;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_28;
  int local_1c;
  
  local_28 = &local_3c;
  local_30 = &local_3c;
  local_3c = 0xffffffff;
  local_34 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_34 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_34 = rand();
    local_34 = local_34 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_28 = local_34;
  local_38 = *local_30;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (((int)local_38 < 0) || (9 < (int)local_38)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_68 + (long)(int)local_38 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_68 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_44_bad(undefined8 uParm1,undefined8 uParm2)

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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
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


void CWE124_Buffer_Underwrite__CWE839_rand_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_61_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_ncpy_61b_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_ncpy_61b_goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_61_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_64b_badSink(long *plParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_18 = plParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_20 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_20 + 99) = 0;
  printLine(local_20);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_64b_goodG2BSink(long *plParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_18 = plParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_20 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_20 + 99) = 0;
  printLine(local_20);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_67b_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    local_10 = iParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_10 = iParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_67b_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    local_10 = iParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_10 = iParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_67b_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    local_10 = iParm1;
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    local_10 = iParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_07_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_1c < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
    local_20 = 0;
    while (local_20 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
      local_20 = local_20 + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041de46) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_1c < 0) || (9 < (int)local_1c)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
    local_20 = 0;
    while (local_20 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_1c < 0) || (9 < (int)local_1c)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
    local_20 = 0;
    while (local_20 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
      local_20 = local_20 + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dfc3) */
/* WARNING: Removing unreachable block (ram,0x0041e03f) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e0d3) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_54b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_54b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_64_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_loop_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_loop_64b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_64_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_61_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_cpy_61b_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)CWE124_Buffer_Underwrite__malloc_char_cpy_61b_goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_61_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_51b_badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_51b_goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_65b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_65b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_67b_badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = pvParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_67b_goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = pvParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_07_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_04_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
    memset(local_88,0x43,99);
    local_25 = 0;
    memmove(local_10,local_88,100);
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041e8fc) */

void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    memmove(local_10,local_88,100);
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    memmove(local_10,local_88,100);
    *(undefined *)((long)local_10 + 99) = 0;
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_31_bad(void)

{
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (void *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  memmove(local_28,local_98,100);
  *(undefined *)((long)local_28 + 99) = 0;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_20 = local_18;
  local_28 = local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  memmove(local_28,local_98,100);
  *(undefined *)((long)local_28 + 99) = 0;
  printLine(local_28);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_31_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_67_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_67b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_loop_67b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_67_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ed69) */

void CWE124_Buffer_Underwrite__CWE839_negative_14_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (globalFive == 5) {
    local_c = 0xfffffffb;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041eddb) */
/* WARNING: Removing unreachable block (ram,0x0041ede1) */
/* WARNING: Removing unreachable block (ram,0x0041ee0b) */
/* WARNING: Removing unreachable block (ram,0x0041edf7) */
/* WARNING: Removing unreachable block (ram,0x0041ee11) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ee79) */
/* WARNING: Removing unreachable block (ram,0x0041ee7f) */
/* WARNING: Removing unreachable block (ram,0x0041eea9) */
/* WARNING: Removing unreachable block (ram,0x0041ee95) */
/* WARNING: Removing unreachable block (ram,0x0041eeaf) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041efed) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (globalFive == 5) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_22_bad(void)

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
  CWE124_Buffer_Underwrite__CWE839_rand_22_badGlobal = 1;
  CWE124_Buffer_Underwrite__CWE839_rand_22_badSink((ulong)uVar1);
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
  CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G1Global = 0;
  CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G1Sink((ulong)uVar1);
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
  CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G2Global = 1;
  CWE124_Buffer_Underwrite__CWE839_rand_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_22_goodG2BGlobal = 1;
  CWE124_Buffer_Underwrite__CWE839_rand_22_goodG2BSink(7);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f274) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__CWE839_negative_32_bad(void)

{
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0xffffffff;
  local_24 = 0xfffffffb;
  local_28 = 0xfffffffb;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f321) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0xffffffff;
  local_24 = 7;
  local_28 = 7;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f39c) */
/* WARNING: Removing unreachable block (ram,0x0041f3a2) */
/* WARNING: Removing unreachable block (ram,0x0041f3cc) */
/* WARNING: Removing unreachable block (ram,0x0041f3b8) */
/* WARNING: Removing unreachable block (ram,0x0041f3d2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0xffffffff;
  local_24 = 0xfffffffb;
  local_28 = 0xfffffffb;
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_67_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_67b_badSink((long)__s + -8);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_67b_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_63_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_memcpy_63b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_67b_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    local_10 = iParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_10 = iParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_67b_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    local_10 = iParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    local_10 = iParm1;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_67b_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    local_10 = iParm1;
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    local_10 = iParm1;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_memmove_22_badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_memmove_22_badGlobal != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B1Global == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void * CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B2Global != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54d_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54e_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54d_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54d_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fcb0) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fd72) */

void CWE124_Buffer_Underwrite__CWE839_negative_04_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fda6) */
/* WARNING: Removing unreachable block (ram,0x0041fde0) */
/* WARNING: Removing unreachable block (ram,0x0041fde6) */
/* WARNING: Removing unreachable block (ram,0x0041fe10) */
/* WARNING: Removing unreachable block (ram,0x0041fdfc) */
/* WARNING: Removing unreachable block (ram,0x0041fe16) */

void goodB2G1(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fe7a) */
/* WARNING: Removing unreachable block (ram,0x0041fe80) */
/* WARNING: Removing unreachable block (ram,0x0041feaa) */
/* WARNING: Removing unreachable block (ram,0x0041fe96) */
/* WARNING: Removing unreachable block (ram,0x0041feb0) */

void goodB2G2(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fed6) */
/* WARNING: Removing unreachable block (ram,0x0041ff52) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ffe6) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  local_c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  while (local_10 < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004200a2) */

void CWE124_Buffer_Underwrite__CWE839_negative_31_bad(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_14 = 0xfffffffb;
  local_18 = 0xfffffffb;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420130) */

void goodG2B(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_14 = 7;
  local_18 = 7;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042018c) */
/* WARNING: Removing unreachable block (ram,0x00420192) */
/* WARNING: Removing unreachable block (ram,0x004201bc) */
/* WARNING: Removing unreachable block (ram,0x004201a8) */
/* WARNING: Removing unreachable block (ram,0x004201c2) */

void goodB2G(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_15_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (void *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_06_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 != (void *)0x0) {
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
    memset(local_88,0x43,99);
    local_25 = 0;
    strcpy(local_10,local_88);
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004204af) */

void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strcpy(local_10,local_88);
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 != (char *)0x0) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
    memset(local_88,0x43,99);
    local_25 = 0;
    strcpy(local_10,local_88);
    printLine(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_28 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_28 = rand();
    local_28 = local_28 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if ((int)local_28 < 10) {
    *(undefined4 *)((long)&local_58 + (long)(int)local_28 * 4) = 1;
    local_1c = 0;
    local_24 = local_28;
    local_20 = local_28;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    local_24 = local_28;
    local_20 = local_28;
    printLine("ERROR: Array index is negative.");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042074d) */

void goodG2B(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_14 = 7;
  local_18 = 7;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_28 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_28 = rand();
    local_28 = local_28 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (((int)local_28 < 0) || (9 < (int)local_28)) {
    local_24 = local_28;
    local_20 = local_28;
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_58 + (long)(int)local_28 * 4) = 1;
    local_1c = 0;
    local_24 = local_28;
    local_20 = local_28;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_22_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_22_badGlobal = 1;
  local_10 = (void *)CWE124_Buffer_Underwrite__malloc_char_memmove_22_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B1Global = 0;
  local_10 = (void *)CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B2Global = 1;
  local_10 = (void *)CWE124_Buffer_Underwrite__malloc_char_memmove_22_goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_10_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  if (globalTrue != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_15_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_17_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_20;
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(&local_88,0x43,99);
      local_28 = local_28 & 0xffffff;
      *local_18 = local_88;
      local_18[1] = local_80;
      local_18[2] = local_78;
      local_18[3] = local_70;
      local_18[4] = local_68;
      local_18[5] = local_60;
      local_18[6] = local_58;
      local_18[7] = local_50;
      local_18[8] = local_48;
      local_18[9] = local_40;
      local_18[10] = local_38;
      local_18[0xb] = local_30;
      *(uint *)(local_18 + 0xc) = local_28;
      *(undefined *)((long)local_18 + 99) = 0;
      printLine(local_18);
      return;
    }
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) break;
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_18 = (undefined8 *)((long)local_20 + -8);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(&local_88,0x43,99);
      local_28 = local_28 & 0xffffff;
      *local_18 = local_88;
      local_18[1] = local_80;
      local_18[2] = local_78;
      local_18[3] = local_70;
      local_18[4] = local_68;
      local_18[5] = local_60;
      local_18[6] = local_58;
      local_18[7] = local_50;
      local_18[8] = local_48;
      local_18[9] = local_40;
      local_18[10] = local_38;
      local_18[0xb] = local_30;
      *(uint *)(local_18 + 0xc) = local_28;
      *(undefined *)((long)local_18 + 99) = 0;
      printLine(local_18);
      return;
    }
    local_20 = (undefined8 *)malloc(100);
    if (local_20 == (undefined8 *)0x0) break;
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_18 = local_20;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_22_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_negative_22_badGlobal != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G1Sink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G1Global == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G2Sink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G2Global != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_22_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (CWE124_Buffer_Underwrite__CWE839_negative_22_goodG2BGlobal != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void badSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_44_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  badSink((long)__s + -8);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *puParm1 = local_78;
  puParm1[1] = local_70;
  puParm1[2] = local_68;
  puParm1[3] = local_60;
  puParm1[4] = local_58;
  puParm1[5] = local_50;
  puParm1[6] = local_48;
  puParm1[7] = local_40;
  puParm1[8] = local_38;
  puParm1[9] = local_30;
  puParm1[10] = local_28;
  puParm1[0xb] = local_20;
  *(uint *)(puParm1 + 0xc) = local_18;
  *(undefined *)((long)puParm1 + 99) = 0;
  printLine(puParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_44_good(void)

{
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (badStatic != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_21_bad(void)

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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (goodB2G1Static == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (goodB2G2Static != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((iParm1 < 0) || (9 < iParm1)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  if (goodG2BStatic != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (iParm1 < 10) {
      *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
      local_c = 0;
      while (local_c < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
        local_c = local_c + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_20 < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421b76) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421bf8) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


long badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_42_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void * goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void goodG2B(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_42_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54d_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_54e_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54d_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_54e_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_13_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_20 < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422341) */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_51b_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_51b_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_51b_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_13_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_63_bad(void)

{
  long local_18;
  void *local_10;
  
  local_18 = 0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = (long)local_10 + -8;
  CWE124_Buffer_Underwrite__malloc_char_loop_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_10,0x41,99);
  *(undefined *)((long)local_10 + 99) = 0;
  local_18 = local_10;
  CWE124_Buffer_Underwrite__malloc_char_loop_63b_goodG2BSink(&local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_63_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_22_bad(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_22_badGlobal = 1;
  CWE124_Buffer_Underwrite__CWE839_negative_22_badSink(0xfffffffb);
  return;
}


void goodB2G1(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G1Global = 0;
  CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G1Sink(0xfffffffb);
  return;
}


void goodB2G2(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G2Global = 1;
  CWE124_Buffer_Underwrite__CWE839_negative_22_goodB2G2Sink(0xfffffffb);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_negative_22_goodG2BGlobal = 1;
  CWE124_Buffer_Underwrite__CWE839_negative_22_goodG2BSink(7);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_24;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 7;
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
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_58 + (long)(int)local_1c * 4) = 1;
      local_24 = 0;
      while (local_24 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_24 * 4));
        local_24 = local_24 + 1;
      }
    }
  }
  else {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_58 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_24;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_58 + (long)(int)local_1c * 4) = 1;
      local_24 = 0;
      while (local_24 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_24 * 4));
        local_24 = local_24 + 1;
      }
    }
  }
  else {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_58 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  globalReturnsTrueOrFalse();
  local_c = 7;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_14 = 0;
      while (local_14 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_14 * 4));
        local_14 = local_14 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_15_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_05_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFalse == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticTrue != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_07_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_41_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_41_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_41_badSink((long)__s + -8);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_41_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(pcParm1,local_78,99);
  pcParm1[99] = 0;
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_41_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_41_good(void)

{
  goodG2B();
  return;
}


long badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_42_bad(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void * goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


void goodG2B(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_42_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54d_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54e_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54d_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54d_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54e_goodB2GSink((ulong)uParm1);
  return;
}


long badSource(long lParm1)

{
  void *__s;
  long local_20;
  
  local_20 = lParm1;
  if (badStatic != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_20 = (long)__s + -8;
  }
  return local_20;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_21_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  badStatic = 1;
  local_10 = (void *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_20;
  
  if (goodG2B1Static == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_20 = pvParm1;
  }
  return local_20;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  goodG2B1Static = 0;
  local_10 = (void *)goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_20;
  
  local_20 = pvParm1;
  if (goodG2B2Static != 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
  }
  return local_20;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  void *local_10;
  
  local_10 = (void *)0x0;
  goodG2B2Static = 1;
  local_10 = (void *)goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_10,local_78,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_34_bad(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (char *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  strncpy(local_20,local_98,99);
  local_20[99] = 0;
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  local_28 = local_18;
  local_20 = local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  strncpy(local_20,local_98,99);
  local_20[99] = 0;
  printLine(local_20);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_61_bad(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)CWE124_Buffer_Underwrite__malloc_char_memcpy_61b_badSource(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)CWE124_Buffer_Underwrite__malloc_char_memcpy_61b_goodG2BSource(0);
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_61_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_51b_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_51b_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_51b_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_66b_badSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_66b_goodG2BSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_10,local_78,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423f08) */

void CWE124_Buffer_Underwrite__CWE839_negative_13_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 0xfffffffb;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423f7a) */
/* WARNING: Removing unreachable block (ram,0x00423f80) */
/* WARNING: Removing unreachable block (ram,0x00423faa) */
/* WARNING: Removing unreachable block (ram,0x00423f96) */
/* WARNING: Removing unreachable block (ram,0x00423fb0) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424018) */
/* WARNING: Removing unreachable block (ram,0x0042401e) */
/* WARNING: Removing unreachable block (ram,0x00424048) */
/* WARNING: Removing unreachable block (ram,0x00424034) */
/* WARNING: Removing unreachable block (ram,0x0042404e) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042418c) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_20 < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004244a6) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424528) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_63b_badSink(long *plParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = *plParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_63b_goodG2BSink(long *plParm1)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = *plParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_07_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_05_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticTrue != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (char *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFalse == 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticTrue != 0) {
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_10,local_88);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_41_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_41_bad(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_41_badSink((long)__s + -8);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_41_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  CWE124_Buffer_Underwrite__malloc_char_cpy_41_goodG2BSink(__s);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_17_bad(void)

{
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  ulong local_20;
  long local_18;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_98,0x43,99);
      local_35 = 0;
      local_20 = 0;
      while (local_20 < 100) {
        *(undefined *)(local_18 + local_20) = local_98[local_20];
        local_20 = local_20 + 1;
      }
      *(undefined *)(local_18 + 99) = 0;
      printLine(local_18);
      return;
    }
    local_28 = malloc(100);
    if (local_28 == (void *)0x0) break;
    memset(local_28,0x41,99);
    *(undefined *)((long)local_28 + 99) = 0;
    local_18 = (long)local_28 + -8;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined local_98 [99];
  undefined local_35;
  void *local_28;
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_98,0x43,99);
      local_35 = 0;
      local_20 = 0;
      while (local_20 < 100) {
        *(undefined *)((long)local_18 + local_20) = local_98[local_20];
        local_20 = local_20 + 1;
      }
      *(undefined *)((long)local_18 + 99) = 0;
      printLine(local_18);
      return;
    }
    local_28 = malloc(100);
    if (local_28 == (void *)0x0) break;
    memset(local_28,0x41,99);
    *(undefined *)((long)local_28 + 99) = 0;
    local_18 = local_28;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE124_Buffer_Underwrite__malloc_char_loop_17_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004252a2) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (globalTrue != 0) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_16_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (void *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_12_bad(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_12_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54c_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54d_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54c_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54c_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_34_bad(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_28 = (char *)((long)local_18 + -8);
  local_20 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  strcpy(local_20,local_98);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  char local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  local_28 = local_18;
  local_20 = local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  strcpy(local_20,local_98);
  printLine(local_20);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_66_bad(void)

{
  undefined local_48 [16];
  long local_38;
  void *local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_38 = (long)local_18 + -8;
  local_10 = local_38;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_38 = local_18;
  CWE124_Buffer_Underwrite__malloc_char_ncpy_66b_goodG2BSink(local_48);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_20 < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425a23) */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_20 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_20 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_20 = rand();
    local_20 = local_20 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_20 < 0) || (9 < (int)local_20)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_20 * 4) = 1;
    local_1c = 0;
    while (local_1c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_1c * 4));
      local_1c = local_1c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425b8f) */

void CWE124_Buffer_Underwrite__CWE839_negative_03_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425bdf) */
/* WARNING: Removing unreachable block (ram,0x00425be5) */
/* WARNING: Removing unreachable block (ram,0x00425c0f) */
/* WARNING: Removing unreachable block (ram,0x00425bfb) */
/* WARNING: Removing unreachable block (ram,0x00425c15) */

void goodB2G1(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425c67) */
/* WARNING: Removing unreachable block (ram,0x00425c6d) */
/* WARNING: Removing unreachable block (ram,0x00425c97) */
/* WARNING: Removing unreachable block (ram,0x00425c83) */
/* WARNING: Removing unreachable block (ram,0x00425c9d) */

void goodB2G2(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425d21) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425da3) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_66b_badSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_66b_goodG2BSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53d_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53d_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_53d_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


long CWE124_Buffer_Underwrite__malloc_char_loop_61b_badSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return (long)__s + -8;
}


void * CWE124_Buffer_Underwrite__malloc_char_loop_61b_goodG2BSource(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  return __s;
}


/* WARNING: Removing unreachable block (ram,0x0042611e) */

void CWE124_Buffer_Underwrite__CWE839_negative_18_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426170) */
/* WARNING: Removing unreachable block (ram,0x00426176) */
/* WARNING: Removing unreachable block (ram,0x004261a0) */
/* WARNING: Removing unreachable block (ram,0x0042618c) */
/* WARNING: Removing unreachable block (ram,0x004261a6) */

void goodB2G(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042622c) */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_11_bad(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_02_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (void *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_68b_badSink(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memcpy_68_badData;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_68b_goodG2BSink(void)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined8 *local_10;
  
  local_10 = CWE124_Buffer_Underwrite__malloc_char_memcpy_68_goodG2BData;
  memset(&local_78,0x43,99);
  local_18 = local_18 & 0xffffff;
  *local_10 = local_78;
  local_10[1] = local_70;
  local_10[2] = local_68;
  local_10[3] = local_60;
  local_10[4] = local_58;
  local_10[5] = local_50;
  local_10[6] = local_48;
  local_10[7] = local_40;
  local_10[8] = local_38;
  local_10[9] = local_30;
  local_10[10] = local_28;
  local_10[0xb] = local_20;
  *(uint *)(local_10 + 0xc) = local_18;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_12_bad(void)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    local_c = -5;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_14 = 0;
      while (local_14 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_14 * 4));
        local_14 = local_14 + 1;
      }
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  globalReturnsTrueOrFalse();
  local_c = -5;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_14 = 0;
      while (local_14 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_14 * 4));
        local_14 = local_14 + 1;
      }
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  globalReturnsTrueOrFalse();
  local_c = 7;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_14 = 0;
      while (local_14 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_14 * 4));
        local_14 = local_14 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_1c < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_1c < 0) || (9 < (int)local_1c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_1c * 4) = 1;
      local_20 = 0;
      while (local_20 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_20 * 4));
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426f38) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54e_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_54e_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_66_bad(void)

{
  undefined local_48 [16];
  long local_38;
  void *local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_38 = (long)local_18 + -8;
  local_10 = local_38;
  CWE124_Buffer_Underwrite__malloc_char_cpy_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  local_38 = local_18;
  CWE124_Buffer_Underwrite__malloc_char_cpy_66b_goodG2BSink(local_48);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_cpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_61_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_61b_badSource(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  long local_18;
  ulong local_10;
  
  local_18 = 0;
  local_18 = CWE124_Buffer_Underwrite__malloc_char_loop_61b_goodG2BSource(0);
  memset(local_88,0x43,99);
  local_25 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(local_18 + local_10) = local_88[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(local_18 + 99) = 0;
  printLine(local_18);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_61_good(void)

{
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54c_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_54d_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54c_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53d_badSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_53d_goodG2BSink(void *pvParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(pvParm1,local_78,100);
  *(undefined *)((long)pvParm1 + 99) = 0;
  printLine(pvParm1);
  return;
}


undefined8 CWE124_Buffer_Underwrite__CWE839_negative_61b_badSource(void)

{
  return 0xfffffffb;
}


undefined8 CWE124_Buffer_Underwrite__CWE839_negative_61b_goodG2BSource(void)

{
  return 7;
}


undefined8 CWE124_Buffer_Underwrite__CWE839_negative_61b_goodB2GSource(void)

{
  return 0xfffffffb;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_07_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = (long)local_20 + -8;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)(local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)(local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_20 = malloc(100);
    if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_20,0x41,99);
    *(undefined *)((long)local_20 + 99) = 0;
    local_10 = local_20;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined *)((long)local_10 + local_18) = local_88[local_18];
    local_18 = local_18 + 1;
  }
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54b_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54c_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54b_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54b_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_11_bad(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -5;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -5;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -5;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004279c5) */

void CWE124_Buffer_Underwrite__CWE839_negative_02_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427a15) */
/* WARNING: Removing unreachable block (ram,0x00427a1b) */
/* WARNING: Removing unreachable block (ram,0x00427a45) */
/* WARNING: Removing unreachable block (ram,0x00427a31) */
/* WARNING: Removing unreachable block (ram,0x00427a4b) */

void goodB2G1(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427a9d) */
/* WARNING: Removing unreachable block (ram,0x00427aa3) */
/* WARNING: Removing unreachable block (ram,0x00427acd) */
/* WARNING: Removing unreachable block (ram,0x00427ab9) */
/* WARNING: Removing unreachable block (ram,0x00427ad3) */

void goodB2G2(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427b57) */

void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427bd9) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_09_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (undefined8 *)((long)local_18 + -8);
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = (undefined8 *)malloc(100);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427fc1) */

void CWE124_Buffer_Underwrite__CWE839_negative_10_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (globalTrue != 0) {
    local_c = 0xfffffffb;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_c = -5;
  }
  if (globalFalse == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004280cd) */
/* WARNING: Removing unreachable block (ram,0x004280d3) */
/* WARNING: Removing unreachable block (ram,0x004280fd) */
/* WARNING: Removing unreachable block (ram,0x004280e9) */
/* WARNING: Removing unreachable block (ram,0x00428103) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042823d) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (globalTrue != 0) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_09_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = (void *)((long)local_18 + -8);
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_88 [99];
  undefined local_25;
  void *local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_18,0x41,99);
    *(undefined *)((long)local_18 + 99) = 0;
    local_10 = local_18;
  }
  memset(local_88,0x43,99);
  local_25 = 0;
  memmove(local_10,local_88,100);
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54c_badSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54d_badSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54c_goodG2BSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_54c_goodB2GSink(uint uParm1)

{
  CWE124_Buffer_Underwrite__CWE839_negative_54d_goodB2GSink((ulong)uParm1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428563) */

void CWE124_Buffer_Underwrite__CWE839_negative_01_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xfffffffb;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004285e5) */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_10 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  while (local_c < 10) {
    printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428635) */
/* WARNING: Removing unreachable block (ram,0x0042863b) */
/* WARNING: Removing unreachable block (ram,0x00428665) */
/* WARNING: Removing unreachable block (ram,0x00428651) */
/* WARNING: Removing unreachable block (ram,0x0042866b) */

void goodB2G(void)

{
  printLine("ERROR: Array index is out-of-bounds");
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54_bad(void)

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
  CWE124_Buffer_Underwrite__CWE839_rand_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE124_Buffer_Underwrite__CWE839_rand_54b_goodG2BSink(7);
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
  CWE124_Buffer_Underwrite__CWE839_rand_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53d_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53d_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_53d_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_15_bad(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  void *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (undefined8 *)((long)local_18 + -8);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(100);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = local_18;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_10 = local_88;
  local_10[1] = local_80;
  local_10[2] = local_78;
  local_10[3] = local_70;
  local_10[4] = local_68;
  local_10[5] = local_60;
  local_10[6] = local_58;
  local_10[7] = local_50;
  local_10[8] = local_48;
  local_10[9] = local_40;
  local_10[10] = local_38;
  local_10[0xb] = local_30;
  *(uint *)(local_10 + 0xc) = local_28;
  *(undefined *)((long)local_10 + 99) = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_65b_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_loop_65b_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  ulong local_10;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined *)(lParm1 + local_10) = local_78[local_10];
    local_10 = local_10 + 1;
  }
  *(undefined *)(lParm1 + 99) = 0;
  printLine(lParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54b_badSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_54c_badSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_memmove_54b_goodG2BSink(undefined8 uParm1)

{
  CWE124_Buffer_Underwrite__malloc_char_memmove_54c_goodG2BSink(uParm1);
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
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
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if ((int)local_24 < 10) {
      *(undefined4 *)((long)&local_58 + (long)(int)local_24 * 4) = 1;
      local_28 = 0;
      while (local_28 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_28 * 4));
        local_28 = local_28 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
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
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
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
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if (((int)local_24 < 0) || (9 < (int)local_24)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_58 + (long)(int)local_24 * 4) = 1;
      local_28 = 0;
      while (local_28 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_58 + (long)local_28 * 4));
        local_28 = local_28 + 1;
      }
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_14 < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_14 * 4) = 1;
      local_18 = 0;
      while (local_18 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_48 + (long)local_18 * 4));
        local_18 = local_18 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_65b_badSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_65b_goodG2BSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (iParm1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_rand_65b_goodB2GSink(int iParm1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iParm1 < 0) || (9 < iParm1)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iParm1 * 4) = 1;
    local_c = 0;
    while (local_c < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_c * 4));
      local_c = local_c + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_01_bad(void)

{
  char local_88 [99];
  undefined local_25;
  void *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  local_10 = (char *)((long)local_18 + -8);
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_18 = (char *)malloc(100);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_18,0x41,99);
  local_18[99] = 0;
  local_10 = local_18;
  memset(local_88,0x43,99);
  local_25 = 0;
  strncpy(local_10,local_88,99);
  local_10[99] = 0;
  printLine(local_10);
  return;
}


void CWE124_Buffer_Underwrite__malloc_char_ncpy_01_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429316) */

void CWE124_Buffer_Underwrite__CWE839_negative_09_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 0xfffffffb;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = -5;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_c < 0) || (9 < local_c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429422) */
/* WARNING: Removing unreachable block (ram,0x00429428) */
/* WARNING: Removing unreachable block (ram,0x00429452) */
/* WARNING: Removing unreachable block (ram,0x0042943e) */
/* WARNING: Removing unreachable block (ram,0x00429458) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  return;
}


void goodG2B1(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_c < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_c * 4) = 1;
      local_10 = 0;
      while (local_10 < 10) {
        printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
        local_10 = local_10 + 1;
      }
    }
    else {
      printLine("ERROR: Array index is negative.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429592) */

void goodG2B2(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 7;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    while (local_10 < 10) {
      printIntLine((ulong)*(uint *)((long)&local_38 + (long)local_10 * 4));
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE124_Buffer_Underwrite__CWE839_negative_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
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
  printf((char *)(double)fParm1,&DAT_00433f19);
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
  printf(pcParm1,&DAT_00433f36);
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
    __isoc99_sscanf(lVar1,&DAT_00433f44,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00433f4c,&local_14);
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

