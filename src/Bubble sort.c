 #include <stdio.h>
 #include <stdlib.h>
 
 //bubble sort
 
  // coloca em ordem crescente (1,2,3,4,5...)
  
  int x,y;
  
  for( x = 0; x <= TAM; x++ ) { //Apresenta erro nessa linha
    for( y = x + 1; y < TAM; y++ ) // sempre 1 elemento à frente
    {
      // se o (x > (x+1)) então o x passa pra frente (ordem crescente)
      if ( vetor[x] > vetor[y] )
      {
         aux = vetor[x];
         vetor[x] = vetor[y];
         vetor[y] = aux;
      }
    }
  } // fim da ordenação
