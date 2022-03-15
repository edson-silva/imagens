
      #include <iostream>
      #include <stack>

     using namespace std;

     int main()  {

        
         stack <string> imagens;

          
         imagens.push("Imagem carro");
         imagens.push("Imagem carro2");
         imagens.push("Imagem carro3");
         imagens.push("Imagem carro4");

           cout << "Tamanho da pilha:    " <<  imagens.size()  << "\n";


           imagens.pop();
           imagens.pop();
           imagens.pop(); 


           cout <<  "Imagem do topo:  " << imagens.top() << "\n";

           


         return 0;

         }  
