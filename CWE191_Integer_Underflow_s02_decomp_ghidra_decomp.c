
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00675ff8;
  if (PTR___gmon_start___00675ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400bf0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00676010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00676018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00676020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00676028)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_00676030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00676038)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00676040)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00676048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00676050)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00676058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00676060)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00676068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00676070)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00676078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00676080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00676088)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00676090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00676098)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_006760a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006760a8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_006760b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_006760b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_006760c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006760c8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006760d0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006760d8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_006760e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006760e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006760f0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006760f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00676100)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00676108)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00676110)();
  return tVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

in_addr_t inet_addr(char *__cp)

{
  in_addr_t iVar1;
  
  iVar1 = (*(code *)PTR_inet_addr_00676118)();
  return iVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00675ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400e67) */
/* WARNING: Removing unreachable block (ram,0x00400e71) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400ea4) */
/* WARNING: Removing unreachable block (ram,0x00400eae) */

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


/* WARNING: Removing unreachable block (ram,0x00400ef4) */
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
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_16_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_22_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_12_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_16_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_17_good();");
  CWE191_Integer_Underflow__int_fgets_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_54_good();");
  CWE191_Integer_Underflow__int_min_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_41_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_16_good();");
  CWE191_Integer_Underflow__int_min_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_66_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_03_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_52_good();");
  CWE191_Integer_Underflow__int_fgets_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_06_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_08_good();");
  CWE191_Integer_Underflow__int_fgets_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_61_good();");
  CWE191_Integer_Underflow__int_min_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_02_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_51_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_08_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_31_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_13_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_12_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_63_good();");
  CWE191_Integer_Underflow__int_fgets_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_10_good();");
  CWE191_Integer_Underflow__int_min_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_34_good();");
  CWE191_Integer_Underflow__int_min_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_15_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_08_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_02_good();");
  CWE191_Integer_Underflow__int_min_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_66_good();");
  CWE191_Integer_Underflow__int_min_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_18_good();");
  CWE191_Integer_Underflow__int_fgets_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_54_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_45_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_41_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_12_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_65_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_12_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_15_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_63_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_45_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_18_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_05_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_17_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_64_good();");
  CWE191_Integer_Underflow__int_min_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_15_good();");
  CWE191_Integer_Underflow__int_fgets_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_64_good();");
  CWE191_Integer_Underflow__int_min_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_45_good();");
  CWE191_Integer_Underflow__int_min_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_68_good();");
  CWE191_Integer_Underflow__int_min_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_44_good();");
  CWE191_Integer_Underflow__int_min_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_06_good();");
  CWE191_Integer_Underflow__int_min_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_17_good();");
  CWE191_Integer_Underflow__int_min_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_02_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_44_good();");
  CWE191_Integer_Underflow__int_fgets_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_34_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_32_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_52_good();");
  CWE191_Integer_Underflow__int_min_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_09_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_05_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_03_good();");
  CWE191_Integer_Underflow__int_fgets_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_17_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_61_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_54_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_41_good();");
  CWE191_Integer_Underflow__int_min_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_45_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_32_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_04_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_02_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_61_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_15_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_31_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_41_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_52_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_52_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_15_good();");
  CWE191_Integer_Underflow__int_min_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_13_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_17_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_01_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_45_good();");
  CWE191_Integer_Underflow__int_min_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_11_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_41_good();");
  CWE191_Integer_Underflow__int_min_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_22_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_34_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_05_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_21_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_65_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_21_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_14_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_07_good();");
  CWE191_Integer_Underflow__int_min_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_06_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_51_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_44_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_42_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_22_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_52_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_64_good();");
  CWE191_Integer_Underflow__int_fgets_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_17_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_13_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_15_good();");
  CWE191_Integer_Underflow__int_min_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_10_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_10_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_03_good();");
  CWE191_Integer_Underflow__int_min_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_09_good();");
  CWE191_Integer_Underflow__int_min_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_42_good();");
  CWE191_Integer_Underflow__int_fgets_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_53_good();");
  CWE191_Integer_Underflow__int_min_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_10_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_21_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_34_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_14_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_11_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_22_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_31_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_15_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_08_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_67_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_12_good();");
  CWE191_Integer_Underflow__int_fgets_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_41_good();");
  CWE191_Integer_Underflow__int_fgets_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_16_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_21_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_01_good();");
  CWE191_Integer_Underflow__int_min_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_22_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_66_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_52_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_68_good();");
  CWE191_Integer_Underflow__int_fgets_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_63_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_11_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_44_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_03_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_17_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_03_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_42_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_18_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_63_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_04_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_65_good();");
  CWE191_Integer_Underflow__int_min_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_11_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_10_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_66_good();");
  CWE191_Integer_Underflow__int_fgets_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_54_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_22_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_12_good();");
  CWE191_Integer_Underflow__int_min_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_65_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_31_good();");
  CWE191_Integer_Underflow__int_fgets_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_45_good();");
  CWE191_Integer_Underflow__int_fgets_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_68_good();");
  CWE191_Integer_Underflow__int_min_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_44_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_05_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_32_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_31_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_53_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_13_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_22_good();");
  CWE191_Integer_Underflow__int_min_multiply_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_04_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_52_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_09_good();");
  CWE191_Integer_Underflow__int_min_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_41_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_05_good();");
  CWE191_Integer_Underflow__int_min_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_13_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_21_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_14_good();");
  CWE191_Integer_Underflow__int_min_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_41_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_05_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_54_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_09_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_51_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_51_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_61_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_13_good();");
  CWE191_Integer_Underflow__int_min_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_16_good();");
  CWE191_Integer_Underflow__int_fgets_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_32_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_42_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_32_good();");
  CWE191_Integer_Underflow__int_fgets_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_45_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_09_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_18_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_02_good();");
  CWE191_Integer_Underflow__int_fgets_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_32_good();");
  CWE191_Integer_Underflow__int_min_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_42_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_64_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_06_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_66_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_41_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_12_good();");
  CWE191_Integer_Underflow__int_min_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_15_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_63_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_54_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_01_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_53_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_04_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_45_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_02_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_11_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_53_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_52_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_15_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_65_good();");
  CWE191_Integer_Underflow__int_fgets_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_65_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_05_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_02_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_11_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_01_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_41_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_04_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_67_good();");
  CWE191_Integer_Underflow__int_min_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_67_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_21_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_64_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_67_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_42_good();");
  CWE191_Integer_Underflow__int_min_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_51_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_34_good();");
  CWE191_Integer_Underflow__int_fgets_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_31_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_16_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_67_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_07_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_05_good();");
  CWE191_Integer_Underflow__int_fgets_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_63_good();");
  CWE191_Integer_Underflow__int_min_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_67_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_68_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_07_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_04_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_34_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_06_good();");
  CWE191_Integer_Underflow__int_fgets_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_17_good();");
  CWE191_Integer_Underflow__int_min_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_11_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_13_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_01_good();");
  CWE191_Integer_Underflow__int_min_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_08_good();");
  CWE191_Integer_Underflow__int_min_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_45_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_32_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_52_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_53_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_63_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_04_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_32_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_44_good();");
  CWE191_Integer_Underflow__int_min_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_16_good();");
  CWE191_Integer_Underflow__int_min_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_61_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_68_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_34_good();");
  CWE191_Integer_Underflow__int_min_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_03_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_11_good();");
  CWE191_Integer_Underflow__int_min_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_65_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_09_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_17_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_18_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_67_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_66_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_06_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_51_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_21_good();");
  CWE191_Integer_Underflow__int_fgets_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_17_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_42_good();");
  CWE191_Integer_Underflow__int_min_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_42_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_54_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_07_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_51_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_16_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_02_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_10_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_11_good();");
  CWE191_Integer_Underflow__int_fgets_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_11_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_68_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_08_good();");
  CWE191_Integer_Underflow__int_min_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_16_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_54_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_61_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_05_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_14_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_66_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_18_good();");
  CWE191_Integer_Underflow__int_min_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_68_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_34_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_10_good();");
  CWE191_Integer_Underflow__int_fgets_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_06_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_14_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_07_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_67_good();");
  CWE191_Integer_Underflow__int_min_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_52_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_61_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_02_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_06_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_10_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_22_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_61_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_51_good();");
  CWE191_Integer_Underflow__int_fgets_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_08_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_12_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_31_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_03_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_34_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_65_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_18_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_34_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_12_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_21_good();");
  CWE191_Integer_Underflow__int_min_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_54_good();");
  CWE191_Integer_Underflow__int_fgets_sub_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_51_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_42_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_13_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_66_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_06_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_22_good();");
  CWE191_Integer_Underflow__int_min_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_02_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_04_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_54_good();");
  CWE191_Integer_Underflow__int_min_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_53_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_53_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_12_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_10_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_68_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_01_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_63_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_34_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_68_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_01_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_64_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_68_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_08_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_31_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_42_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_12_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_14_good();");
  CWE191_Integer_Underflow__int_fgets_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_01_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_07_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_07_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_03_good();");
  CWE191_Integer_Underflow__int_min_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_13_good();");
  CWE191_Integer_Underflow__int_min_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_44_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_65_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_64_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_03_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_32_good();");
  CWE191_Integer_Underflow__int_min_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_01_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_08_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_07_good();");
  CWE191_Integer_Underflow__int_fgets_sub_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_07_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_09_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_61_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_67_good();");
  CWE191_Integer_Underflow__int_fgets_sub_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_66_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_21_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_01_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_11_good();");
  CWE191_Integer_Underflow__int_min_multiply_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_10_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_66_good();");
  CWE191_Integer_Underflow__int_min_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_32_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_14_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_10_good();");
  CWE191_Integer_Underflow__int_min_multiply_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_07_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_03_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_44_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_52_good();");
  CWE191_Integer_Underflow__int_min_sub_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_51_good();");
  CWE191_Integer_Underflow__int_min_multiply_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_44_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_22_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_53_good();");
  CWE191_Integer_Underflow__int_min_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_31_good();");
  CWE191_Integer_Underflow__int_min_sub_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_13_good();");
  CWE191_Integer_Underflow__int_fgets_sub_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_54_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_04_good();");
  CWE191_Integer_Underflow__int_min_multiply_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_45_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_14_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_16_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_31_good();");
  CWE191_Integer_Underflow__int_min_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_51_good();");
  CWE191_Integer_Underflow__int_min_sub_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_66_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_44_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_61_good();");
  CWE191_Integer_Underflow__int_min_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_64_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_21_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_09_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_53_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_01_good();");
  CWE191_Integer_Underflow__int_fgets_sub_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_18_good();");
  CWE191_Integer_Underflow__int_min_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_64_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_18_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_03_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_18_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_44_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_61_good();");
  CWE191_Integer_Underflow__int_fgets_sub_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_17_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_04_good();");
  CWE191_Integer_Underflow__int_min_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_15_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_06_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_09_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_31_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_65_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_64_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_06_good();");
  CWE191_Integer_Underflow__int_min_sub_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_09_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_63_good();");
  CWE191_Integer_Underflow__int_min_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_14_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_21_good();");
  CWE191_Integer_Underflow__int_min_multiply_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_32_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_45_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_04_good();");
  CWE191_Integer_Underflow__int_fgets_sub_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_05_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_64_good();");
  CWE191_Integer_Underflow__int64_t_rand_sub_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_67_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_63_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_14_good();");
  CWE191_Integer_Underflow__int_fgets_multiply_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_67_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_15_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_41_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_63_good();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_53_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_16_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_05_good();");
  CWE191_Integer_Underflow__int_min_sub_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_07_good();");
  CWE191_Integer_Underflow__int_min_multiply_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_08_good();");
  CWE191_Integer_Underflow__int_connect_socket_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_22_good();");
  CWE191_Integer_Underflow__int_fgets_sub_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_42_good();");
  CWE191_Integer_Underflow__int_fscanf_sub_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_02_good();");
  CWE191_Integer_Underflow__int_min_sub_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_14_good();");
  CWE191_Integer_Underflow__int_min_sub_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_18_good();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_13_good();");
  CWE191_Integer_Underflow__int_fscanf_multiply_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_65_good();");
  CWE191_Integer_Underflow__int_min_sub_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_68_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_08_good();");
  CWE191_Integer_Underflow__int_listen_socket_sub_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_53_good();");
  CWE191_Integer_Underflow__int_fgets_sub_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_09_good();");
  CWE191_Integer_Underflow__int_fgets_sub_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_16_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_22_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_12_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_16_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_17_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_54_bad();");
  CWE191_Integer_Underflow__int_min_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_41_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_16_bad();");
  CWE191_Integer_Underflow__int_min_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_66_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_03_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_52_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_06_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_08_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_61_bad();");
  CWE191_Integer_Underflow__int_min_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_02_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_51_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_08_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_31_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_13_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_12_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_63_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_10_bad();");
  CWE191_Integer_Underflow__int_min_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_34_bad();");
  CWE191_Integer_Underflow__int_min_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_15_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_08_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_02_bad();");
  CWE191_Integer_Underflow__int_min_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_66_bad();");
  CWE191_Integer_Underflow__int_min_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_18_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_54_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_45_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_41_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_12_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_65_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_12_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_15_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_63_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_45_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_18_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_05_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_17_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_64_bad();");
  CWE191_Integer_Underflow__int_min_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_15_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_64_bad();");
  CWE191_Integer_Underflow__int_min_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_45_bad();");
  CWE191_Integer_Underflow__int_min_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_68_bad();");
  CWE191_Integer_Underflow__int_min_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_44_bad();");
  CWE191_Integer_Underflow__int_min_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_06_bad();");
  CWE191_Integer_Underflow__int_min_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_17_bad();");
  CWE191_Integer_Underflow__int_min_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_02_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_44_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_34_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_32_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_52_bad();");
  CWE191_Integer_Underflow__int_min_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_09_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_05_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_03_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_17_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_61_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_54_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_41_bad();");
  CWE191_Integer_Underflow__int_min_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_45_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_32_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_04_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_02_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_61_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_15_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_31_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_41_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_52_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_52_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_15_bad();");
  CWE191_Integer_Underflow__int_min_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_13_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_17_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_01_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_45_bad();");
  CWE191_Integer_Underflow__int_min_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_11_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_41_bad();");
  CWE191_Integer_Underflow__int_min_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_22_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_34_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_05_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_21_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_65_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_21_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_14_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_07_bad();");
  CWE191_Integer_Underflow__int_min_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_06_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_51_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_44_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_42_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_22_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_52_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_64_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_17_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_13_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_15_bad();");
  CWE191_Integer_Underflow__int_min_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_10_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_10_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_03_bad();");
  CWE191_Integer_Underflow__int_min_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_09_bad();");
  CWE191_Integer_Underflow__int_min_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_42_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_53_bad();");
  CWE191_Integer_Underflow__int_min_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_10_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_21_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_34_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_14_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_11_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_22_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_31_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_15_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_08_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_67_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_12_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_41_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_16_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_21_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_01_bad();");
  CWE191_Integer_Underflow__int_min_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_22_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_66_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_52_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_68_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_63_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_11_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_44_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_03_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_17_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_03_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_42_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_18_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_63_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_04_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_65_bad();");
  CWE191_Integer_Underflow__int_min_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_11_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_10_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_66_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_54_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_22_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_12_bad();");
  CWE191_Integer_Underflow__int_min_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_65_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_31_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_45_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_68_bad();");
  CWE191_Integer_Underflow__int_min_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_44_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_05_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_32_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_31_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_53_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_13_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_22_bad();");
  CWE191_Integer_Underflow__int_min_multiply_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_04_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_52_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_09_bad();");
  CWE191_Integer_Underflow__int_min_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_41_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_05_bad();");
  CWE191_Integer_Underflow__int_min_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_13_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_21_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_14_bad();");
  CWE191_Integer_Underflow__int_min_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_41_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_05_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_54_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_09_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_51_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_51_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_61_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_13_bad();");
  CWE191_Integer_Underflow__int_min_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_16_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_32_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_42_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_32_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_45_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_09_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_18_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_02_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_32_bad();");
  CWE191_Integer_Underflow__int_min_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_42_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_64_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_06_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_66_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_41_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_12_bad();");
  CWE191_Integer_Underflow__int_min_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_15_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_63_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_54_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_01_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_53_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_04_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_45_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_02_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_11_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_53_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_52_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_15_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_65_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_65_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_05_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_02_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_11_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_01_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_41_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_04_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_67_bad();");
  CWE191_Integer_Underflow__int_min_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_67_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_21_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_64_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_67_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_42_bad();");
  CWE191_Integer_Underflow__int_min_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_51_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_34_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_31_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_16_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_67_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_07_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_05_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_63_bad();");
  CWE191_Integer_Underflow__int_min_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_67_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_68_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_07_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_04_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_34_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_06_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_17_bad();");
  CWE191_Integer_Underflow__int_min_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_11_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_13_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_01_bad();");
  CWE191_Integer_Underflow__int_min_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_08_bad();");
  CWE191_Integer_Underflow__int_min_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_45_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_32_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_52_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_53_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_63_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_04_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_32_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_44_bad();");
  CWE191_Integer_Underflow__int_min_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_16_bad();");
  CWE191_Integer_Underflow__int_min_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_61_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_68_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_34_bad();");
  CWE191_Integer_Underflow__int_min_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_03_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_11_bad();");
  CWE191_Integer_Underflow__int_min_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_65_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_09_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_17_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_18_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_67_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_66_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_06_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_51_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_21_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_17_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_42_bad();");
  CWE191_Integer_Underflow__int_min_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_42_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_54_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_07_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_51_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_16_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_02_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_10_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_11_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_11_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_68_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_08_bad();");
  CWE191_Integer_Underflow__int_min_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_16_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_54_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_61_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_05_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_14_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_66_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_18_bad();");
  CWE191_Integer_Underflow__int_min_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_68_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_34_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_10_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_06_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_14_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_07_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_67_bad();");
  CWE191_Integer_Underflow__int_min_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_52_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_61_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_02_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_06_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_10_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_22_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_61_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_51_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_08_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_12_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_31_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_03_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_34_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_65_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_18_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_34_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_12_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_21_bad();");
  CWE191_Integer_Underflow__int_min_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_54_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_51_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_42_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_13_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_66_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_06_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_22_bad();");
  CWE191_Integer_Underflow__int_min_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_02_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_04_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_54_bad();");
  CWE191_Integer_Underflow__int_min_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_53_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_53_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_12_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_10_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_68_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_01_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_63_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_34_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_68_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_01_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_64_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_68_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_08_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_31_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_42_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_12_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_14_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_01_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_07_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_07_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_03_bad();");
  CWE191_Integer_Underflow__int_min_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_13_bad();");
  CWE191_Integer_Underflow__int_min_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_44_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_65_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_64_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_03_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_32_bad();");
  CWE191_Integer_Underflow__int_min_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_01_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_08_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_07_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_07_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_09_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_61_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_67_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_66_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_21_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_01_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_11_bad();");
  CWE191_Integer_Underflow__int_min_multiply_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_10_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_66_bad();");
  CWE191_Integer_Underflow__int_min_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_32_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_14_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_10_bad();");
  CWE191_Integer_Underflow__int_min_multiply_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_07_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_03_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_44_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_52_bad();");
  CWE191_Integer_Underflow__int_min_sub_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_51_bad();");
  CWE191_Integer_Underflow__int_min_multiply_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_44_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_22_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_53_bad();");
  CWE191_Integer_Underflow__int_min_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_31_bad();");
  CWE191_Integer_Underflow__int_min_sub_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_13_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_54_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_04_bad();");
  CWE191_Integer_Underflow__int_min_multiply_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_45_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_14_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_16_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_31_bad();");
  CWE191_Integer_Underflow__int_min_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_51_bad();");
  CWE191_Integer_Underflow__int_min_sub_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_66_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_44_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_61_bad();");
  CWE191_Integer_Underflow__int_min_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_64_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_21_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_09_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_53_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_01_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_18_bad();");
  CWE191_Integer_Underflow__int_min_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_64_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_18_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_03_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_18_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_44_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_61_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_17_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_04_bad();");
  CWE191_Integer_Underflow__int_min_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_15_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_06_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_09_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_31_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_65_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_64_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_06_bad();");
  CWE191_Integer_Underflow__int_min_sub_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_09_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_63_bad();");
  CWE191_Integer_Underflow__int_min_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_14_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_21_bad();");
  CWE191_Integer_Underflow__int_min_multiply_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_32_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_45_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_04_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_05_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_sub_64_bad();");
  CWE191_Integer_Underflow__int64_t_rand_sub_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_67_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_63_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_multiply_14_bad();");
  CWE191_Integer_Underflow__int_fgets_multiply_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_67_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_15_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_41_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_multiply_63_bad();");
  CWE191_Integer_Underflow__int_listen_socket_multiply_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_53_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_16_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_05_bad();");
  CWE191_Integer_Underflow__int_min_sub_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_multiply_07_bad();");
  CWE191_Integer_Underflow__int_min_multiply_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_sub_08_bad();");
  CWE191_Integer_Underflow__int_connect_socket_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_22_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_sub_42_bad();");
  CWE191_Integer_Underflow__int_fscanf_sub_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_02_bad();");
  CWE191_Integer_Underflow__int_min_sub_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_14_bad();");
  CWE191_Integer_Underflow__int_min_sub_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_multiply_18_bad();");
  CWE191_Integer_Underflow__int_connect_socket_multiply_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_multiply_13_bad();");
  CWE191_Integer_Underflow__int_fscanf_multiply_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_sub_65_bad();");
  CWE191_Integer_Underflow__int_min_sub_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_68_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_sub_08_bad();");
  CWE191_Integer_Underflow__int_listen_socket_sub_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_53_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_sub_09_bad();");
  CWE191_Integer_Underflow__int_fgets_sub_09_bad();
  return 0;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52c_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52c_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52c_goodB2GSink(int iParm1)

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


