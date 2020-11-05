#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main()
{

    int opcaoInicial, opcaoSomatoria, opcaoLogica, opcaoMatrizes, opcaoAnalise;


    while (opcaoInicial != 5)
    {

        opcaoInicial = 0;
        opcaoSomatoria = 0;
        opcaoLogica = 0;
        opcaoMatrizes = 0;
        opcaoAnalise = 0;


        printf("\t\tCCCCCCCCCCCCCCCCCCC");
        printf("\n\t\tCCCCCCCCCCCCCCCCCCC");
        printf("\n\t\tCCCC");
        printf("\n\t\tCCCC");
        printf("\n\t\tCCCC              -------------------");
        printf("\n\t\tCCCC              -------------------");
        printf("\n\t\tCCCC");
        printf("\n\t\tCCCC              C=ALIK");
        printf("\n\t\tCCCC");
        printf("\n\t\tCCCC              -------------------");
        printf("\n\t\tCCCC              -------------------");
        printf("\n\t\tCCCC");
        printf("\n\t\tCCCCCCCCCCCCCCCCCCC");
        printf("\n\t\tCCCCCCCCCCCCCCCCCCC");


        printf("\n\n\tMENU DE OPCOES");

        printf("\n\n\t1. SOMATORIO");
        printf("\n\n\t2. LOGICA PROPOSICIONAL");
        printf("\n\n\t3. MATRIZES");
        printf("\n\n\t4. ANALISE COMBINATORIA");

        printf("\n\n\t5. SAIR");

        printf("\n\n\tEscolha uma das opcoes citadas acima: ");
        scanf("%d", &opcaoInicial);



        if (opcaoInicial < 1 || opcaoInicial > 5 )
        {

            system("cls");

            printf("\n\n\tOpcao Invalida, escolha uma das opcoes listadas!\n\n");
            system("pause");
            system("cls");

        }
        else
            if (opcaoInicial == 1)
            {

                while (opcaoSomatoria != 3)
                {

                    system("cls");

                    printf("\n\n\t SOMATORIO ");

                    printf("\n\n\t1. Somatorio de j = m ate n para a regra j ");
                    printf("\n\n\t2. Somatorio de j = m até n para a regra (-j)^(j + 1)");

                    printf("\n\n\t3. Voltar ao Menu Anterior");

                    printf("\n\n\tSelecione uma opcao: ");
                    scanf("%d", &opcaoSomatoria);

                    system("cls");

                    if (opcaoSomatoria < 1 || opcaoSomatoria > 3)
                    {

                        printf("\n\n\tOpcao Invalida, escolha uma das opcoes listadas!\n\n");
                        system("pause");

                    }
                    else
                        if (opcaoSomatoria == 1)
                        {

                            int m, n, j, i;

                            m = 0;
                            i = 0;
                            n = 0;
                            j = 0;

                            printf("Digite o valor de m: ");
                            scanf("%d", &m);

                            printf("Digite o valor de n: ");
                            scanf("%d", &n);

                            for (i = m; i <= n; i++)
                            {

                                printf("\n\t%d", i);

                                j += i;

                            }

                            printf("\n\n\tResultado da Somatoria: %d\n\n", j);
                            system("pause");

                        }

                        else
                            if (opcaoSomatoria == 2)
                            {

                                int m, n, i, j, resultado;

                                m = 0;
                                n = 0;
                                i = 0;
                                j = 0;
                                resultado = 0;

                                printf("Digite o valor de m: ");
                                scanf("%d", &m);

                                printf("Digite o valor de n: ");
                                scanf("%d", &n);

                                for (i = m; i <= n; i++)
                                {

                                    resultado = pow(-i, i + 1);

                                    j += resultado;

                                    printf("\n\t%d", resultado);

                                }

                                printf("\n\n\tResultado da Somatoria: %d\n\n", j);
                                system("pause");

                            }

                }
            }

            else
                if (opcaoInicial == 2)
                {

                    while(opcaoLogica != 8)
                    {


                        system("cls");

                        printf("\n\n\tLOGICA PROPOSICIONAL");

                        printf("\n\n\t1. ~p");
                        printf("\n\t2. ~q");
                        printf("\n\t3. p ^ q");
                        printf("\n\t4. p v q");
                        printf("\n\t5. p v q (Exclusiva)");
                        printf("\n\t6. p -> q");
                        printf("\n\t7. p <-> q");

                        printf("\n\t8. Voltar ao Menu Anterior.");

                        printf("\n\n\tSelecione uma opcao: ");
                        scanf("%d", &opcaoLogica);

                        system("cls");


                        if (opcaoLogica < 1 || opcaoLogica > 8)
                        {

                            printf("\n\n\tOpcao Invalida, escolha uma das opcoes listadas!\n\n");

                            system("pause");

                        }
                        else
                            if (opcaoLogica == 1)
                            {

                                int p;
                                bool resultado;

                                p = 0;

                                printf("\n\n\tDigite o valor logico de P. (0 para falso e 1 para verdadeiro): ");
                                scanf("%d", &p);

                                if (p == 0)
                                {

                                    resultado = false;

                                    if (!resultado == true)
                                    {

                                        printf("\n\n\t1(Verdadeiro)\n\n");

                                    }

                                    system("pause");

                                }
                                else
                                    if (p == 1)
                                    {

                                        resultado = true;

                                        if (!resultado == false)
                                        {

                                            printf("\n\n\t0(Falso)\n\n");

                                        }

                                        system("pause");

                                    }
                                    else
                                    {

                                        printf("\n\n\tValor Invalido, digite 0 ou 1!\n\n");
                                        system("pause");

                                    }
                            }
                            else
                                if (opcaoLogica == 2)
                                {

                                    int q;
                                    bool resultado;

                                    q = 0;

                                    printf("\n\n\tDigite o valor logico de Q. (0 para falso e 1 para verdadeiro): ");
                                    scanf("%d", &q);

                                    if (q == 0)
                                    {

                                        resultado = false;

                                        if (!resultado == true)
                                        {

                                            printf("\n\n\t1(Verdadeiro)\n\n");

                                        }

                                        system("pause");

                                    }
                                    else
                                        if (q == 1)
                                        {

                                            resultado = true;

                                            if (!resultado == false)
                                            {

                                                printf("\n\n\t0(Falso)\n\n");

                                            }

                                            system("pause");

                                        }
                                        else
                                        {

                                            printf("\n\n\tValor Invalido, digite 0 ou 1!\n\n");
                                            system("pause");

                                        }
                                }
                                else
                                    if (opcaoLogica == 3)
                                    {

                                        int p, q;

                                        printf("\n\n\tDigite o valor logico de P. (0 para falso e 1 para verdadeiro): ");
                                        scanf("%d", &p);

                                        printf("\n\n\tDigite o valor logico de Q. (0 para falso e 1 para verdadeiro): ");
                                        scanf("%d", &q);

                                        if (p < 0 || p > 1 || q < 0 || q > 1)
                                        {

                                            printf("\n\n\tValor Invalido, digite 0 ou 1!\n\n");
                                            system("pause");

                                        }
                                        else
                                            if (p == 1 && q == 1)
                                            {

                                                printf("\n\n\t1(Verdadeiro)\n\n");

                                                system("pause");
                                            }
                                            else
                                            {

                                                printf("\n\n\t0(Falso)\n\n");
                                                system("pause");

                                            }

                                    }
                                    else
                                        if (opcaoLogica == 4)
                                        {

                                            int p, q;

                                            printf("\n\n\tDigite o valor logico de P. (0 para falso e 1 para verdadeiro): ");
                                            scanf("%d", &p);

                                            printf("\n\n\tDigite o valor logico de Q. (0 para falso e 1 para verdadeiro): ");
                                            scanf("%d", &q);

                                            if (p < 0 || p > 1 || q < 0 || q > 1)
                                            {

                                                printf("\n\n\tValor Invalido, digite 0 ou 1!\n\n");
                                                system("pause");

                                            }
                                            else
                                                if (p == 1 || q == 1)
                                                {

                                                    printf("\n\n\t1(Verdadeiro)\n\n");
                                                    system("pause");

                                                }
                                                else
                                                {

                                                    printf("\n\n\t0(Falso)\n\n");
                                                    system("pause");

                                                }

                                        }
                                        else
                                            if (opcaoLogica == 5)
                                            {

                                                int p, q;

                                                printf("\n\n\tDigite o valor logico de P. (0 para falso e 1 para verdadeiro): ");
                                                scanf("%d", &p);

                                                printf("\n\n\tDigite o valor logico de Q. (0 para falso e 1 para verdadeiro): ");
                                                scanf("%d", &q);

                                                if (p < 0 || p > 1 || q < 0 || q > 1)
                                                {

                                                    printf("\n\n\tValor Invalido, digite 0 ou 1!\n\n");
                                                    system("pause");

                                                }
                                                else
                                                    if (p == 1 && q == 00 || p == 0 && q == 1)
                                                    {

                                                        printf("\n\n\t1(Verdadeiro)\n\n");
                                                        system("pause");

                                                    }
                                                    else
                                                    {

                                                        printf("\n\n\t0(Falso)\n\n");
                                                        system("pause");

                                                    }

                                            }
                                            else
                                                if (opcaoLogica == 6)
                                                {

                                                    int p, q;

                                                    printf("\n\n\tDigite o valor logico de P. (0 para falso e 1 para verdadeiro): ");
                                                    scanf("%d", &p);

                                                    printf("\n\n\tDigite o valor logico de Q. (0 para falso e 1 para verdadeiro): ");
                                                    scanf("%d", &q);

                                                    if (p < 0 || p > 1 || q < 0 || q > 1)
                                                    {

                                                        printf("\n\n\tValor Invalido, digite 0 ou 1!\n\n");
                                                        system("pause");

                                                    }
                                                    else
                                                        if (p == 1 && q == 0)
                                                        {

                                                            printf("\n\n\t0(Falso)\n\n");
                                                            system("pause");

                                                        }
                                                        else
                                                        {

                                                            printf("\n\n\t1(Verdadeiro)\n\n");
                                                            system("pause");

                                                        }

                                                }
                                                else
                                                    if (opcaoLogica == 7)
                                                    {

                                                        int p, q;

                                                        printf("\n\n\tDigite o valor logico de P. (0 para falso e 1 para verdadeiro): ");
                                                        scanf("%d", &p);

                                                        printf("\n\n\tDigite o valor logico de Q. (0 para falso e 1 para verdadeiro): ");
                                                        scanf("%d", &q);

                                                        if (p < 0 || p > 1 || q < 0 || q > 1)
                                                        {

                                                            printf("\n\n\tValor Invalido, digite 0 ou 1!\n\n");
                                                            system("pause");

                                                        }
                                                        else
                                                            if (p == q)
                                                            {

                                                                printf("\n\n\t1(Verdadeiro)\n\n");
                                                                system("pause");

                                                            }
                                                            else
                                                            {

                                                                printf("\n\n\t0(Falso)\n\n");
                                                                system("pause");

                                                            }
                                                    }
                    }
                }
                else
                    if (opcaoInicial == 3)
                    {

                        int linhas,colunas, i, j, determinante;

                        linhas = 2;
                        colunas = 2;
                        determinante = 0;

                        i = 0;
                        j = 0;

                        while(opcaoMatrizes != 5)
                        {

                            system("cls");

                            printf("\n\n\tMATRIZES ");

                            printf("\n\n\t1. Determinante");
                            printf("\n\t2. Soma");
                            printf("\n\t3. Subtracao");
                            printf("\n\t4. Produto");

                            printf("\n\t5. Voltar ao Menu Anterior");

                            printf("\n\n\tSelecione uma opcao: ");
                            scanf("%d", &opcaoMatrizes);

                            system("cls");


                            if (opcaoMatrizes < 1 || opcaoMatrizes > 5)
                            {

                                printf("\n\n\tOpcao Invalida, escolha uma das opcoes listadas!\n\n");

                                system("pause");

                            }
                            else
                                if (opcaoMatrizes == 1)
                                {

                                    int a11, a12, a21, a22;

                                    printf ("\n\n\tEntre com o a11: ");
                                    scanf ("%d", &a11);

                                    printf ("\n\tEntre com o a12: ");
                                    scanf ("%d", &a12);

                                    printf ("\n\tEntre com o a21: ");
                                    scanf ("%d", &a21);

                                    printf ("\n\tEntre com o a22: ");
                                    scanf ("%d", &a22);

                                    determinante = a11*a21 + a12*a22;

                                    printf ("\n\n\tO determinante da matriz  e: %d\n\n", determinante);

                                    system("pause");

                                }
                                else
                                    if (opcaoMatrizes == 2)
                                    {

                                        int mat1[linhas][colunas], mat2[linhas][colunas], mat3[linhas][colunas];


                                        for (i=0; i<linhas; i++)
                                        {

                                            for(j=0; j<colunas; j++)
                                            {

                                                printf("\n\n\tEntre com os elementos da matriz A [%d][%d]: ",i+1,j+1);
                                                scanf("%d",&mat1[i][j]);

                                                printf("\n\tEntre com os elementos da matriz B [%d][%d]: ",i+1,j+1);
                                                scanf("%d",&mat2[i][j]);

                                                mat3[i][j] = mat1[i][j] + mat2[i][j];

                                            }
                                        }

                                        printf("\n\n\tMatriz A: \n\n");


                                        for (i=0; i<linhas; i++)
                                        {

                                            for(j=0; j<colunas; j++)
                                                printf("\t%3.d\t",mat1[i][j]);
                                            printf("\n\n");

                                        }

                                        printf("\n\n\tMatriz B: \n\n");


                                        for (i=0; i<linhas; i++)
                                        {

                                            for(j=0; j<colunas; j++)
                                                printf("\t%3.d\t",mat2[i][j]);
                                            printf("\n\n");

                                        }

                                        printf("\n\n\tMatriz C: \n\n");


                                        for (i=0; i<linhas; i++)
                                        {

                                            for(j=0; j<colunas; j++)
                                                printf("\t%3.d\t",mat3[i][j]);
                                            printf("\n\n");

                                        }

                                        system("pause");

                                    }
                                    else
                                        if (opcaoMatrizes == 3)
                                        {

                                            int mat1[linhas][colunas], mat2[linhas][colunas], mat3[linhas][colunas];

                                            for (i=0; i<linhas; i++)
                                            {
                                                for(j=0; j<colunas; j++)
                                                {

                                                    printf("\n\n\tEntre com os elementos da matriz A [%d][%d]: ",i+1,j+1);
                                                    scanf("%d",&mat1[i][j]);

                                                    printf("\n\tEntre com os elementos da matriz B [%d][%d]: ",i+1,j+1);
                                                    scanf("%d",&mat2[i][j]);

                                                    mat3[i][j] = mat1[i][j] - mat2[i][j];

                                                }
                                            }

                                            printf("\n\n\tMatriz A: \n\n");


                                            for (i=0; i<linhas; i++)
                                            {
                                                for(j=0; j<colunas; j++)
                                                    printf("\t%3.d\t",mat1[i][j]);
                                                printf("\n\n");

                                            }

                                            printf("\n\n\tMatriz B: \n\n");


                                            for (i=0; i<linhas; i++)
                                            {
                                                for(j=0; j<colunas; j++)
                                                    printf("\t%3.d\t",mat2[i][j]);
                                                printf("\n\n");

                                            }

                                            printf("\n\n\tMatriz C: \n\n");


                                            for (i=0; i<linhas; i++)
                                            {
                                                for(j=0; j<colunas; j++)
                                                    printf("\t%3.d\t",mat3[i][j]);
                                                printf("\n\n");

                                            }

                                            getch();

                                            system("pause");

                                        }
                                        else
                                            if (opcaoMatrizes == 4)
                                            {

                                                int mat1[linhas][colunas], mat2[linhas][colunas], mat3[linhas][colunas];

                                                for (i=0; i<linhas; i++)
                                                {
                                                    for(j=0; j<colunas; j++)
                                                    {

                                                        printf("\n\n\tEntre com os elementos da matriz A [%d][%d]: ",i+1,j+1);
                                                        scanf("%d",&mat1[i][j]);

                                                        printf("\n\tEntre com os elementos da matriz B [%d][%d]: ",i+1,j+1);
                                                        scanf("%d",&mat2[i][j]);

                                                        mat3[i][j] = mat1[i][j] * mat2[i][j];

                                                    }
                                                }

                                                printf("\n\n\tMatriz A: \n\n");


                                                for (i=0; i<linhas; i++)
                                                {
                                                    for(j=0; j<colunas; j++)
                                                        printf("\t%3.d\t",mat1[i][j]);
                                                    printf("\n\n");

                                                }

                                                printf("\n\n\tMatriz B: \n\n");


                                                for (i=0; i<linhas; i++)
                                                {
                                                    for(j=0; j<colunas; j++)
                                                        printf("\t%3.d\t",mat2[i][j]);
                                                    printf("\n\n");

                                                }

                                                printf("\n\n\tMatriz C: \n\n");


                                                for (i=0; i<linhas; i++)
                                                {
                                                    for(j=0; j<colunas; j++)
                                                        printf("\t%3.d\t",mat3[i][j]);
                                                    printf("\n\n");

                                                }

                                                getch();
                                                system("pause");

                                            }
                        }
                    }
                    else
                        if (opcaoInicial == 4)
                        {

                            while (opcaoAnalise != 4 )
                            {

                                system("cls");

                                printf("\n\n\tANALISE COMBINATORIA ");

                                printf("\n\n\t1. Permutacao Simples");
                                printf("\n\t2. Arranjo Simples");
                                printf("\n\t3. Combinacao Simples");

                                printf("\n\t4. Voltar ao Menu Anterior");

                                printf("\n\n\tSelecione uma opcao: ");
                                scanf("%d", &opcaoAnalise);

                                system("cls");


                                if (opcaoAnalise < 1 || opcaoAnalise > 4)
                                {

                                    printf("\n\n\tOpcao Invalida, escolha uma das opcoes listadas!\n\n");

                                    system("pause");

                                }
                                else
                                    if (opcaoAnalise == 1)
                                    {

                                        int n, fat;

                                        printf("\n\n\tDigite o valor de n: ");
                                        scanf("%d", &n);

                                        if(n >= 0)
                                        {
                                            for(fat = 1; n > 1; n = n - 1)
                                                fat = fat * n;

                                            printf("\n\tNumero de permutacoes possiveis: %d\n\n", fat);
                                            system("pause");

                                        }
                                        else
                                        {
                                            printf("\n\n\tNao sera possivel calcular o numero de permutacoes\n\n");

                                            system("pause");

                                        }


                                    }
                                    else
                                        if (opcaoAnalise == 2)
                                        {

                                            float n, k;
                                            int fat;

                                            printf("\n\n\tDigite o valor de n: ");
                                            scanf("%f", &n);

                                            printf("\n\tDigite o valor de k (precisa ser menor que n): ");
                                            scanf("%f", &k);

                                            if(n >= 0 && k <= n)
                                            {
                                                k = n - k;

                                                for(fat = 1; n > 1; n = n - 1)
                                                    fat = fat * n;
                                                n = fat;

                                                for(fat = 1; k > 1; k = k - 1)
                                                    fat = fat * k;
                                                k = fat;

                                                printf("\n\n\tResultado do arranjo simples: %2.f\n\n", n / k);
                                                system("pause");
                                            }
                                            else
                                            {
                                                printf("\n\n\tNao sera possivel calcular o numero de permutacoes\n\n");

                                                system("pause");
                                            }

                                        }
                                        else
                                            if (opcaoAnalise == 3)
                                            {

                                                float n, k, p;
                                                int fat;

                                                printf("\n\n\tDigite o valor de n: ");
                                                scanf("%f", &n);

                                                printf("\n\tDigite o valor de k (precisa ser menor que n): ");
                                                scanf("%f", &k);

                                                if(n >= 0 && k <= n)
                                                {
                                                    p = n - k;

                                                    for(fat = 1; n > 1; n = n - 1)
                                                        fat = fat * n;
                                                    n = fat;

                                                    for(fat = 1; k > 1; k = k - 1)
                                                        fat = fat * k;
                                                    k = fat;

                                                    for(fat = 1; p > 1; p = p - 1)
                                                        fat = fat * p;
                                                    p = fat;

                                                    printf("\n\n\tResultado da combinacao simples: %2.f\n\n", n / k * p);
                                                    system("pause");

                                                }
                                                else
                                                {

                                                    printf("\n\n\tNao sera possivel calcular o numero de permutacoes\n\n");
                                                    system("pause");

                                                }
                                            }
                            }

                        }
    }

    return 0;
}
