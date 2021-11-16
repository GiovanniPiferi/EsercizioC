# include  < stdio.h >
# include  < stdlib.h >

int  main ( int argc, char *argv[]) {
  int anni;
  printf ( " Forse...(numero parametri: %d ) %s\n " , argc, argv[ 0 ]);
  if (argc> 1 ) printf ( " Primo argomento utente: %s\n " , argv[ 1 ]);
  if (argc> 2 ){
    anni = atoi (argv[ 2 ]);
    se (anni != 0 )
      printf ( " Secondo argomento utente ( %s ) valido %d \n " , argv[ 2 ], anni);
    altro {
      printf ( " secondo argomento utente ( %s ) non valido \n " argv[ 2 ]);
      ritorno - 1 ;
    }
  }
  ritorno  0 ;
}
