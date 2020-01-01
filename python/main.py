import pdb

# numero = input('Digite um número: ');

# print(numero);

# print('O numero digitado foi {}'.format(numero));

# nome = input('Digite o seu nome: ');
# idade = input('Digite sua idade: ');

# print('Seu nome eh {} e sua idade eh {}\n'.format(nome,idade));

# x = [1, 2, 3];
# y = [1, 2, 3];

# if (x == y):
#     print('true.\n');
# else:
#     print('false.\n');

# if (x is x):
#     print("True.\n");
# else:
#     print("False.\n");

# numero = 42

# while(True):

#     chute = int(input("Choose a number: "));

#     if chute == numero:
#         print("\nRight.\n");
#         break;
#     else:
#         print("\nWrong.\n");

# print("Congrats! You won the game.\n");

# for i in range(1, 10, 2):
#     print(i);

print('*********************************');
print('***Bem vindo ao jogo da Forca!***');
print('*********************************');

palavra_secreta = 'banana';
letras_certas = ['_', '_', '_', '_', '_', '_'];

erros = 0;

acertou = False;
enforcou = False;
errou = False;

while(not acertou and not enforcou):
    print("\nPlaying...\n");

    while(not acertou and not errou):
        chute = input("Escolha uma letra?\n");

        posicao = 0;

        for letra in palavra_secreta:
            if(chute.upper() == letra.upper()):
                # print("Encontrei a letra {} na posicao {} ".format(letra, posicao));
                letras_certas[posicao] = letra;
            else:
                erros += 1;
            
            posicao += 1;

        print(letras_certas);

        if('_' not in letras_certas):
            print("\n ****** Ganhou ****** \n");
            acertou = True;

        if(erros == 6):
            print("\n ****** Perdeu ****** \n");
            enforcou = True;

        # print("\nJogando...");


        # acertou = True;
    