/* WARNING: Removing unreachable block (ram,0x00405138) */

void CWE191_Integer_Underflow__int_min_multiply_03_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405168) */
/* WARNING: Removing unreachable block (ram,0x00405185) */
/* WARNING: Removing unreachable block (ram,0x00405171) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004051ad) */
/* WARNING: Removing unreachable block (ram,0x004051ca) */
/* WARNING: Removing unreachable block (ram,0x004051b6) */

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


void CWE191_Integer_Underflow__int_min_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_64b_goodB2GSink(&local_18);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004058d4) */

void CWE191_Integer_Underflow__int_min_multiply_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405910) */
/* WARNING: Removing unreachable block (ram,0x00405922) */
/* WARNING: Removing unreachable block (ram,0x0040593f) */
/* WARNING: Removing unreachable block (ram,0x0040592b) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405979) */
/* WARNING: Removing unreachable block (ram,0x00405996) */
/* WARNING: Removing unreachable block (ram,0x00405982) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004059ba) */

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


void CWE191_Integer_Underflow__int_min_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405a88) */

void CWE191_Integer_Underflow__int_min_multiply_31_bad(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405b00) */
/* WARNING: Removing unreachable block (ram,0x00405b1d) */
/* WARNING: Removing unreachable block (ram,0x00405b09) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_63b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_63b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_63b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_connect_socket_multiply_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_44_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
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


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_22_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_connect_socket_sub_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_connect_socket_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_67_bad(void)

{
  CWE191_Integer_Underflow__int_min_multiply_67b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_multiply_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_multiply_67b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_12_bad(void)

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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  else {
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  else {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_64_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_multiply_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_53d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_53d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_53d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_22_badSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_min_multiply_22_badGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_multiply_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_min_multiply_22_goodB2G2Sink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_min_multiply_22_goodB2G2Global != 0) && (iParm1 < 0)) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_22_goodG2BSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_min_multiply_22_goodG2BGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_14_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00453310,&local_10);
  }
  if (globalFive == 5) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00453310,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00453310,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_65_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_fgets_sub_65b_badSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_fgets_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_fgets_sub_65b_goodB2GSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_16_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_multiply_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_63b_goodB2GSink(&local_18);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_68_badData = local_c;
  CWE191_Integer_Underflow__int_listen_socket_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__int_listen_socket_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if ((badStatic != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_21_bad(void)

{
  badStatic = 1;
  badSink(0x80000000);
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
  goodB2G1Static = 0;
  goodB2G1Sink(0x80000000);
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
  goodB2G2Static = 1;
  goodB2G2Sink(0x80000000);
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


void CWE191_Integer_Underflow__int_min_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53d_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53d_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53d_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int64_t_rand_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_65b_badSink(uVar7,uParm2,uVar7);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_65b_goodG2BSink
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
  CWE191_Integer_Underflow__int64_t_rand_sub_65b_goodB2GSink(uVar7,uParm2,uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
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


void CWE191_Integer_Underflow__int_fscanf_multiply_21_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004534a8,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
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
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004534a8,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004534a8,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_03_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004534f8,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004534f8,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004534f8,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_22_bad(void)

{
  CWE191_Integer_Underflow__int_min_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_min_multiply_22_badSink(0x80000000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__int_min_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_min_multiply_22_goodB2G1Sink(0x80000000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__int_min_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_min_multiply_22_goodB2G2Sink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_min_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_51_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 CWE191_Integer_Underflow__int_min_sub_61b_badSource(void)

{
  return 0x80000000;
}


undefined8 CWE191_Integer_Underflow__int_min_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


undefined8 CWE191_Integer_Underflow__int_min_sub_61b_goodB2GSource(void)

{
  return 0x80000000;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_68b_badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_sub_68_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_68b_goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_sub_68_goodG2BData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_sub_68_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_sub_68_goodB2GData + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_04_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00453580,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408d94) */

