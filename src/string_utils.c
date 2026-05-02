// -- Copy each character from src to dest until and including '\0'. Return dest. The destination buffer must be large enough. -- //
char* my_strcpy(char* dest, const char* src){
    char* svd_dest = dest;
     while (*src != '\0'){ // starting a while loop that ends as soon as the source reaches its end 
         *dest = *src ; // coping the char from the source to destination 
         dest ++ ;
         src ++ ; 
         // adding +1 for both  the source and the destination to move a single step
     }
     *dest = '\0' ; 
     // adding the character constant  
     return svd_dest ;
}
