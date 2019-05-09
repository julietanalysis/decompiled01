
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00628ff8;
  if (PTR___gmon_start___00628ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400c70(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00629010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00629018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00629020)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_00629028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00629030)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00629038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00629040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00629048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00629050)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00629058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00629060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00629068)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00629070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00629078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00629080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00629088)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00629090)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00629098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006290a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_006290a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_006290b0)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006290b8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006290c0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006290c8)();
  return;
}


void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_006290d0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_remove_006290d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_006290e0)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006290e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006290f0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_006290f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00629100)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00629108)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_00629110)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int _IO_putc(int __c,_IO_FILE *__fp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__IO_putc_00629118)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00629120)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00628ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400ef7) */
/* WARNING: Removing unreachable block (ram,0x00400f01) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400f34) */
/* WARNING: Removing unreachable block (ram,0x00400f3e) */

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


/* WARNING: Removing unreachable block (ram,0x00400f84) */
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
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_13_good();");
  CWE252_Unchecked_Return_Value__char_puts_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_13_good();");
  CWE252_Unchecked_Return_Value__char_remove_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_10_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_18_good();");
  CWE252_Unchecked_Return_Value__char_fputc_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_14_good();");
  CWE252_Unchecked_Return_Value__char_fread_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_05_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_15_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_05_good();");
  CWE252_Unchecked_Return_Value__char_putchar_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_13_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_14_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_16_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_18_good();");
  CWE252_Unchecked_Return_Value__char_putc_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_11_good();");
  CWE252_Unchecked_Return_Value__char_scanf_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_10_good();");
  CWE252_Unchecked_Return_Value__char_scanf_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_10_good();");
  CWE252_Unchecked_Return_Value__char_puts_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_17_good();");
  CWE252_Unchecked_Return_Value__char_putc_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_11_good();");
  CWE252_Unchecked_Return_Value__char_putc_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_07_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_08_good();");
  CWE252_Unchecked_Return_Value__char_fputs_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_18_good();");
  CWE252_Unchecked_Return_Value__char_scanf_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_13_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_10_good();");
  CWE252_Unchecked_Return_Value__char_fputc_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_07_good();");
  CWE252_Unchecked_Return_Value__char_fputc_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_05_good();");
  CWE252_Unchecked_Return_Value__char_scanf_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_04_good();");
  CWE252_Unchecked_Return_Value__char_remove_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_11_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_12_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_11_good();");
  CWE252_Unchecked_Return_Value__char_fgets_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_10_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_14_good();");
  CWE252_Unchecked_Return_Value__char_putchar_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_03_good();");
  CWE252_Unchecked_Return_Value__char_rename_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_16_good();");
  CWE252_Unchecked_Return_Value__char_rename_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_04_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_16_good();");
  CWE252_Unchecked_Return_Value__char_fputc_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_09_good();");
  CWE252_Unchecked_Return_Value__char_putc_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_06_good();");
  CWE252_Unchecked_Return_Value__char_putchar_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_09_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_03_good();");
  CWE252_Unchecked_Return_Value__char_puts_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_09_good();");
  CWE252_Unchecked_Return_Value__char_fread_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_03_good();");
  CWE252_Unchecked_Return_Value__char_putchar_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_05_good();");
  CWE252_Unchecked_Return_Value__char_rename_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_11_good();");
  CWE252_Unchecked_Return_Value__char_remove_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_10_good();");
  CWE252_Unchecked_Return_Value__char_putc_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_16_good();");
  CWE252_Unchecked_Return_Value__char_fread_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_09_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_14_good();");
  CWE252_Unchecked_Return_Value__char_puts_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_09_good();");
  CWE252_Unchecked_Return_Value__char_fputc_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_05_good();");
  CWE252_Unchecked_Return_Value__char_fgets_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_16_good();");
  CWE252_Unchecked_Return_Value__char_scanf_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_09_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_13_good();");
  CWE252_Unchecked_Return_Value__char_fread_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_07_good();");
  CWE252_Unchecked_Return_Value__char_putc_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_13_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_04_good();");
  CWE252_Unchecked_Return_Value__char_puts_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_14_good();");
  CWE252_Unchecked_Return_Value__char_fputc_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_10_good();");
  CWE252_Unchecked_Return_Value__char_fputs_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_01_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_17_good();");
  CWE252_Unchecked_Return_Value__char_putchar_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_04_good();");
  CWE252_Unchecked_Return_Value__char_rename_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_13_good();");
  CWE252_Unchecked_Return_Value__char_scanf_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_03_good();");
  CWE252_Unchecked_Return_Value__char_remove_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_18_good();");
  CWE252_Unchecked_Return_Value__char_fgets_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_08_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_07_good();");
  CWE252_Unchecked_Return_Value__char_remove_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_10_good();");
  CWE252_Unchecked_Return_Value__char_putchar_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_07_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_08_good();");
  CWE252_Unchecked_Return_Value__char_fputc_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_02_good();");
  CWE252_Unchecked_Return_Value__char_putchar_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_05_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_14_good();");
  CWE252_Unchecked_Return_Value__char_scanf_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_03_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_18_good();");
  CWE252_Unchecked_Return_Value__char_remove_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_18_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_13_good();");
  CWE252_Unchecked_Return_Value__char_fputc_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_01_good();");
  CWE252_Unchecked_Return_Value__char_scanf_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_02_good();");
  CWE252_Unchecked_Return_Value__char_rename_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_14_good();");
  CWE252_Unchecked_Return_Value__char_fgets_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_06_good();");
  CWE252_Unchecked_Return_Value__char_puts_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_09_good();");
  CWE252_Unchecked_Return_Value__char_fgets_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_09_good();");
  CWE252_Unchecked_Return_Value__char_remove_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_03_good();");
  CWE252_Unchecked_Return_Value__char_fputc_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_01_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_13_good();");
  CWE252_Unchecked_Return_Value__char_fputs_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_17_good();");
  CWE252_Unchecked_Return_Value__char_puts_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_10_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_06_good();");
  CWE252_Unchecked_Return_Value__char_fread_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_02_good();");
  CWE252_Unchecked_Return_Value__char_fputs_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_02_good();");
  CWE252_Unchecked_Return_Value__char_remove_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_12_good();");
  CWE252_Unchecked_Return_Value__char_fgets_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_03_good();");
  CWE252_Unchecked_Return_Value__char_fputs_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_07_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_04_good();");
  CWE252_Unchecked_Return_Value__char_putc_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_08_good();");
  CWE252_Unchecked_Return_Value__char_putchar_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_16_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_07_good();");
  CWE252_Unchecked_Return_Value__char_fgets_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_17_good();");
  CWE252_Unchecked_Return_Value__char_fputs_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_16_good();");
  CWE252_Unchecked_Return_Value__char_putc_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_12_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_13_good();");
  CWE252_Unchecked_Return_Value__char_rename_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_12_good();");
  CWE252_Unchecked_Return_Value__char_putchar_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_06_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_17_good();");
  CWE252_Unchecked_Return_Value__char_fgets_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_12_good();");
  CWE252_Unchecked_Return_Value__char_remove_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_03_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_11_good();");
  CWE252_Unchecked_Return_Value__char_rename_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_17_good();");
  CWE252_Unchecked_Return_Value__char_fread_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_08_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_10_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_18_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_07_good();");
  CWE252_Unchecked_Return_Value__char_scanf_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_06_good();");
  CWE252_Unchecked_Return_Value__char_remove_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_04_good();");
  CWE252_Unchecked_Return_Value__char_putchar_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_08_good();");
  CWE252_Unchecked_Return_Value__char_rename_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_08_good();");
  CWE252_Unchecked_Return_Value__char_fread_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_01_good();");
  CWE252_Unchecked_Return_Value__char_fread_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_07_good();");
  CWE252_Unchecked_Return_Value__char_putchar_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_07_good();");
  CWE252_Unchecked_Return_Value__char_rename_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_18_good();");
  CWE252_Unchecked_Return_Value__char_putchar_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_04_good();");
  CWE252_Unchecked_Return_Value__char_scanf_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_15_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_06_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_15_good();");
  CWE252_Unchecked_Return_Value__char_putc_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_11_good();");
  CWE252_Unchecked_Return_Value__char_fread_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_16_good();");
  CWE252_Unchecked_Return_Value__char_fputs_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_12_good();");
  CWE252_Unchecked_Return_Value__char_fputs_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_04_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_14_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_02_good();");
  CWE252_Unchecked_Return_Value__char_scanf_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_11_good();");
  CWE252_Unchecked_Return_Value__char_fputs_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_05_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_05_good();");
  CWE252_Unchecked_Return_Value__char_remove_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_12_good();");
  CWE252_Unchecked_Return_Value__char_putc_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_17_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_05_good();");
  CWE252_Unchecked_Return_Value__char_fputc_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_18_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_07_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_01_good();");
  CWE252_Unchecked_Return_Value__char_remove_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_11_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_15_good();");
  CWE252_Unchecked_Return_Value__char_remove_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_15_good();");
  CWE252_Unchecked_Return_Value__char_putchar_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_16_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_09_good();");
  CWE252_Unchecked_Return_Value__char_scanf_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_01_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_09_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_17_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_08_good();");
  CWE252_Unchecked_Return_Value__char_putc_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_04_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_15_good();");
  CWE252_Unchecked_Return_Value__char_fgets_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_10_good();");
  CWE252_Unchecked_Return_Value__char_fread_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_03_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_03_good();");
  CWE252_Unchecked_Return_Value__char_scanf_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_05_good();");
  CWE252_Unchecked_Return_Value__char_putc_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_14_good();");
  CWE252_Unchecked_Return_Value__char_rename_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_15_good();");
  CWE252_Unchecked_Return_Value__char_scanf_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_18_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_06_good();");
  CWE252_Unchecked_Return_Value__char_scanf_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_03_good();");
  CWE252_Unchecked_Return_Value__char_fgets_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_06_good();");
  CWE252_Unchecked_Return_Value__char_rename_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_11_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_12_good();");
  CWE252_Unchecked_Return_Value__char_puts_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_08_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_13_good();");
  CWE252_Unchecked_Return_Value__char_fgets_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_15_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_05_good();");
  CWE252_Unchecked_Return_Value__char_puts_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_17_good();");
  CWE252_Unchecked_Return_Value__char_rename_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_14_good();");
  CWE252_Unchecked_Return_Value__char_fputs_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_11_good();");
  CWE252_Unchecked_Return_Value__char_fputc_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_07_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_02_good();");
  CWE252_Unchecked_Return_Value__char_fgets_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_08_good();");
  CWE252_Unchecked_Return_Value__char_puts_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_17_good();");
  CWE252_Unchecked_Return_Value__char_remove_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_18_good();");
  CWE252_Unchecked_Return_Value__char_puts_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_12_good();");
  CWE252_Unchecked_Return_Value__char_rename_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_17_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_13_good();");
  CWE252_Unchecked_Return_Value__char_putc_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_04_good();");
  CWE252_Unchecked_Return_Value__char_fputs_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_14_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_08_good();");
  CWE252_Unchecked_Return_Value__char_remove_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_15_good();");
  CWE252_Unchecked_Return_Value__char_fread_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_15_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_13_good();");
  CWE252_Unchecked_Return_Value__char_putchar_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_01_good();");
  CWE252_Unchecked_Return_Value__char_fputs_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_11_good();");
  CWE252_Unchecked_Return_Value__char_putchar_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_04_good();");
  CWE252_Unchecked_Return_Value__char_fread_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_02_good();");
  CWE252_Unchecked_Return_Value__char_puts_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_03_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_12_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_08_good();");
  CWE252_Unchecked_Return_Value__char_scanf_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_05_good();");
  CWE252_Unchecked_Return_Value__char_fread_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_05_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_01_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_18_good();");
  CWE252_Unchecked_Return_Value__char_rename_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_07_good();");
  CWE252_Unchecked_Return_Value__char_puts_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_14_good();");
  CWE252_Unchecked_Return_Value__char_remove_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_16_good();");
  CWE252_Unchecked_Return_Value__char_puts_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_08_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_12_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_10_good();");
  CWE252_Unchecked_Return_Value__char_rename_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_06_good();");
  CWE252_Unchecked_Return_Value__char_fputc_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_15_good();");
  CWE252_Unchecked_Return_Value__char_fputs_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_17_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_07_good();");
  CWE252_Unchecked_Return_Value__char_fputs_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_16_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_12_good();");
  CWE252_Unchecked_Return_Value__char_fputc_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_15_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_02_good();");
  CWE252_Unchecked_Return_Value__char_putc_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_01_good();");
  CWE252_Unchecked_Return_Value__char_puts_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_01_good();");
  CWE252_Unchecked_Return_Value__char_putc_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_02_good();");
  CWE252_Unchecked_Return_Value__char_fputc_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_02_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_09_good();");
  CWE252_Unchecked_Return_Value__char_rename_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_03_good();");
  CWE252_Unchecked_Return_Value__char_fread_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_17_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_06_good();");
  CWE252_Unchecked_Return_Value__char_fgets_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_09_good();");
  CWE252_Unchecked_Return_Value__char_puts_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_14_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_15_good();");
  CWE252_Unchecked_Return_Value__char_rename_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_02_good();");
  CWE252_Unchecked_Return_Value__char_fread_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_12_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_02_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_10_good();");
  CWE252_Unchecked_Return_Value__char_fgets_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_17_good();");
  CWE252_Unchecked_Return_Value__char_scanf_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_01_good();");
  CWE252_Unchecked_Return_Value__char_fgets_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_06_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_01_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_01_good();");
  CWE252_Unchecked_Return_Value__char_rename_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_04_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_06_good();");
  CWE252_Unchecked_Return_Value__char_putc_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_09_good();");
  CWE252_Unchecked_Return_Value__char_putchar_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_07_good();");
  CWE252_Unchecked_Return_Value__char_fread_07_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_18_good();");
  CWE252_Unchecked_Return_Value__char_fputs_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_04_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_16_good();");
  CWE252_Unchecked_Return_Value__char_fgets_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_01_good();");
  CWE252_Unchecked_Return_Value__char_putchar_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_02_good();");
  CWE252_Unchecked_Return_Value__char_fscanf_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_03_good();");
  CWE252_Unchecked_Return_Value__char_putc_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_16_good();");
  CWE252_Unchecked_Return_Value__char_remove_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_10_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_06_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_06_good();");
  CWE252_Unchecked_Return_Value__char_fputs_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_05_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_01_good();");
  CWE252_Unchecked_Return_Value__char_fputc_01_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_13_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_08_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_10_good();");
  CWE252_Unchecked_Return_Value__char_remove_10_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_11_good();");
  CWE252_Unchecked_Return_Value__char_puts_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_09_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_17_good();");
  CWE252_Unchecked_Return_Value__char_fputc_17_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_05_good();");
  CWE252_Unchecked_Return_Value__char_fputs_05_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_12_good();");
  CWE252_Unchecked_Return_Value__char_scanf_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_06_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_06_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_12_good();");
  CWE252_Unchecked_Return_Value__char_fread_12_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_18_good();");
  CWE252_Unchecked_Return_Value__char_snprintf_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_16_good();");
  CWE252_Unchecked_Return_Value__char_putchar_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_13_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_13_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_02_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_09_good();");
  CWE252_Unchecked_Return_Value__char_fputs_09_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_02_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_02_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_14_good();");
  CWE252_Unchecked_Return_Value__char_putc_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_14_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_14_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_15_good();");
  CWE252_Unchecked_Return_Value__char_puts_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_15_good();");
  CWE252_Unchecked_Return_Value__char_fputc_15_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_18_good();");
  CWE252_Unchecked_Return_Value__char_fread_18_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_16_good();");
  CWE252_Unchecked_Return_Value__char_fwrite_16_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_11_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_03_good();");
  CWE252_Unchecked_Return_Value__char_sscanf_03_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_04_good();");
  CWE252_Unchecked_Return_Value__char_fputc_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_11_good();");
  CWE252_Unchecked_Return_Value__char_fprintf_11_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_04_good();");
  CWE252_Unchecked_Return_Value__char_fgets_04_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_08_good();");
  CWE252_Unchecked_Return_Value__char_fgets_08_good();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_13_bad();");
  CWE252_Unchecked_Return_Value__char_puts_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_13_bad();");
  CWE252_Unchecked_Return_Value__char_remove_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_10_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_18_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_14_bad();");
  CWE252_Unchecked_Return_Value__char_fread_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_05_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_15_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_05_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_13_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_14_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_16_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_18_bad();");
  CWE252_Unchecked_Return_Value__char_putc_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_11_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_10_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_10_bad();");
  CWE252_Unchecked_Return_Value__char_puts_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_17_bad();");
  CWE252_Unchecked_Return_Value__char_putc_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_11_bad();");
  CWE252_Unchecked_Return_Value__char_putc_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_07_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_08_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_18_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_13_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_10_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_07_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_05_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_04_bad();");
  CWE252_Unchecked_Return_Value__char_remove_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_11_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_12_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_11_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_10_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_14_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_03_bad();");
  CWE252_Unchecked_Return_Value__char_rename_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_16_bad();");
  CWE252_Unchecked_Return_Value__char_rename_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_04_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_16_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_09_bad();");
  CWE252_Unchecked_Return_Value__char_putc_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_06_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_09_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_03_bad();");
  CWE252_Unchecked_Return_Value__char_puts_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_09_bad();");
  CWE252_Unchecked_Return_Value__char_fread_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_03_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_05_bad();");
  CWE252_Unchecked_Return_Value__char_rename_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_11_bad();");
  CWE252_Unchecked_Return_Value__char_remove_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_10_bad();");
  CWE252_Unchecked_Return_Value__char_putc_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_16_bad();");
  CWE252_Unchecked_Return_Value__char_fread_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_09_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_14_bad();");
  CWE252_Unchecked_Return_Value__char_puts_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_09_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_05_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_16_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_09_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_13_bad();");
  CWE252_Unchecked_Return_Value__char_fread_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_07_bad();");
  CWE252_Unchecked_Return_Value__char_putc_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_13_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_04_bad();");
  CWE252_Unchecked_Return_Value__char_puts_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_14_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_10_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_01_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_17_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_04_bad();");
  CWE252_Unchecked_Return_Value__char_rename_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_13_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_03_bad();");
  CWE252_Unchecked_Return_Value__char_remove_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_18_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_08_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_07_bad();");
  CWE252_Unchecked_Return_Value__char_remove_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_10_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_07_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_08_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_02_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_05_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_14_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_03_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_18_bad();");
  CWE252_Unchecked_Return_Value__char_remove_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_18_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_13_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_01_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_02_bad();");
  CWE252_Unchecked_Return_Value__char_rename_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_14_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_06_bad();");
  CWE252_Unchecked_Return_Value__char_puts_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_09_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_09_bad();");
  CWE252_Unchecked_Return_Value__char_remove_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_03_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_01_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_13_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_17_bad();");
  CWE252_Unchecked_Return_Value__char_puts_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_10_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_06_bad();");
  CWE252_Unchecked_Return_Value__char_fread_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_02_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_02_bad();");
  CWE252_Unchecked_Return_Value__char_remove_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_12_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_03_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_07_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_04_bad();");
  CWE252_Unchecked_Return_Value__char_putc_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_08_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_16_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_07_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_17_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_16_bad();");
  CWE252_Unchecked_Return_Value__char_putc_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_12_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_13_bad();");
  CWE252_Unchecked_Return_Value__char_rename_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_12_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_06_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_17_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_12_bad();");
  CWE252_Unchecked_Return_Value__char_remove_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_03_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_11_bad();");
  CWE252_Unchecked_Return_Value__char_rename_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_17_bad();");
  CWE252_Unchecked_Return_Value__char_fread_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_08_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_10_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_18_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_07_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_06_bad();");
  CWE252_Unchecked_Return_Value__char_remove_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_04_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_08_bad();");
  CWE252_Unchecked_Return_Value__char_rename_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_08_bad();");
  CWE252_Unchecked_Return_Value__char_fread_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_01_bad();");
  CWE252_Unchecked_Return_Value__char_fread_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_07_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_07_bad();");
  CWE252_Unchecked_Return_Value__char_rename_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_18_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_04_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_15_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_06_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_15_bad();");
  CWE252_Unchecked_Return_Value__char_putc_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_11_bad();");
  CWE252_Unchecked_Return_Value__char_fread_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_16_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_12_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_04_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_14_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_02_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_11_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_05_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_05_bad();");
  CWE252_Unchecked_Return_Value__char_remove_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_12_bad();");
  CWE252_Unchecked_Return_Value__char_putc_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_17_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_05_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_18_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_07_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_01_bad();");
  CWE252_Unchecked_Return_Value__char_remove_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_11_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_15_bad();");
  CWE252_Unchecked_Return_Value__char_remove_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_15_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_16_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_09_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_01_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_09_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_17_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_08_bad();");
  CWE252_Unchecked_Return_Value__char_putc_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_04_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_15_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_10_bad();");
  CWE252_Unchecked_Return_Value__char_fread_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_03_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_03_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_05_bad();");
  CWE252_Unchecked_Return_Value__char_putc_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_14_bad();");
  CWE252_Unchecked_Return_Value__char_rename_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_15_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_18_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_06_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_03_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_06_bad();");
  CWE252_Unchecked_Return_Value__char_rename_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_11_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_12_bad();");
  CWE252_Unchecked_Return_Value__char_puts_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_08_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_13_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_15_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_05_bad();");
  CWE252_Unchecked_Return_Value__char_puts_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_17_bad();");
  CWE252_Unchecked_Return_Value__char_rename_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_14_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_11_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_07_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_02_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_08_bad();");
  CWE252_Unchecked_Return_Value__char_puts_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_17_bad();");
  CWE252_Unchecked_Return_Value__char_remove_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_18_bad();");
  CWE252_Unchecked_Return_Value__char_puts_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_12_bad();");
  CWE252_Unchecked_Return_Value__char_rename_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_17_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_13_bad();");
  CWE252_Unchecked_Return_Value__char_putc_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_04_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_14_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_08_bad();");
  CWE252_Unchecked_Return_Value__char_remove_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_15_bad();");
  CWE252_Unchecked_Return_Value__char_fread_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_15_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_13_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_01_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_11_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_04_bad();");
  CWE252_Unchecked_Return_Value__char_fread_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_02_bad();");
  CWE252_Unchecked_Return_Value__char_puts_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_03_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_12_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_08_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_05_bad();");
  CWE252_Unchecked_Return_Value__char_fread_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_05_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_01_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_18_bad();");
  CWE252_Unchecked_Return_Value__char_rename_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_07_bad();");
  CWE252_Unchecked_Return_Value__char_puts_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_14_bad();");
  CWE252_Unchecked_Return_Value__char_remove_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_16_bad();");
  CWE252_Unchecked_Return_Value__char_puts_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_08_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_12_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_10_bad();");
  CWE252_Unchecked_Return_Value__char_rename_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_06_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_15_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_17_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_07_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_16_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_12_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_15_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_02_bad();");
  CWE252_Unchecked_Return_Value__char_putc_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_01_bad();");
  CWE252_Unchecked_Return_Value__char_puts_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_01_bad();");
  CWE252_Unchecked_Return_Value__char_putc_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_02_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_02_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_09_bad();");
  CWE252_Unchecked_Return_Value__char_rename_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_03_bad();");
  CWE252_Unchecked_Return_Value__char_fread_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_17_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_06_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_09_bad();");
  CWE252_Unchecked_Return_Value__char_puts_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_14_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_15_bad();");
  CWE252_Unchecked_Return_Value__char_rename_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_02_bad();");
  CWE252_Unchecked_Return_Value__char_fread_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_12_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_02_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_10_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_17_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_01_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_06_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_01_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_rename_01_bad();");
  CWE252_Unchecked_Return_Value__char_rename_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_04_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_06_bad();");
  CWE252_Unchecked_Return_Value__char_putc_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_09_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_07_bad();");
  CWE252_Unchecked_Return_Value__char_fread_07_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_18_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_04_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_16_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_01_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fscanf_02_bad();");
  CWE252_Unchecked_Return_Value__char_fscanf_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_03_bad();");
  CWE252_Unchecked_Return_Value__char_putc_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_16_bad();");
  CWE252_Unchecked_Return_Value__char_remove_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_10_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_06_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_06_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_05_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_01_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_01_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_13_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_08_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_08_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_remove_10_bad();");
  CWE252_Unchecked_Return_Value__char_remove_10_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_11_bad();");
  CWE252_Unchecked_Return_Value__char_puts_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_09_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_17_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_17_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_05_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_05_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_scanf_12_bad();");
  CWE252_Unchecked_Return_Value__char_scanf_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_06_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_06_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_12_bad();");
  CWE252_Unchecked_Return_Value__char_fread_12_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_snprintf_18_bad();");
  CWE252_Unchecked_Return_Value__char_snprintf_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putchar_16_bad();");
  CWE252_Unchecked_Return_Value__char_putchar_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_13_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_13_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_02_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputs_09_bad();");
  CWE252_Unchecked_Return_Value__char_fputs_09_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_02_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_02_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_putc_14_bad();");
  CWE252_Unchecked_Return_Value__char_putc_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_14_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_14_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_puts_15_bad();");
  CWE252_Unchecked_Return_Value__char_puts_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_15_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_15_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fread_18_bad();");
  CWE252_Unchecked_Return_Value__char_fread_18_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fwrite_16_bad();");
  CWE252_Unchecked_Return_Value__char_fwrite_16_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_11_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_sscanf_03_bad();");
  CWE252_Unchecked_Return_Value__char_sscanf_03_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fputc_04_bad();");
  CWE252_Unchecked_Return_Value__char_fputc_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fprintf_11_bad();");
  CWE252_Unchecked_Return_Value__char_fprintf_11_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_04_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_04_bad();
  printLine("Calling CWE252_Unchecked_Return_Value__char_fgets_08_bad();");
  CWE252_Unchecked_Return_Value__char_fgets_08_bad();
  return 0;
}