void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00453580,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00453580,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408e4c) */

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


void CWE191_Integer_Underflow__int_fscanf_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_18_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004535c8,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004535c8,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_03_bad(void)

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
  printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_12_bad(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        printIntLine((ulong)(uint)(local_c * 2));
      }
    }
  }
  else {
    if (local_c < 0) {
      printIntLine((ulong)(uint)(local_c * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004097bb) */
/* WARNING: Removing unreachable block (ram,0x004097d8) */
/* WARNING: Removing unreachable block (ram,0x0040978c) */
/* WARNING: Removing unreachable block (ram,0x004097a9) */
/* WARNING: Removing unreachable block (ram,0x00409795) */
/* WARNING: Removing unreachable block (ram,0x004097c4) */

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


void CWE191_Integer_Underflow__int_min_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_13_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004536b0,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004536b0,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_004536b0,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_45_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_sub_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_67_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00453738,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00453738,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      local_24 = local_14 * 2;
      printIntLine((ulong)local_24);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      if (local_14 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_24 = local_14 * 2;
        printIntLine((ulong)local_24);
      }
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
    if (local_14 < 0) {
      printIntLine((ulong)(uint)(local_14 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_06_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a11e) */

void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a207) */

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


void CWE191_Integer_Underflow__int_fgets_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_12_bad(void)

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
    __isoc99_fscanf(stdin,&DAT_00453818,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 < 0) {
      if (local_14 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_14 * 2;
        printIntLine((ulong)local_10);
      }
    }
  }
  else {
    if (local_14 < 0) {
      local_c = local_14 * 2;
      printIntLine((ulong)local_c);
    }
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
    __isoc99_fscanf(stdin,&DAT_00453818,&local_14);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00453818,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 < 0) {
      if (local_14 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_14 * 2;
        printIntLine((ulong)local_10);
      }
    }
  }
  else {
    if (local_14 < 0) {
      if (local_14 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_14 * 2;
        printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
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


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_53c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_53c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_53c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040aae9) */

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


/* WARNING: Removing unreachable block (ram,0x0040ab44) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too small to perform multiplication.");
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


void CWE191_Integer_Underflow__int_min_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_sub_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0x7fffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ae14) */

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


/* WARNING: Removing unreachable block (ram,0x0040ae6a) */

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


void CWE191_Integer_Underflow__int_min_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54c_goodB2GSink((ulong)uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_min_sub_32_bad(void)

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
  local_1c = 0x80000000;
  local_20 = 0x80000000;
  local_24 = 0x7fffffff;
  printIntLine(0x7fffffff);
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


/* WARNING: Removing unreachable block (ram,0x0040b082) */
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
  local_1c = 0x80000000;
  local_20 = 0x80000000;
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__int_min_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_68_bad(void)

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
    CWE191_Integer_Underflow__int64_t_rand_sub_68_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_sub_68_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_68_goodG2BData = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_sub_68b_goodG2BSink();
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
    CWE191_Integer_Underflow__int64_t_rand_sub_68_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_sub_68_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_48[(long)local_14] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
    }
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_68 [16];
  sa_family_t local_58;
  uint16_t local_56;
  in_addr_t local_54;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_58,0,0x10);
      local_58 = 2;
      local_54 = inet_addr("127.0.0.1");
      local_56 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_58,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_68,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_68[(long)local_1c] = 0;
          local_c = atoi(local_68);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
  }
  else {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_48[(long)local_14] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_24 = local_c - 1;
      printIntLine((ulong)local_24);
    }
  }
  else {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_20 = local_c - 1;
      printIntLine((ulong)local_20);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong CWE191_Integer_Underflow__int_listen_socket_multiply_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE191_Integer_Underflow__int_listen_socket_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_listen_socket_multiply_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_65b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_65b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_65b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_listen_socket_sub_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x80000000;
  local_20 = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_multiply_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x80000000;
  local_20 = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54e_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54e_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54e_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_fgets_multiply_65_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_fgets_multiply_65b_badSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_fgets_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_fgets_multiply_65b_goodB2GSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_listen_socket_sub_65b_badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_listen_socket_sub_65b_goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_c = -0x80000000;
  }
  if (staticFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
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


/* WARNING: Removing unreachable block (ram,0x0040c41c) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too small to perform multiplication.");
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


void CWE191_Integer_Underflow__int_min_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_41_bad(void)

{
  badSink(0x80000000);
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
  goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_41_good(void)

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


void CWE191_Integer_Underflow__int_fgets_sub_08_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_02_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  undefined local_28 [8];
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_sub_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  undefined local_28 [8];
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_sub_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_13_bad(void)

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
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fgets_multiply_68_badData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fgets_multiply_68_goodG2BData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_fgets_multiply_68_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fgets_multiply_68_goodB2GData * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_67_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_fgets_multiply_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_multiply_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_fgets_multiply_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_51b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_51b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_51b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_listen_socket_sub_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_sub_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_sub_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_66b_badSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_66b_goodB2GSink(long lParm1)

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


void CWE191_Integer_Underflow__int_listen_socket_multiply_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = -0x80000000;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
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


/* WARNING: Removing unreachable block (ram,0x0040da6d) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too small to perform multiplication.");
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


void CWE191_Integer_Underflow__int_min_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00453d4b,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00453d4b,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_15_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00453d50,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00453d50,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00453d50,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalFive == 5) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


ulong badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00453de0,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__int_fscanf_sub_42_bad(void)

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


ulong goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00453de0,&local_c);
  return (ulong)local_c;
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


void CWE191_Integer_Underflow__int_fscanf_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_09_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c < 0)) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_52c_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_52c_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_52c_goodB2GSink(int iParm1)

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


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_21_bad(void)

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


void CWE191_Integer_Underflow__int64_t_rand_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_22_bad(void)

{
  CWE191_Integer_Underflow__int_min_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_min_sub_22_badSink(0x80000000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__int_min_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_min_sub_22_goodB2G1Sink(0x80000000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__int_min_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_min_sub_22_goodB2G2Sink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_min_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_67b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_67b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_67b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_fgets_multiply_17_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_14 = atoi((char *)&local_28);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      local_18 = local_14 * 2;
      printIntLine((ulong)local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_14 = atoi((char *)&local_28);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      if (local_14 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_14 * 2;
        printIntLine((ulong)local_18);
      }
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
    if (local_14 < 0) {
      printIntLine((ulong)(uint)(local_14 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_68_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_68_badData = local_c;
  CWE191_Integer_Underflow__int_fgets_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_multiply_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__int_fgets_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_18_bad(void)

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
  printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int_min_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_min_multiply_45_badData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_45_bad(void)

{
  CWE191_Integer_Underflow__int_min_multiply_45_badData = 0x80000000;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_min_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_min_multiply_45_goodG2BData * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_multiply_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_min_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_min_multiply_45_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_min_multiply_45_goodB2GData * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_multiply_45_goodB2GData = 0x80000000;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_05_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00453ff0,&local_10);
  }
  if (staticTrue != 0) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00453ff0,&local_10);
  }
  if (staticFalse == 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00453ff0,&local_10);
  }
  if (staticTrue != 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  local_1c = local_c;
  if (local_c < 0) {
    local_20 = local_c * 2;
    printIntLine((ulong)local_20);
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
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  local_1c = local_c;
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_20 = local_c * 2;
      printIntLine((ulong)local_20);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_41_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00454080,&local_c);
  badSink((ulong)local_c);
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
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00454080,&local_c);
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_listen_socket_multiply_45_badData * 2))
    ;
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_listen_socket_multiply_45_goodG2BData *
                              2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_listen_socket_multiply_45_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_listen_socket_multiply_45_goodB2GData
                                * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004100e2) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041029f) */

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


void CWE191_Integer_Underflow__int_listen_socket_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_multiply_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_multiply_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_68_bad(void)

{
  CWE191_Integer_Underflow__int_min_multiply_68_badData = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_multiply_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_multiply_68_goodB2GData = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_15_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411091) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004110d3) */

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


void CWE191_Integer_Underflow__int_min_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_22_badSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_connect_socket_multiply_22_badGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G2Sink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G2Global != 0) && (iParm1 < 0)
     ) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodG2BSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodG2BGlobal != 0) && (iParm1 < 0))
  {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_fscanf_sub_32_bad(void)

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
  __isoc99_fscanf(stdin,&DAT_004542a8,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  local_20 = local_1c - 1;
  printIntLine((ulong)local_20);
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
  __isoc99_fscanf(stdin,&DAT_004542a8,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  if (local_1c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_20 = local_1c - 1;
    printIntLine((ulong)local_20);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_multiply_61b_badSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_multiply_61b_goodG2BSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_multiply_61b_goodB2GSource(0);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x80000000;
}


void CWE191_Integer_Underflow__int_min_sub_42_bad(void)

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


undefined8 goodB2GSource(void)

{
  return 0x80000000;
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


void CWE191_Integer_Underflow__int_min_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_11_bad(void)

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
  if (iVar1 != 0) {
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (iVar1 != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_02_bad(void)

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
  printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_10_bad(void)

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
  if (globalTrue != 0) {
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (globalTrue != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00454480,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fscanf_sub_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00454480,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fscanf_sub_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_22_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_connect_socket_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54d_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0x7fffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_c = -0x80000000;
  }
  if (staticFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412a23) */

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


void CWE191_Integer_Underflow__int_min_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_41_bad(void)

{
  badSink(0x80000000);
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
  goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_01_bad(void)

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
  printLongLongLine(uVar7 - 1);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53d_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53d_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53d_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_multiply_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_64b_goodB2GSink(&local_18);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_51b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_51b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_51b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_connect_socket_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_connect_socket_multiply_68_badData * 2)
                );
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_connect_socket_multiply_68_goodG2BData
                              * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_connect_socket_multiply_68_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(
                                CWE191_Integer_Underflow__int_connect_socket_multiply_68_goodB2GData
                                * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_14_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004545d8,&local_10);
  }
  if ((globalFive == 5) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004545d8,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004545d8,&local_10);
  }
  if ((globalFive == 5) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_sub_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_sub_68_goodB2GData - 1));
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_fscanf_multiply_32_bad(void)

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
  __isoc99_fscanf(stdin,&DAT_00454658,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  if (local_1c < 0) {
    local_20 = local_1c * 2;
    printIntLine((ulong)local_20);
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
  __isoc99_fscanf(stdin,&DAT_00454658,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  if (local_1c < 0) {
    if (local_1c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_20 = local_1c * 2;
      printIntLine((ulong)local_20);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_16_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_34_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413823) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__int_min_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_63b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_63b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_63b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_min_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_67b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_67b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_67b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_connect_socket_sub_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_connect_socket_sub_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  local_30 = local_2c - 1;
  printIntLine((ulong)local_30);
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
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_30 = local_2c - 1;
    printIntLine((ulong)local_30);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54_good(void)

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


void CWE191_Integer_Underflow__int64_t_rand_sub_08_bad(void)

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
  if (iVar1 != 0) {
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (iVar1 != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_53c_goodB2GSink((ulong)uParm1);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_08_bad(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004548f8,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_004548f8,&local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004548f8,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_51_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_04_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004549c0,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414ea8) */

void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004549c0,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004549c0,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414f6c) */

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


void CWE191_Integer_Underflow__int_fscanf_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_68_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_68_badData = local_c;
  CWE191_Integer_Underflow__int_fgets_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__int_fgets_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_31_bad(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00454a20,&local_18);
  local_c = local_18;
  local_10 = local_18;
  local_14 = local_18 - 1;
  printIntLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00454a20,&local_18);
  local_c = local_18;
  local_10 = local_18;
  if (local_18 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_14 = local_18 - 1;
    printIntLine((ulong)local_14);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_21_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badStatic = 1;
  badSink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_21_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badStatic = 1;
  badSink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x80000000;
  local_20 = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x80000000;
  local_20 = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fgets_multiply_45_badData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_45_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fgets_multiply_45_goodG2BData * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_multiply_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_fgets_multiply_45_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fgets_multiply_45_goodB2GData * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_67_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00454bcb,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00454bcb,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_64b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_multiply_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_64b_goodB2GSink(&local_14);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416712) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041687c) */

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


void CWE191_Integer_Underflow__int_connect_socket_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  local_1c = local_c;
  local_20 = local_c - 1;
  printIntLine((ulong)local_20);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  local_1c = local_c;
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_20 = local_c - 1;
    printIntLine((ulong)local_20);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_06_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416c72) */

void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416d65) */

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


void CWE191_Integer_Underflow__int_fgets_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_sub_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_22_badSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_fscanf_multiply_22_badGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G2Sink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G2Global != 0) && (iParm1 < 0)) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_22_goodG2BSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_fscanf_multiply_22_goodG2BGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_multiply_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041749e) */

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


/* WARNING: Removing unreachable block (ram,0x004174f9) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too small to perform multiplication.");
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


void CWE191_Integer_Underflow__int_min_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_min_multiply_32_bad(void)

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
  local_1c = 0x80000000;
  local_20 = 0x80000000;
  local_24 = 0;
  printIntLine(0);
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


/* WARNING: Removing unreachable block (ram,0x004176e5) */
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
  local_1c = 0x80000000;
  local_20 = 0x80000000;
  printLine("data value is too small to perform multiplication.");
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_sub_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_sub_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_48[(long)local_14] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
      }
    }
  }
  else {
    if (local_c < 0) {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_68 [16];
  sa_family_t local_58;
  uint16_t local_56;
  in_addr_t local_54;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_58,0,0x10);
      local_58 = 2;
      local_54 = inet_addr("127.0.0.1");
      local_56 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_58,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_68,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_68[(long)local_1c] = 0;
          local_c = atoi(local_68);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
  }
  else {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_48[(long)local_14] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_24 = local_c * 2;
        printIntLine((ulong)local_24);
      }
    }
  }
  else {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_20 = local_c * 2;
        printIntLine((ulong)local_20);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_64b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_64b_goodB2GSink(&local_14);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_connect_socket_sub_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_connect_socket_sub_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_connect_socket_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_67b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_67b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_67b_goodB2GSink(int iParm1)

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


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_18_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00454f20,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00454f20,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_54b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54b_goodG2BSink(0xfffffffffffffffe);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_54b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_64b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_64b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_64b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_fgets_multiply_11_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_52_bad(void)

{
  CWE191_Integer_Underflow__int_min_multiply_52b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_multiply_52b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_68_badData = local_c;
  CWE191_Integer_Underflow__int_listen_socket_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__int_listen_socket_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_51_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004550a0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004550a0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_min_sub_65b_badSink(0x80000000,uParm2,0x80000000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_min_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_min_sub_65b_goodB2GSink(0x80000000,uParm2,0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54e_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54e_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54e_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_listen_socket_multiply_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fscanf_multiply_45_badData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455160,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fscanf_multiply_45_goodG2BData * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_fscanf_multiply_45_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fscanf_multiply_45_goodB2GData * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455160,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_66_bad(void)

{
  char *pcVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  pcVar1 = fgets((char *)&local_38,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_38);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fgets_multiply_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_multiply_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  pcVar1 = fgets((char *)&local_38,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_38);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fgets_multiply_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_17_bad(void)

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
    printLongLongLine(local_28 - 1);
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
    if (local_28 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_28 - 1);
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
    printLongLongLine(local_18 + -1);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_06_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004551e4,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a1e9) */

void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004551e4,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004551e4,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a2b0) */

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


void CWE191_Integer_Underflow__int_fscanf_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE191_Integer_Underflow__int_listen_socket_sub_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE191_Integer_Underflow__int_listen_socket_sub_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_66_good(void)

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


void CWE191_Integer_Underflow__int64_t_rand_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE191_Integer_Underflow__int64_t_rand_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455298,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455298,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_13_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004552a0,&local_10);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004552a0,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004552a0,&local_10);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_51b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_51b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_51b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_fscanf_sub_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455323,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455323,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_min_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_min_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_min_sub_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_min_sub_68_goodB2GData - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ad7c) */

