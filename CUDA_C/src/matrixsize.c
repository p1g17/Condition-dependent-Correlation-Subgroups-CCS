

void getmatrixsize(FILE *in,int *nn,int *DD)
{
  int n=0,D=0;
  char *line,column;
 

  do {
 	column = fgetc (in);
 	if (column == '\t') D++;
  } while (column != '\n');
  
  line=(char *)malloc(100000*sizeof(char)); 
  
  while (fgets (line,100000,in)!=NULL && sizeof(line)>1){
  		n++;
   }  

   //n--;
   
   free(line);
      
   *nn=n;
   *DD=D;
   
   if (in) fclose(in);


}
