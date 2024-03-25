//   input in c;
// #include <stdio.h>

// int main() {
//     char inputString[100]; // Assuming a maximum input length of 99
//     characters

//     printf("Enter a string: ");
//     fgets(inputString, sizeof(inputString), stdin);
//   int i =0;
//   while (inputString[i]!='\0') {
//     printf("%c",inputString[i]);
//     i++;
//   }
//   printf("%d",sizeof(inputString));
//     return 0;
// }

// sorting in c;
// #include <stdio.h>
// int main() {
//   int arr[] = {0,33, 22, 77, 44, 95, 2, 0, 1};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   for(int i =0;i<size -1; i++){
//     for (int j = 0 ; j< size -1 - i; j++) {
//       if ( arr[j] > arr[j+1]){
//         int r = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = r;
//       }
//     }
//   }
//   printf("Sorted array: ");
//   for (int i = 0; i < size; i++) {
//     printf("%d ", arr[i]);
//   }
//   return 0;
// }

// remove duplicates
// #include <stdio.h>
// int main(){
//   int arr[] = {0,33,2,2,3,3,1,22,77,44,95,2,0,1};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   for(int i = 0;i< size ; i++){
//     for(int j = 0 ; j< size ; j++) {
//       if ( arr[ i ] == arr[j] && j != i && arr[i] !=763543){
//         arr[j] = 763543;
//         printf("%d\n",arr[i]);
//       }
//     }
//   }
//   for (int i = 0; i < size; i++) {
//     if ( arr[i] != 763543)
//     {

//     printf("%d ", arr[i]);
//     }
//   }
// }

// hcf  and lcm
//  #include <stdio.h>
//  int hcf (int a, int b){
//    if ( b==0){
//      return a;
//    }
//    return hcf(b, a%b);
//  }
//  int lcm (int a , int b){
//    return a*b / hcf(a,b);
//  }
//  int main(){
//    printf("%d",hcf(24,5));
//    printf("%d",lcm(24,5));
//  }

// reverse each word of a string;
// #include <stdio.h>
// #include <string.h>

// void reverseWord(char word[]) {
//   int start = 0;
//   int end = strlen(word) - 1;
//   while (start < end) {
//     char temp = word[start];
//     word[start] = word[end];
//     word[end] = temp;
//     start++;
//     end--;
//   }
// }

// int main() {
//   char arr[100];
//   printf("Enter String: ");
//   fgets(arr, sizeof(arr), stdin);
//   int i = 0;
//   while (arr[i] != '\0') {
//     if (arr[i] != ' ') {
//       char word[100];
//       int j = 0;
//       while (arr[i] != ' ' && arr[i] != '\0') {
//         word[j++] = arr[i++];
//       }
//       word[j] = '\0';
//       reverseWord(word);
//       printf("%s ", word);
//     } else {
//       i++;
//     }
//   }
//   return 0;
// }

// Unique number in array.
//  #include <stdio.h>
//  #include <stdbool.h>

// bool isUnique(char str[], char ch) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     char inputString[100];
//     printf("Enter a string: ");
//     scanf("%s", inputString);

//     printf("Unique characters in the string: ");
//
//     for (int i = 0; inputString[i] != '\0'; i++) {
//         if (isUnique(inputString, inputString[i])) {
//             printf("%c ", inputString[i]);
//         }
//     }

//     printf("\n");

//     return 0;
// }
//
//
// number to binary
// int main() {
//   int k = 20;
//   int bin = 0;
//   int base = 1;
//   while (k != 0) {
//     bin = bin + base * (k % 2);
//     k = k / 2;
//     base = base * 10;
//   }
//   cout << bin;
// }
// bin to number
// int main() {
//   string k = "1011";
//   int l = 0;
//   int j = 0;

//   for (int i = k.length() - 1; i >= 0; i--) {
//     if (k[i] == '1') {
//       l = l + pow(2, j);
//     }
//     j++;
//   }
//   cout << l;
// }
//
//
// balance bracket
int main() {
  string b;
  cin >> b;
  int len = b.length();
  bool l = true;
  for (int i = 0; i < len / 2; i++) {
    if ((b[i] == '(' && b[len - i - 1] == ')') ||
        (b[i] == '[' && b[len - i - 1] == ']') ||
        (b[i] == '{' && b[len - i - 1] == '}')) {
      l = true;
    } else {
      l = false;
      break;
    }
  }
  if (l) {
    cout << "yes";
  } else {
    cout << "No";
  }

  // first to last
  // second to second last
  // third to third last
  // it all are equal
}