void CWE191_Integer_Underflow__int_min_multiply_16_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041adae) */
/* WARNING: Removing unreachable block (ram,0x0041adcb) */
/* WARNING: Removing unreachable block (ram,0x0041adb7) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b021) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b18e) */

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


void CWE191_Integer_Underflow__int_connect_socket_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalFive == 5) && (local_c < 0)) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_listen_socket_multiply_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c < 0) {
    local_30 = local_2c * 2;
    printIntLine((ulong)local_30);
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
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c < 0) {
    if (local_2c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_30 = local_2c * 2;
      printIntLine((ulong)local_30);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_15_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_64b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_64b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_64b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_min_sub_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_67b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_67b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_67b_goodB2GSink(int iParm1)

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


ulong badSource(uint uParm1)

{
  char *pcVar1;
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = fgets((char *)&local_18,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
    local_1c = uParm1;
  }
  else {
    local_1c = atoi((char *)&local_18);
  }
  return (ulong)local_1c;
}


void CWE191_Integer_Underflow__int_fgets_sub_42_bad(void)

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


ulong goodB2GSource(uint uParm1)

{
  char *pcVar1;
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = fgets((char *)&local_18,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
    local_1c = uParm1;
  }
  else {
    local_1c = atoi((char *)&local_18);
  }
  return (ulong)local_1c;
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


void CWE191_Integer_Underflow__int_fgets_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_51_bad(void)

{
  CWE191_Integer_Underflow__int_min_multiply_51b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_multiply_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_multiply_51b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_54e_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_sub_61b_badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_sub_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_sub_61b_goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
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
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c8f6) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cab0) */

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


void CWE191_Integer_Underflow__int_listen_socket_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  if (local_c < 0) {
    local_24 = local_c * 2;
    printIntLine((ulong)local_24);
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
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_24 = local_c * 2;
      printIntLine((ulong)local_24);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_63b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_63b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_63b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_min_sub_53_bad(void)

{
  CWE191_Integer_Underflow__int_min_sub_53b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_sub_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_sub_53b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0045571b,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_multiply_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0045571b,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_05_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticTrue != 0) {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_22_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_fgets_sub_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_fgets_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_41_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  badSink((ulong)local_c);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004557c8,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004557c8,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE191_Integer_Underflow__int_listen_socket_multiply_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE191_Integer_Underflow__int_listen_socket_multiply_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d9bc) */

void CWE191_Integer_Underflow__int_min_multiply_34_bad(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041da34) */
/* WARNING: Removing unreachable block (ram,0x0041da51) */
/* WARNING: Removing unreachable block (ram,0x0041da3d) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_16_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00455838,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00455838,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_14_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((globalFive == 5) && (local_c < 0)) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((globalFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_22_badSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_listen_socket_multiply_22_badGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G2Sink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G2Global != 0) && (iParm1 < 0))
  {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodG2BSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodG2BGlobal != 0) && (iParm1 < 0))
  {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_34_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  local_10 = local_c;
  local_14 = local_c - 1;
  printIntLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  local_10 = local_c;
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_14 = local_c - 1;
    printIntLine((ulong)local_14);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_63b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_multiply_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_63b_goodB2GSink(&local_14);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_64b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_64b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_64b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_min_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_51_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004559d3,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004559d3,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_65b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_65b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_65b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int64_t_rand_sub_22_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_rand_sub_22_badSink(uVar7);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G1Sink(uVar7);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G2Sink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_rand_sub_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fscanf_multiply_68_badData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fscanf_multiply_68_goodG2BData * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_fscanf_multiply_68_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_fscanf_multiply_68_goodB2GData * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_22_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_listen_socket_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53d_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53d_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53d_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_fgets_sub_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fscanf_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455ab0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fscanf_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_sub_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_fscanf_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00455ab0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_66_bad(void)

{
  char *pcVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  pcVar1 = fgets((char *)&local_38,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_38);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fgets_sub_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_sub_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  pcVar1 = fgets((char *)&local_38,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_38);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fgets_sub_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_06_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00455b0c,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f266) */

void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00455b0c,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00455b0c,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f321) */

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


void CWE191_Integer_Underflow__int_fscanf_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_multiply_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_multiply_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_52_bad(void)

{
  CWE191_Integer_Underflow__int_min_sub_52b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_sub_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_sub_52b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      local_20 = local_14 * 2;
      printIntLine((ulong)local_20);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      if (local_14 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_20 = local_14 * 2;
        printIntLine((ulong)local_20);
      }
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
    if (local_14 < 0) {
      printIntLine((ulong)(uint)(local_14 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_11_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_16_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041faf8) */

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


void CWE191_Integer_Underflow__int_min_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
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


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_fgets_multiply_32_bad(void)

{
  char *pcVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  int local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0;
  local_c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  pcVar1 = fgets((char *)&local_48,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_48);
  }
  *local_18 = local_c;
  local_24 = *local_20;
  if (local_24 < 0) {
    local_28 = local_24 * 2;
    printIntLine((ulong)local_28);
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
  char *pcVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  int local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0;
  local_c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  pcVar1 = fgets((char *)&local_48,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_48);
  }
  *local_18 = local_c;
  local_24 = *local_20;
  if (local_24 < 0) {
    if (local_24 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_28 = local_24 * 2;
      printIntLine((ulong)local_28);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_listen_socket_sub_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  local_30 = local_2c - 1;
  printIntLine((ulong)local_30);
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
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_30 = local_2c - 1;
    printIntLine((ulong)local_30);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_67b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_67b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_67b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_fscanf_sub_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


ulong CWE191_Integer_Underflow__int_connect_socket_multiply_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE191_Integer_Underflow__int_connect_socket_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_connect_socket_multiply_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_52b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_52b_goodG2BSink(0xfffffffffffffffe);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_52b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_51_bad(void)

{
  CWE191_Integer_Underflow__int_min_sub_51b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_sub_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_sub_51b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_63b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_63b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_63b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_fgets_multiply_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_52c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1)

{
  if ((badStatic != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_21_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badStatic = 1;
  badSink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_04_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422219) */

void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422309) */

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


void CWE191_Integer_Underflow__int_fgets_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_31_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c;
  local_14 = local_c;
  if (local_c < 0) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c;
  local_14 = local_c;
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004227a3) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422953) */

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


void CWE191_Integer_Underflow__int_listen_socket_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  local_24 = local_c - 1;
  printIntLine((ulong)local_24);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_24 = local_c - 1;
    printIntLine((ulong)local_24);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_min_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_45_bad(void)

{
  CWE191_Integer_Underflow__int_min_sub_45_badData = 0x80000000;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_min_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_min_sub_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_min_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_sub_45_goodB2GData = 0x80000000;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_15_bad(void)

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
  printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void badSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_multiply_45_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_connect_socket_multiply_45_badData * 2)
                );
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_multiply_45_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_connect_socket_multiply_45_goodG2BData
                              * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_multiply_45_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_connect_socket_multiply_45_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(
                                CWE191_Integer_Underflow__int_connect_socket_multiply_45_goodB2GData
                                * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_06_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004237c2) */
/* WARNING: Removing unreachable block (ram,0x004237d7) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042382b) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423865) */

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


void CWE191_Integer_Underflow__int_min_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_multiply_61b_badSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_multiply_61b_goodG2BSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_multiply_61b_goodB2GSource(0);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_connect_socket_multiply_65b_badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_65b_goodG2BSink
            (0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_connect_socket_multiply_65b_goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00456235,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00456235,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
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


void CWE191_Integer_Underflow__int64_t_rand_sub_42_bad(void)

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
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE191_Integer_Underflow__int_listen_socket_sub_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE191_Integer_Underflow__int_listen_socket_sub_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00456268,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_multiply_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00456268,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_20 = local_14 - 1;
    printIntLine((ulong)local_20);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_20 = local_14 - 1;
      printIntLine((ulong)local_20);
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
    printIntLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_22_badSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_fgets_multiply_22_badGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G2Sink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G2Global != 0) && (iParm1 < 0)) {
    if (iParm1 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_22_goodG2BSink(int iParm1)

{
  if ((CWE191_Integer_Underflow__int_fgets_multiply_22_goodG2BGlobal != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_20 = local_c * 2;
        printIntLine((ulong)local_20);
      }
    }
  }
  else {
    if (local_c < 0) {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_78 [16];
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0xffffffff;
    local_14 = -1;
    local_20 = socket(2,1,6);
    if (local_20 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_20,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_20,5), iVar1 != -1)) &&
         (local_14 = accept(local_20,(sockaddr *)0x0,(socklen_t *)0x0), local_14 != -1)) {
        sVar2 = recv(local_14,local_78,0xd,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          local_78[(long)local_24] = 0;
          local_c = atoi(local_78);
        }
      }
    }
    if (local_20 != -1) {
      close(local_20);
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  else {
    local_18 = 0xffffffff;
    local_10 = -1;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_18,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_18,5), iVar1 != -1)) &&
         (local_10 = accept(local_18,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_58,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_58[(long)local_1c] = 0;
          local_c = atoi(local_58);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_2c = local_c * 2;
        printIntLine((ulong)local_2c);
      }
    }
  }
  else {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_28 = local_c * 2;
        printIntLine((ulong)local_28);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticFive == 5) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_sub_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_34_bad(void)

{
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004563d8,&local_14);
  local_c = local_14;
  local_10 = local_14 - 1;
  printIntLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004563d8,&local_14);
  local_c = local_14;
  if (local_14 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_14 - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_63b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_63b_goodB2GSink(&local_14);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_05_bad(void)

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
  if (staticTrue != 0) {
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (staticTrue != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_41_bad(void)

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


void CWE191_Integer_Underflow__int64_t_rand_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_22_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_fgets_multiply_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_fgets_multiply_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_fgets_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_22_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_listen_socket_sub_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_listen_socket_sub_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_listen_socket_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_34_bad(void)

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
  printLongLongLine(uVar7 - 1);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_17_bad(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00456540,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 < 0) {
      local_14 = local_18 * 2;
      printIntLine((ulong)local_14);
    }
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
    __isoc99_fscanf(stdin,&DAT_00456540,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 < 0) {
      if (local_18 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_14 = local_18 * 2;
        printIntLine((ulong)local_14);
      }
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
    if (local_14 < 0) {
      printIntLine((ulong)(uint)(local_14 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_52_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_52_good(void)

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


void CWE191_Integer_Underflow__int_fscanf_multiply_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00456610,&local_14);
  (*local_10)((ulong)local_14);
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


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00456610,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_21_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badStatic = 1;
  badSink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_sub_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_sub_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_sub_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_sub_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_63b_goodB2GSink(int *piParm1)

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
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
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


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE191_Integer_Underflow__int_fscanf_multiply_61b_badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00456740,&local_c);
  return (ulong)local_c;
}


undefined8 CWE191_Integer_Underflow__int_fscanf_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_fscanf_multiply_61b_goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00456740,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_fgets_sub_32_bad(void)

{
  char *pcVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  int local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0;
  local_c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  pcVar1 = fgets((char *)&local_48,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_48);
  }
  *local_18 = local_c;
  local_24 = *local_20;
  local_28 = local_24 - 1;
  printIntLine((ulong)local_28);
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
  char *pcVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  int local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0;
  local_c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  pcVar1 = fgets((char *)&local_48,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_48);
  }
  *local_18 = local_c;
  local_24 = *local_20;
  if (local_24 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_28 = local_24 - 1;
    printIntLine((ulong)local_28);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_66_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_sub_66b_goodG2BSink(local_38);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_66b_goodB2GSink(local_48);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE191_Integer_Underflow__int_connect_socket_sub_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE191_Integer_Underflow__int_connect_socket_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_connect_socket_sub_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if ((badStatic != 0) && (iParm1 < 0)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_21_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  badStatic = 1;
  badSink((ulong)local_c);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fgets_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_22_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004568e0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_fscanf_multiply_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004568e0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004568e0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_fscanf_multiply_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_fscanf_multiply_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_66b_badSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_66b_goodB2GSink(long lParm1)

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


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_31_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c;
  local_14 = local_c;
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c;
  local_14 = local_c;
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_18_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_14_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFive == 5) {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_17_bad(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -0x80000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      printIntLine(0);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -0x80000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 < 0) {
      if (local_14 < -0x3fffffff) {
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


void CWE191_Integer_Underflow__int_min_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_64b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_64b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_64b_goodB2GSink(int *piParm1)

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


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x80000000,uParm2,0x80000000);
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
  goodB2GSink(0x80000000,uParm2,0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_07_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00456b20,&local_10);
  }
  if ((staticFive == 5) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00456b20,&local_10);
  }
  if (staticFive == 5) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00456b20,&local_10);
  }
  if ((staticFive == 5) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429ebb) */

void CWE191_Integer_Underflow__int_min_multiply_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429ef9) */
/* WARNING: Removing unreachable block (ram,0x00429f0b) */
/* WARNING: Removing unreachable block (ram,0x00429f28) */
/* WARNING: Removing unreachable block (ram,0x00429f14) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429f64) */
/* WARNING: Removing unreachable block (ram,0x00429f81) */
/* WARNING: Removing unreachable block (ram,0x00429f6d) */

void goodB2G2(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429fa6) */

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


void CWE191_Integer_Underflow__int_min_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_67_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_fgets_sub_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_fgets_sub_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_12_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_14 = local_c * 2;
        printIntLine((ulong)local_14);
      }
    }
  }
  else {
    if (local_c < 0) {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    pcVar2 = fgets((char *)&local_38,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_38);
    }
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_14 = local_c * 2;
        printIntLine((ulong)local_14);
      }
    }
  }
  else {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_sub_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_sub_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_20 = local_c - 1;
      printIntLine((ulong)local_20);
    }
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_78 [16];
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0xffffffff;
    local_14 = -1;
    local_20 = socket(2,1,6);
    if (local_20 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_20,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_20,5), iVar1 != -1)) &&
         (local_14 = accept(local_20,(sockaddr *)0x0,(socklen_t *)0x0), local_14 != -1)) {
        sVar2 = recv(local_14,local_78,0xd,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          local_78[(long)local_24] = 0;
          local_c = atoi(local_78);
        }
      }
    }
    if (local_20 != -1) {
      close(local_20);
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  else {
    local_18 = 0xffffffff;
    local_10 = -1;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_18,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_18,5), iVar1 != -1)) &&
         (local_10 = accept(local_18,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_58,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_58[(long)local_1c] = 0;
          local_c = atoi(local_58);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_2c = local_c - 1;
      printIntLine((ulong)local_2c);
    }
  }
  else {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_28 = local_c - 1;
      printIntLine((ulong)local_28);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE191_Integer_Underflow__int_min_multiply_61b_badSource(void)

{
  return 0x80000000;
}


undefined8 CWE191_Integer_Underflow__int_min_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


undefined8 CWE191_Integer_Underflow__int_min_multiply_61b_goodB2GSource(void)

{
  return 0x80000000;
}


void CWE191_Integer_Underflow__int_fgets_multiply_13_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_16_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00456d78,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00456d78,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_connect_socket_multiply_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c < 0) {
    local_30 = local_2c * 2;
    printIntLine((ulong)local_30);
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
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
  local_24 = 0xffffffff;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c < 0) {
    if (local_2c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_30 = local_2c * 2;
      printIntLine((ulong)local_30);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00456ea8,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00456ea8,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticTrue != 0) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticTrue != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_multiply_61b_badSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_multiply_61b_goodG2BSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_multiply_61b_goodB2GSource(0);
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


void CWE191_Integer_Underflow__int_min_multiply_61_good(void)

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


void CWE191_Integer_Underflow__int_connect_socket_multiply_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badSink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_10_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((globalTrue != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_17_bad(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -0x80000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = -0x80000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_14 - 1));
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
    printIntLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_65b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_65b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_65b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_listen_socket_sub_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d235) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d3a9) */

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


