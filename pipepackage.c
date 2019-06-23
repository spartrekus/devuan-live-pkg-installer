

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int main( int argc, char *argv[])
    {
       {
        int begin = 1;
        char linebuffer[BUFSIZ];
        strncpy( linebuffer, "" , BUFSIZ );
        char ptr[BUFSIZ];
        int j=0;
        int c ; 
        int colopen = 0; 
        int charcount = 0; 
        int fooi ;  int i ; 

        c = getchar();
        while( c != EOF )
        {
           charcount++;
           ptr[j++] = c;
           begin = 0;

           if ( c == '\n' )
           {  
             begin = 1;
             ptr[j]='\0';

             colopen = 0; 
             for( i=0;  ptr[i] != '\0' ; i++ )
             {
                //printf( "%d", ptr[ i ] );

                if ( ptr[ i ] == 32 ) 
                {
                    colopen++;
                    //printf( "col %d", colopen );
                }
                else
                {
                   //if ( ptr[ i ] != ' ' ) 
                   //if ( colopen == 3 )  
                   if ( colopen == 2 )  
                     if ( ptr[ i ] != '\n' ) 
                       if ( ptr[ i ] != '\0' ) 
                       printf( "%c",  ptr[ i ] );
                }
             }

             printf( "\n");
             //printf( "=%s\n", ptr );

             // clean up
             charcount = 0;
             strncpy( ptr, "", BUFSIZ );
             colopen = 0; 
             j = 0;
           }
           c = getchar();
        }
      }
      return 0;
}