void CWE252_Unchecked_Return_Value__char_snprintf_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_04_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403bb3) */

void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_14_bad(void)

{
  if (globalFive == 5) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  if (globalFive == 5) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041b261,local_10,(undefined4 *)((long)puVar2 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041b261,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041b261,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_15_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041b2e7,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b2e7,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b2e7,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_15_bad(void)

{
  fputc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_15_bad(void)

{
  putchar(0x41);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_05_bad(void)

{
  if (staticTrue != 0) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404201) */

void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 != (char *)0x0) {
    printLine(local_10);
    return;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 != (char *)0x0) {
    printLine(local_10);
    return;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE252_Unchecked_Return_Value__char_fgets_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_14_bad(void)

{
  if (globalFive == 5) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  if (globalFive == 5) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041b3e4,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041b3e4,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041b3e4,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041b415,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041b415,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041b415,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_10_bad(void)

{
  if (globalTrue != 0) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_04_bad(void)

{
  puts("string");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404879) */

void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041b485,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041b485,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041b485,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_05_bad(void)

{
  if (staticTrue != 0) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041b50c,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041b50c,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_15_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_05_bad(void)

{
  if (staticTrue != 0) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_04_bad(void)

{
  fputc(0x41,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404ce9) */

void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_scanf(&DAT_0041b58b,local_18,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    __isoc99_scanf(&DAT_0041b58b,local_10,(undefined4 *)((long)puVar3 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_scanf(&DAT_0041b58b,local_18,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    iVar1 = __isoc99_scanf(&DAT_0041b58b,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b59f,local_18);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    __isoc99_fscanf(stdin,&DAT_0041b59f,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b59f,local_18);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b59f,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041b5d7,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041b5d7,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041b5d7,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    sVar2 = fwrite("string",1,6,stdout);
    if (sVar2 != 6) {
      printLine("fwrite failed!");
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
  size_t sVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    sVar2 = fwrite("string",1,6,stdout);
    if (sVar2 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_02_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_16_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar1 = 0xb;
    puVar2 = local_80;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_18 = &local_88;
    __isoc99_sscanf("sscanf",&DAT_0041b664,local_18);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar4 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041b664,local_18);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_14_bad(void)

{
  if (globalFive == 5) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  if (globalFive == 5) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_14_bad(void)

{
  if (globalFive == 5) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  if (globalFive == 5) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041b6f9,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b6f9,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b6f9,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041b723,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b723,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041b723,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_06_bad(void)

{
  remove("removemebad.txt");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405bab) */

void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_06_good(void)

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


void CWE252_Unchecked_Return_Value__char_rename_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041b80b,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041b80b,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_10_bad(void)

{
  if (globalTrue != 0) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_12_bad(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_18 = &local_88;
    sVar2 = fread(local_18,1,99,stdin);
    if (sVar2 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_88;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_18 = &local_88;
    sVar2 = fread(local_18,1,99,stdin);
    if (sVar2 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_88;
    sVar2 = fread(local_10,1,99,stdin);
    if (sVar2 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = snprintf((char *)local_18,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = snprintf((char *)local_18,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041b891,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041b891,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_01_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_16_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_16_good(void)

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


void CWE252_Unchecked_Return_Value__char_snprintf_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_04_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004065b7) */

void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar1 = 0xb;
    puVar2 = local_80;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_18 = &local_88;
    snprintf((char *)local_18,0x5d,"%s\n","string");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar4 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = snprintf((char *)local_18,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041b94a,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041b94a,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041b970,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406852) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041b970,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041b970,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041b9a4,local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040699f) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041b9a4,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041b9a4,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_16_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_02_bad(void)

{
  fputc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_14_bad(void)

{
  if (globalFive == 5) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  if (globalFive == 5) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407173) */

void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 != (char *)0x0) {
    printLine(local_10);
    return;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 != (char *)0x0) {
    printLine(local_10);
    return;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE252_Unchecked_Return_Value__char_fgets_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041bb13,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041bb13,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041bb13,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041bb60,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041bb60,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041bb60,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041bb8a,local_10,(undefined4 *)((long)puVar2 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041bb8a,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041bb8a,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_06_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407797) */

void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_06_bad(void)

{
  putchar(0x41);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040783d) */

void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_14_bad(void)

{
  if (globalFive == 5) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  if (globalFive == 5) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_06_bad(void)

{
  fputc(0x41,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004079a8) */

void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041bcd9,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041bcd9,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041bcd9,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_15_good(void)

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


void CWE252_Unchecked_Return_Value__char_fgets_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ");
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ");
    pcVar2 = fgets((char *)local_10,100,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ");
    pcVar2 = fgets((char *)local_10,100,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_02_bad(void)

{
  putchar(0x41);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_01_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004084fe) */

void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041bde8,local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040865f) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041bde8,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041bde8,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_07_bad(void)

{
  if (staticFive == 5) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  if (staticFive == 5) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041be42,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041be42,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041be42,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_15_good(void)

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


void CWE252_Unchecked_Return_Value__char_fread_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    sVar2 = fread(local_10,1,99,stdin);
    if (sVar2 != 99) {
      printLine("fread failed!");
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
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    sVar2 = fread(local_10,1,99,stdin);
    if (sVar2 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  else {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  else {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_04_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408b8d) */

void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_16_bad(void)

{
  fputc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_04_bad(void)

{
  remove("removemebad.txt");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408c79) */

void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ");
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ");
    pcVar2 = fgets((char *)local_10,100,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ");
    pcVar2 = fgets((char *)local_10,100,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_14_bad(void)

{
  if (globalFive == 5) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  
  if (globalFive == 5) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  if (globalFive == 5) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_07_bad(void)

{
  if (staticFive == 5) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  if (staticFive == 5) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004091fe) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_06_good(void)

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


void CWE252_Unchecked_Return_Value__char_scanf_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041c079,local_10,(undefined4 *)((long)puVar3 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041c079,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041c079,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_02_bad(void)

{
  puts("string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_02_good(void)

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


void CWE252_Unchecked_Return_Value__char_putc_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_10_bad(void)

{
  if (globalTrue != 0) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_07_bad(void)

{
  if (staticFive == 5) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  if (staticFive == 5) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041c17a,local_10,(undefined4 *)((long)puVar2 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041c17a,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041c17a,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041c1a3,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041c1a3,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041c1a3,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_15_bad(void)

{
  remove("removemebad.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_04_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409a4d) */

void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_07_bad(void)

{
  if (staticFive == 5) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  if (staticFive == 5) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_07_good(void)

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


void CWE252_Unchecked_Return_Value__char_fputs_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_08_good(void)

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


void CWE252_Unchecked_Return_Value__char_puts_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_03_bad(void)

{
  remove("removemebad.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041c351,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c351,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c351,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_15_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_05_bad(void)

{
  if (staticTrue != 0) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_07_bad(void)

{
  if (staticFive == 5) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  if (staticFive == 5) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_07_good(void)

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


void CWE252_Unchecked_Return_Value__char_fputc_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_07_bad(void)

{
  if (staticFive == 5) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  if (staticFive == 5) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_03_bad(void)

{
  putchar(0x41);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a9b0) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_18_bad(void)

{
  putchar(0x41);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_06_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ab1e) */

void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041c5b0,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c5b0,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c5b0,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_01_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041c5d9,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041c5d9,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041c5d9,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_15_bad(void)

{
  puts("string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  else {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  else {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_13_good(void)

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


void CWE252_Unchecked_Return_Value__char_fwrite_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    sVar2 = fwrite("string",1,6,stdout);
    if (sVar2 != 6) {
      printLine("fwrite failed!");
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
  size_t sVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    sVar2 = fwrite("string",1,6,stdout);
    if (sVar2 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041c696,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041c696,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_10_bad(void)

{
  if (globalTrue != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c6d4,local_18);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    __isoc99_sscanf("sscanf",&DAT_0041c6d4,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c6d4,local_18);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  else {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_88;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c6d4,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    putchar(0x41);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041c73b,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041c73b,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041c74f,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041c74f,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar1 = 0xb;
    puVar2 = local_80;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_18 = &local_88;
    fread(local_18,1,99,stdin);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar4 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    sVar1 = fread(local_18,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_05_bad(void)

{
  if (staticTrue != 0) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_10_bad(void)

{
  if (globalTrue != 0) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041c7db,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c7db,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c7db,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041c80c,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c80c,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c80c,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_03_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_16_bad(void)

{
  putchar(0x41);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    rename("oldbadfilename.txt","newbadfilename.txt");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_05_bad(void)

{
  if (staticTrue != 0) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_05_good(void)

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


void CWE252_Unchecked_Return_Value__char_remove_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_10_bad(void)

{
  if (globalTrue != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  
  if (globalFalse == 0) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  if (globalTrue != 0) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_18_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_01_bad(void)

{
  putchar(0x41);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041c98f,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c98f,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041c98f,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_02_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_15_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_16_bad(void)

{
  remove("removemebad.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041cb0c,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ca1f) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041cb0c,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041cb0c,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_04_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cb39) */

void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_12_bad(void)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    sVar2 = fwrite("string",1,6,stdout);
    if (sVar2 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    sVar2 = fwrite("string",1,6,stdout);
    if (sVar2 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    sVar2 = fwrite("string",1,6,stdout);
    if (sVar2 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041cb84,local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cd0a) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041cb84,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041cb84,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_10_bad(void)

{
  if (globalTrue != 0) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_14_bad(void)

{
  if (globalFive == 5) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  if (globalFive == 5) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_07_bad(void)

{
  if (staticFive == 5) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  if (staticFive == 5) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_01_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_06_bad(void)

{
  puts("string");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d172) */

void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_05_bad(void)

{
  if (staticTrue != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar1 = 0xb;
    puVar2 = local_80;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_18 = &local_88;
    __isoc99_fscanf(stdin,&DAT_0041ce0f,local_18);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar4 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041ce0f,local_18);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_05_bad(void)

{
  if (staticTrue != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  
  if (staticFalse == 0) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  if (staticTrue != 0) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_18_bad(void)

{
  remove("removemebad.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041ce7f,local_10,(undefined4 *)((long)puVar3 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041ce7f,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041ce7f,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041cea8,local_10,(undefined4 *)((long)puVar2 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041cea8,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041cea8,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041ced1,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041ced1,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041ced1,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041cefb,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041cefb,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041cefb,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    fwrite("string",1,6,stdout);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_01_bad(void)

{
  fputc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    sVar2 = fread(local_10,1,99,stdin);
    if (sVar2 != 99) {
      printLine("fread failed!");
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
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar3 = 0xb;
    puVar4 = local_70;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_78;
    sVar2 = fread(local_10,1,99,stdin);
    if (sVar2 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041cfb5,local_10,(undefined4 *)((long)puVar2 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041cfb5,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041cfb5,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  else {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  else {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041d00e,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041d00e,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041d00e,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_03_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_fscanf(stdin,&DAT_0041d07c,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_fscanf(stdin,&DAT_0041d07c,local_10);
  if (iVar1 == -1) {
    printLine("fscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e874) */

void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_18_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_07_bad(void)

{
  if (staticFive == 5) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFive == 5) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  if (staticFive == 5) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    remove("removemebad.txt");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  fread(local_10,1,99,stdin);
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  sVar1 = fread(local_10,1,99,stdin);
  if (sVar1 != 99) {
    printLine("fread failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041d19a,local_10);
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041d19a,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    puts("string");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_18_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    snprintf((char *)local_10,0x5d,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
    if (iVar1 < 0) {
      printLine("snprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  if (GLOBAL_CONST_FIVE == 5) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_02_bad(void)

{
  remove("removemebad.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  else {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  else {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_03_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_16_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_scanf(&DAT_0041d415,local_10,(undefined4 *)((long)puVar2 + 4));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041d415,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_scanf(&DAT_0041d415,local_10,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_18_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_03_bad(void)

{
  puts("string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_03_good(void)

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


void CWE252_Unchecked_Return_Value__char_fscanf_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    __isoc99_fscanf(stdin,&DAT_0041d45f,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041d45f,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_fscanf(stdin,&DAT_0041d45f,local_10);
    if (iVar1 == -1) {
      printLine("fscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fscanf_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_10_bad(void)

{
  if (globalTrue != 0) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041d4f1,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041d4f1,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041d4f1,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_12_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_18 = &local_88;
    printLine("Please enter a string: ");
    pcVar2 = fgets((char *)local_18,100,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_18);
  }
  else {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_88;
    printLine("Please enter a string: ");
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_18 = &local_88;
    printLine("Please enter a string: ");
    pcVar2 = fgets((char *)local_18,100,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_18);
  }
  else {
    local_88 = 0;
    lVar3 = 0xb;
    puVar4 = local_80;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = &local_88;
    printLine("Please enter a string: ");
    pcVar2 = fgets((char *)local_10,100,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_18_bad(void)

{
  puts("string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_18_good(void)

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


void CWE252_Unchecked_Return_Value__char_fprintf_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_03_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    fprintf(stdout,"%s\n","string");
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_17_good(void)

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


void CWE252_Unchecked_Return_Value__char_putchar_08_bad(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    putchar(0x41);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
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
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = putchar(0x41);
    if (iVar1 == -1) {
      printLine("putchar failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_01_bad(void)

{
  remove("removemebad.txt");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = remove("removemegood.txt");
  if (iVar1 != 0) {
    printLine("remove failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_03_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_scanf(&DAT_0041d61e,local_10,(undefined4 *)((long)puVar2 + 4));
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041d61e,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_scanf(&DAT_0041d61e,local_10,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == -1) {
    printLine("scanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_15_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_02_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_07_bad(void)

{
  if (staticFive == 5) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  
  if (staticFive == 5) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  if (staticFive == 5) {
    sVar1 = fwrite("string",1,6,stdout);
    if (sVar1 != 6) {
      printLine("fwrite failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  else {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  else {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar1 = 0xb;
    puVar2 = local_80;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_18 = &local_88;
    printLine("Please enter a string: ");
    fgets((char *)local_18,100,stdin);
    printLine(local_18);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar4 = 0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    printLine("Please enter a string: ");
    pcVar1 = fgets((char *)local_18,100,stdin);
    if (pcVar1 == (char *)0x0) break;
    printLine(local_18);
    local_c = local_c + 1;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE252_Unchecked_Return_Value__char_fgets_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  __isoc99_sscanf("sscanf",&DAT_0041d6f4,local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004108bc) */

void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041d6f4,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = __isoc99_sscanf("sscanf",&DAT_0041d6f4,local_10);
  if (iVar1 == -1) {
    printLine("sscanf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_18_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_18_good(void)

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


void CWE252_Unchecked_Return_Value__char_sscanf_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    __isoc99_sscanf("sscanf",&DAT_0041d73a,local_10);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041d73a,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
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
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar4 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    iVar1 = __isoc99_sscanf("sscanf",&DAT_0041d73a,local_10);
    if (iVar1 == -1) {
      printLine("sscanf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_sscanf_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_16_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    remove("removemebad.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = remove("removemegood.txt");
    if (iVar1 != 0) {
      printLine("remove failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_remove_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  else {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  else {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_06_bad(void)

{
  rename("oldbadfilename.txt","newbadfilename.txt");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410eda) */

void good1(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
  if (iVar1 != 0) {
    printLine("rename failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_03_bad(void)

{
  fputc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_18_bad(void)

{
  fputc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("fputc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_18_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    _IO_putc(0x41,stdout);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_01_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_02_bad(void)

{
  _IO_putc(0x41,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = _IO_putc(0x41,stdout);
  if (iVar1 == -1) {
    printLine("putc failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
    fgets((char *)local_10,100,stdin);
    printLine(local_10);
  }
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
    pcVar1 = fgets((char *)local_10,100,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printLine(local_10);
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_06_bad(void)

{
  fprintf(stdout,"%s\n","string");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004115b8) */

void good1(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fprintf(stdout,"%s\n","string");
  if (iVar1 < 0) {
    printLine("fprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  snprintf((char *)local_10,0x5d,"%s\n","string");
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = snprintf((char *)local_10,0x5d,"%s\n","string");
  if (iVar1 < 0) {
    printLine("snprintf failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_snprintf_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    fputc(0x41,stdout);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar2 + 4));
  fgets((char *)local_10,100,stdin);
  printLine(local_10);
  return;
}


void good1(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  printLine("Please enter a string: ",uParm2,(undefined4 *)((long)puVar3 + 4));
  pcVar1 = fgets((char *)local_10,100,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printLine(local_10);
  return;
}


void CWE252_Unchecked_Return_Value__char_fgets_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    fwrite("string",1,6,stdout);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar1 = 0xb;
    puVar2 = local_70;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_10 = &local_78;
    fread(local_10,1,99,stdin);
  }
  return;
}


void good1(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar2 = 0xb;
    puVar3 = local_70;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_10 = &local_78;
    sVar1 = fread(local_10,1,99,stdin);
    if (sVar1 != 99) {
      printLine("fread failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fread_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  else {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  else {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_11_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    fwrite("string",1,6,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
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
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    iVar1 = fputs("string",stdout);
    if (iVar1 == -1) {
      printLine("fputs failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_02_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = fputs("string",stdout);
  if (iVar1 == -1) {
    printLine("fputs failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputs_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    puts("string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = puts("string");
    if (iVar1 == -1) {
      printLine("puts failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  if (GLOBAL_CONST_TRUE != 0) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_01_bad(void)

{
  puts("string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_01_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_12_bad(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  else {
    _IO_putc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  else {
    iVar1 = _IO_putc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("putc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putc_12_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_06_bad(void)

{
  fwrite("string",1,6,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411f4e) */

void good1(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void good2(void)

{
  size_t sVar1;
  
  sVar1 = fwrite("string",1,6,stdout);
  if (sVar1 != 6) {
    printLine("fwrite failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fwrite_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar1 = 0xb;
    puVar2 = local_80;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar2 = 0;
    local_18 = &local_88;
    __isoc99_scanf(&DAT_0041dba7,local_18,(undefined4 *)((long)puVar2 + 4));
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  bVar4 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_88 = 0;
    lVar2 = 0xb;
    puVar3 = local_80;
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar3 = 0;
    local_18 = &local_88;
    iVar1 = __isoc99_scanf(&DAT_0041dba7,local_18,(undefined4 *)((long)puVar3 + 4));
    if (iVar1 == -1) {
      printLine("scanf failed!");
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_scanf_17_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_14_bad(void)

{
  if (globalFive == 5) {
    rename("oldbadfilename.txt","newbadfilename.txt");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFive == 5) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
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
  
  if (globalFive == 5) {
    iVar1 = rename("oldgoodfilename.txt","newgoodfilename.txt");
    if (iVar1 != 0) {
      printLine("rename failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_rename_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_10_bad(void)

{
  if (globalTrue != 0) {
    fputc(0x41,stdout);
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (globalFalse == 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
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
  
  if (globalTrue != 0) {
    iVar1 = fputc(0x41,stdout);
    if (iVar1 == -1) {
      printLine("fputc failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fputc_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_16_bad(void)

{
  puts("string");
  return;
}


void good1(void)

{
  int iVar1;
  
  iVar1 = puts("string");
  if (iVar1 == -1) {
    printLine("puts failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_puts_16_good(void)

{
  good1();
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_04_bad(void)

{
  putchar(0x41);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041227a) */

void good1(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void good2(void)

{
  int iVar1;
  
  iVar1 = putchar(0x41);
  if (iVar1 == -1) {
    printLine("putchar failed!");
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_putchar_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_05_bad(void)

{
  if (staticTrue != 0) {
    fprintf(stdout,"%s\n","string");
  }
  return;
}


void good1(void)

{
  int iVar1;
  
  if (staticFalse == 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
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
  
  if (staticTrue != 0) {
    iVar1 = fprintf(stdout,"%s\n","string");
    if (iVar1 < 0) {
      printLine("fprintf failed!");
    }
  }
  return;
}


void CWE252_Unchecked_Return_Value__char_fprintf_05_good(void)

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
  printf((char *)(double)fParm1,&DAT_0041dce1);
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
  printf(pcParm1,&DAT_0041dcfe);
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
    __isoc99_sscanf(lVar1,&DAT_0041dd0c,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0041dd14,&local_14);
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