void CWE191_Integer_Underflow__int_connect_socket_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004570f8,&local_14);
  (*local_10)((ulong)local_14);
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


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004570f8,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d6a2) */

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


/* WARNING: Removing unreachable block (ram,0x0042d6fd) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too small to perform multiplication.");
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


void CWE191_Integer_Underflow__int_min_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_28;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_18 = local_c;
  if (local_c < 0) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
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
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_28;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_18 = local_c;
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_01_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  undefined local_28 [8];
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_multiply_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_multiply_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  undefined local_28 [8];
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_multiply_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_09_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE191_Integer_Underflow__int_fscanf_sub_61b_badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00457308,&local_c);
  return (ulong)local_c;
}


undefined8 CWE191_Integer_Underflow__int_fscanf_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_fscanf_sub_61b_goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00457308,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_multiply_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_03_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_03_good(void)

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


void CWE191_Integer_Underflow__int_min_sub_08_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
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
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
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


void CWE191_Integer_Underflow__int_min_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_listen_socket_multiply_65b_badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe)
  ;
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_listen_socket_multiply_65b_goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_07_bad(void)

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
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (staticFive == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_07_good(void)

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


void CWE191_Integer_Underflow__int_fgets_multiply_08_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53d_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53d_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53d_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_connect_socket_multiply_54e_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54e_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54e_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_connect_socket_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_09_good(void)

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


void CWE191_Integer_Underflow__int_fgets_sub_21_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  badStatic = 1;
  badSink((ulong)local_c);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fgets_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_03_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_sub_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_sub_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_12_bad(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
    }
  }
  else {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042fef4) */
