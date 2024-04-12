#include <stdio.h>
#include <string.h>

/**

*/

int findSong(char songs[], char song[]){
  
 for (int i = 0; i < sizeof(songs); i++){
    if (strstr(*(songs + i), song)){
      printf("Found track: %s ./n", song[i]);
      continue;
    }
 }

 return 0;
}

int main(int argc, int *argv[]){

 char tracks[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima", 
  };
 
 //char track[80];
 //printf("Search for: ");

 //fgets(track, 80, stdin); 

 findSong(tracks, track);

 return 0;

}
