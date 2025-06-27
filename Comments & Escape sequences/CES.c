#include <stdio.h> 
int main(){
    // This is a single line comment
    /* 
       This
       is
       a
       multi-line
       comment 
    */
   /*
       escape sequence = character combination consisting of a backslash \ 
                         followed by a letter or combination of digits.
                         They specify actions within a line or string of text.
                         \n = newline
                         \t = tab
   */
  /*
         ESCAPE SEQUENCE              CHARACTER REPRESENTED
         **************************************************
              \a                      Alert (beep, bell)
         --------------------------------------------------    
              \b                      Backspace
         --------------------------------------------------       
              \e                      Escape character
         --------------------------------------------------     
              \f                      Formfeed pagebreak
         --------------------------------------------------     
              \n                      Newline (Line feed)
         --------------------------------------------------     
              \r                      Carriage return
         --------------------------------------------------     
              \t                      Horizontal tab
         --------------------------------------------------     
              \v                      Vertical tab
         --------------------------------------------------     
              \\                      Backslash
         --------------------------------------------------     
              \'                      Apostrophe or single quotation mark
         --------------------------------------------------     
              \"                      Double qquotation mark
         --------------------------------------------------     
              \?                      Question mark (used to avoid trigraphs)
         --------------------------------------------------     
              \nnn                    the byte whose numerical value is given by nnn
                                      interpreted as octal number
         --------------------------------------------------                             
              \xhh                    The byte whose numerical value is given by hh.....
                                      interpreted as hexadecimal number
         --------------------------------------------------                             
              \uhhhh                  Unicode code point below 10000 hexadecimal
         --------------------------------------------------      
              \uhhhhhhhh              Unicode code point where h is a hexadecimal digit
         ***************************************************
  */
  printf("I like Pizza!\n");
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
  printf("\"Two things are infinite: the universe and human stupidity; and I'm not sure about the universe\" - Albert Einstein"); 
return 0;
}