/* WARNING: Removing unreachable block (ram,0x0042ff1e) */

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


void CWE191_Integer_Underflow__int_min_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_14_bad(void)

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
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (globalFive == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_sub_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_sub_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_68b_badSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_multiply_68_badData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_listen_socket_multiply_68_badData * 2))
    ;
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_68b_goodG2BSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_multiply_68_goodG2BData < 0) {
    printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_listen_socket_multiply_68_goodG2BData *
                              2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_multiply_68_goodB2GData < 0) {
    if (CWE191_Integer_Underflow__int_listen_socket_multiply_68_goodB2GData < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printIntLine((ulong)(uint)(CWE191_Integer_Underflow__int_listen_socket_multiply_68_goodB2GData
                                * 2));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_18_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_63_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_multiply_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_multiply_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004309aa) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430b5d) */

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


void CWE191_Integer_Underflow__int_listen_socket_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x80000000,uParm2,0x80000000);
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
  goodB2GSink(0x80000000,uParm2,0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_rand_sub_32_bad(void)

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
  local_40 = local_38 - 1;
  printLongLongLine(local_40);
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
  if (local_38 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_40 = local_38 - 1;
    printLongLongLine(local_40);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_07_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004577a8,&local_10);
  }
  if (staticFive == 5) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004577a8,&local_10);
  }
  if (staticFive == 5) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_004577a8,&local_10);
  }
  if (staticFive == 5) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


ulong badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00457820,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_42_bad(void)

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


ulong goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00457820,&local_c);
  return (ulong)local_c;
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


void CWE191_Integer_Underflow__int_fscanf_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54e_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54e_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54e_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_listen_socket_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_12_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_14 = local_c - 1;
      printIntLine((ulong)local_14);
    }
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    pcVar2 = fgets((char *)&local_38,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_38);
    }
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_14 = local_c - 1;
      printIntLine((ulong)local_14);
    }
  }
  else {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_04_bad(void)

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
  printLongLongLine(uVar7 - 1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00432034) */

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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043218f) */

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


void CWE191_Integer_Underflow__int64_t_rand_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52c_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52c_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52c_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_fgets_sub_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_31_bad(void)

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
  printLongLongLine(uVar7 - 1);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_05_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00457a58,&local_10);
  }
  if ((staticTrue != 0) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00457a58,&local_10);
  }
  if (staticFalse == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00457a58,&local_10);
  }
  if ((staticTrue != 0) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_67_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_67b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_67b_goodG2BSink(0xfffffffffffffffe);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_67b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_52c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_52c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_52c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_68_bad(void)

{
  CWE191_Integer_Underflow__int_min_sub_68_badData = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_sub_68_goodB2GData = 0x80000000;
  CWE191_Integer_Underflow__int_min_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_sub_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_02_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_22_badSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_sub_22_badGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G2Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_sub_22_goodB2G2Global != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_22_goodG2BSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_sub_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_34_bad(void)

{
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00457b30,&local_14);
  local_c = local_14;
  if (local_14 < 0) {
    local_10 = local_14 * 2;
    printIntLine((ulong)local_10);
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
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00457b30,&local_14);
  local_c = local_14;
  if (local_14 < 0) {
    if (local_14 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_14 * 2;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c < 0)) {
    local_18 = local_c * 2;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_18 = local_c * 2;
        printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_18 = local_c * 2;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badSink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_66b_badSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_66b_goodG2BSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) < 0) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_66b_goodB2GSink(long lParm1)

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


void CWE191_Integer_Underflow__int_fgets_sub_10_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalTrue != 0) {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_c - 1;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_67_bad(void)

{
  CWE191_Integer_Underflow__int_min_sub_67b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_sub_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_sub_67b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_15_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00457d48,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00457d48,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00457d48,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_54d_goodB2GSink((ulong)uParm1);
  return;
}


undefined8 badSource(void)

{
  return 0x80000000;
}


void CWE191_Integer_Underflow__int_min_multiply_42_bad(void)

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


undefined8 goodB2GSource(void)

{
  return 0x80000000;
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


void CWE191_Integer_Underflow__int_min_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0x7fffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043463a) */

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


/* WARNING: Removing unreachable block (ram,0x00434690) */

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


void CWE191_Integer_Underflow__int_min_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_28;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_18 = local_c;
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_28;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_18 = local_c;
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_01_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_sub_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_11_bad(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00457ee8,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00457ee8,&local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00457ee8,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_02_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00457f38,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00457f38,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00457f38,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_53b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_53b_goodG2BSink(0xfffffffffffffffe);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_53b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_22_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00457f73,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_fscanf_sub_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00457f73,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00457f73,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_fscanf_sub_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_fscanf_sub_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_63_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_sub_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_04_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004354b9) */
/* WARNING: Removing unreachable block (ram,0x004354ce) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00435520) */

void goodB2G2(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00435559) */

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


void CWE191_Integer_Underflow__int_min_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_31_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043568e) */

void goodB2G(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


void CWE191_Integer_Underflow__int_min_sub_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004356e7) */

void CWE191_Integer_Underflow__int_min_multiply_18_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00435719) */
/* WARNING: Removing unreachable block (ram,0x00435736) */
/* WARNING: Removing unreachable block (ram,0x00435722) */

void goodB2G(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_10_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00458040,&local_10);
  }
  if ((globalTrue != 0) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00458040,&local_10);
  }
  if (globalFalse == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00458040,&local_10);
  }
  if ((globalTrue != 0) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_09_bad(void)

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
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_20 - 1);
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
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printLongLongLine(local_20 - 1);
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


void CWE191_Integer_Underflow__int64_t_rand_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_listen_socket_multiply_61b_badSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_listen_socket_multiply_61b_goodG2BSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_listen_socket_multiply_61b_goodB2GSource(0);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_sub_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_sub_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_01_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458200,&local_10);
  if (local_10 < 0) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458200,&local_10);
  if (local_10 < 0) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53d_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53d_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53d_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_connect_socket_sub_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_64_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_sub_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_sub_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticFive == 5) && (local_c < 0)) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_sub_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_sub_22_goodB2G1Global == 0) {
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


void CWE191_Integer_Underflow__int_min_sub_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_sub_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_min_sub_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_sub_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_11_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
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
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
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


void CWE191_Integer_Underflow__int_min_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_17_bad(void)

{
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004583c0,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_18 - 1;
    printIntLine((ulong)local_14);
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
    __isoc99_fscanf(stdin,&DAT_004583c0,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_14 = local_18 - 1;
      printIntLine((ulong)local_14);
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
    printIntLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  printIntLine((ulong)local_18);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_listen_socket_multiply_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_09_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00458468,&local_10);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_10 < 0)) {
    local_c = local_10 * 2;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00458468,&local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 < 0) {
      if (local_10 < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_c = local_10 * 2;
        printIntLine((ulong)local_c);
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
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00458468,&local_10);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_10 < 0)) {
    if (local_10 < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_c = local_10 * 2;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00437f46) */

void CWE191_Integer_Underflow__int_min_multiply_02_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00437f76) */
/* WARNING: Removing unreachable block (ram,0x00437f93) */
/* WARNING: Removing unreachable block (ram,0x00437f7f) */

void goodB2G1(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00437fbb) */
/* WARNING: Removing unreachable block (ram,0x00437fd8) */
/* WARNING: Removing unreachable block (ram,0x00437fc4) */

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


void CWE191_Integer_Underflow__int_min_multiply_02_good(void)

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


void CWE191_Integer_Underflow__int_fscanf_sub_21_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004584f0,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
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
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004584f0,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
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
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004584f0,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_03_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458538,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458538,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458538,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_multiply_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_51b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_51b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_51b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_16_bad(void)

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
  printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fgets_multiply_61b_badSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fgets_multiply_61b_goodG2BSource(0);
  if (iVar1 < 0) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fgets_multiply_61b_goodB2GSource(0);
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


void CWE191_Integer_Underflow__int_fgets_multiply_61_good(void)

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


void CWE191_Integer_Underflow__int_connect_socket_sub_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = local_c - 1;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_18 = local_c - 1;
      printIntLine((ulong)local_18);
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


void CWE191_Integer_Underflow__int_connect_socket_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_34_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  local_10 = local_c;
  if (local_c < 0) {
    local_14 = local_c * 2;
    printIntLine((ulong)local_14);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  local_10 = local_c;
  if (local_c < 0) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_14 = local_c * 2;
      printIntLine((ulong)local_14);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_c = -0x80000000;
  }
  if (globalFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
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


/* WARNING: Removing unreachable block (ram,0x004392ed) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too small to perform multiplication.");
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


void CWE191_Integer_Underflow__int_min_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Removing unreachable block (ram,0x004393eb) */

void CWE191_Integer_Underflow__int_min_multiply_01_bad(void)

{
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffc);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043944b) */
/* WARNING: Removing unreachable block (ram,0x00439468) */
/* WARNING: Removing unreachable block (ram,0x00439454) */

void goodB2G(void)

{
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_24 = local_14 - 1;
    printIntLine((ulong)local_24);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_24 = local_14 - 1;
      printIntLine((ulong)local_24);
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
    printIntLine((ulong)(local_14 - 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_53d_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_53d_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_53d_goodB2GSink(int iParm1)

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


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
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


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0x7fffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00439c49) */

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


/* WARNING: Removing unreachable block (ram,0x00439c9f) */

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


void CWE191_Integer_Underflow__int_min_sub_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_42_bad(void)

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


ulong goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
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


void CWE191_Integer_Underflow__int_connect_socket_sub_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_04_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043a0fc) */

void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_10 = local_c - 1;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043a1e2) */

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


void CWE191_Integer_Underflow__int_fgets_sub_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_51_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_51b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_51b_goodG2BSink(0xfffffffffffffffe);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_51b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_12_bad(void)

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
    __isoc99_fscanf(stdin,&DAT_004588f8,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_14 - 1;
      printIntLine((ulong)local_10);
    }
  }
  else {
    local_c = local_14 - 1;
    printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_004588f8,&local_14);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_004588f8,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_10 = local_14 - 1;
      printIntLine((ulong)local_10);
    }
  }
  else {
    if (local_14 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_14 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_53c_goodB2GSink((ulong)uParm1);
  return;
}


ulong CWE191_Integer_Underflow__int_fgets_multiply_61b_badSource(uint uParm1)

{
  char *pcVar1;
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = fgets((char *)&local_18,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
    local_1c = uParm1;
  }
  else {
    local_1c = atoi((char *)&local_18);
  }
  return (ulong)local_1c;
}


undefined8 CWE191_Integer_Underflow__int_fgets_multiply_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_fgets_multiply_61b_goodB2GSource(uint uParm1)

{
  char *pcVar1;
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = fgets((char *)&local_18,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
    local_1c = uParm1;
  }
  else {
    local_1c = atoi((char *)&local_18);
  }
  return (ulong)local_1c;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_54e_goodB2GSink((ulong)uParm1);
  return;
}


ulong CWE191_Integer_Underflow__int_listen_socket_sub_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE191_Integer_Underflow__int_listen_socket_sub_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_listen_socket_sub_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_sub_45_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_45_bad(void)

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
    CWE191_Integer_Underflow__int64_t_rand_sub_45_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_sub_45_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_sub_45_goodG2BData + -1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_sub_45_goodG2BData = 0xfffffffffffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_sub_45_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_sub_45_goodB2GData + -1);
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
    CWE191_Integer_Underflow__int64_t_rand_sub_45_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_sub_45_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_68_badData = local_c;
  CWE191_Integer_Underflow__int_connect_socket_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__int_connect_socket_multiply_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_68_good(void)

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


void CWE191_Integer_Underflow__int_min_multiply_08_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    printIntLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
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
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
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


void CWE191_Integer_Underflow__int_min_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_sub_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_sub_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_06_bad(void)

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
  printLongLongLine(uVar7 - 1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043b283) */

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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
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
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043b3e1) */

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


void CWE191_Integer_Underflow__int64_t_rand_sub_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_02_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458a20,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458a20,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G2(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458a20,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_02_good(void)

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


void CWE191_Integer_Underflow__int_min_sub_21_bad(void)

{
  badStatic = 1;
  badSink(0x80000000);
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
  goodB2G1Static = 0;
  goodB2G1Sink(0x80000000);
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
  goodB2G2Static = 1;
  goodB2G2Sink(0x80000000);
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


void CWE191_Integer_Underflow__int_min_sub_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_03_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043b7fc) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043b83c) */

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


void CWE191_Integer_Underflow__int_min_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_65b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_min_sub_18_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043bbbf) */

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


void CWE191_Integer_Underflow__int_min_sub_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_10_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00458b48,&local_10);
  }
  if (globalTrue != 0) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00458b48,&local_10);
  }
  if (globalFalse == 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00458b48,&local_10);
  }
  if (globalTrue != 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_sub_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_sub_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_sub_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_sub_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_sub_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_45_good(void)

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


void CWE191_Integer_Underflow__int_fscanf_sub_08_bad(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00458be0,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00458be0,&local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00458be0,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_listen_socket_sub_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_listen_socket_sub_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_listen_socket_sub_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_sub_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_68_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00458c58,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_68_badData = local_c;
  CWE191_Integer_Underflow__int_fscanf_sub_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_sub_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_sub_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00458c58,&local_c);
  CWE191_Integer_Underflow__int_fscanf_sub_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__int_fscanf_sub_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_01_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458c60,&local_10);
  local_c = local_10 - 1;
  printIntLine((ulong)local_c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00458c60,&local_10);
  if (local_10 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_multiply_07_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((staticFive == 5) && (local_c < 0)) {
    local_10 = local_c * 2;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticFive == 5) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_10 = local_c * 2;
        printIntLine((ulong)local_10);
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
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if ((staticFive == 5) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_10 = local_c * 2;
      printIntLine((ulong)local_10);
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


void CWE191_Integer_Underflow__int_fgets_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
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


void CWE191_Integer_Underflow__int_fscanf_multiply_41_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00458d58,&local_c);
  badSink((ulong)local_c);
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
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00458d58,&local_c);
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_63b_badSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_63b_goodG2BSink(int *piParm1)

{
  if (*piParm1 < 0) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_63b_goodB2GSink(int *piParm1)

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


void CWE191_Integer_Underflow__int_listen_socket_sub_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_1c = local_c - 1;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_42_bad(void)

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


ulong goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_sub_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c - 1;
  printIntLine((ulong)local_1c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    local_1c = local_c - 1;
    printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_sub_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_65_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int_fscanf_multiply_65b_badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00458e80,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00458e80,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52c_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52c_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_52c_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform subtraction.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_11_bad(void)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00458eb8,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00458eb8,&local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00458eb8,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54_bad(void)

{
  CWE191_Integer_Underflow__int_min_multiply_54b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_multiply_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_multiply_54b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_sub_09_bad(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00458f00,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = local_10 - 1;
    printIntLine((ulong)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00458f00,&local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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
    __isoc99_fscanf(stdin,&DAT_00458f00,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_10 == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      local_c = local_10 - 1;
      printIntLine((ulong)local_c);
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


void CWE191_Integer_Underflow__int_fscanf_sub_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_sub_02_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043dfd0) */

void goodB2G1(void)

{
  printLine("data value is too large to perform subtraction.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043e010) */

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


void CWE191_Integer_Underflow__int_min_sub_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_connect_socket_sub_65b_badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_connect_socket_sub_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_connect_socket_sub_65b_goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_sub_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_64_bad(void)

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
  CWE191_Integer_Underflow__int64_t_rand_sub_64b_badSink(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_sub_64b_goodG2BSink(&local_10);
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
  CWE191_Integer_Underflow__int64_t_rand_sub_64b_goodB2GSink(local_20);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_sub_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticTrue != 0) && (local_c < 0)) {
    local_1c = local_c * 2;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFalse == 0) {
    if (local_c < 0) {
      if (local_c < -0x3fffffff) {
        printLine("data value is too small to perform multiplication.");
      }
      else {
        local_1c = local_c * 2;
        printIntLine((ulong)local_1c);
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
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_48[(long)local_18] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if ((staticTrue != 0) && (local_c < 0)) {
    if (local_c < -0x3fffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      local_1c = local_c * 2;
      printIntLine((ulong)local_1c);
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


void CWE191_Integer_Underflow__int_listen_socket_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badSink((ulong)local_c);
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
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0045900b,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fscanf_multiply_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_multiply_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0045900b,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fscanf_multiply_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_65b_badSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_65b_goodG2BSink(int iParm1)

{
  if (iParm1 < 0) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_multiply_65b_goodB2GSink(int iParm1)

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


void CWE191_Integer_Underflow__int_min_sub_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0x7fffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_c = -0x80000000;
  }
  if (globalFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform subtraction.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043eec0) */

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


void CWE191_Integer_Underflow__int_min_sub_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_multiply_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_multiply_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_multiply_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_28;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c;
  if (local_c < 0) {
    local_20 = local_c * 2;
    printIntLine((ulong)local_20);
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
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_28;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      }
    }
}