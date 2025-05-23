#include <stdio.h>

// Função recursiva para o movimento da Torre (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
        printf("Direita\n");
            moverTorre(casas - 1);
            }

            // Função recursiva para o movimento do Bispo (Cima Direita)
            void moverBispoRecursivo(int casas) {
                if (casas <= 0) return;
                    printf("Cima Direita\n");
                        moverBispoRecursivo(casas - 1);
                        }

                        // Função recursiva para o movimento da Rainha (Esquerda)
                        void moverRainha(int casas) {
                            if (casas <= 0) return;
                                printf("Esquerda\n");
                                    moverRainha(casas - 1);
                                    }

                                    // Movimento do Cavalo com loops aninhados e controle de fluxo
                                    void moverCavalo() {
                                        printf("\nMovimento do Cavalo:\n");
                                            for (int i = 0; i < 2; i++) { // Duas casas para cima
                                                    if (i == 1) {
                                                                printf("Cima\n");
                                                                            for (int j = 0; j < 1; j++) { // Uma casa para a direita
                                                                                            if (j == 0) {
                                                                                                                printf("Direita\n");
                                                                                                                                    break; // finaliza assim que o "L" for completado
                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                                            continue;
                                                                                                                                                                                    }
                                                                                                                                                                                            printf("Cima\n");
                                                                                                                                                                                                }
                                                                                                                                                                                                }

                                                                                                                                                                                                // Movimento do Bispo com loops aninhados (extra)
                                                                                                                                                                                                void moverBispoComLoops(int casas) {
                                                                                                                                                                                                    printf("\nMovimento do Bispo (com loops aninhados):\n");
                                                                                                                                                                                                        for (int i = 0; i < casas; i++) { // movimento vertical (cima)
                                                                                                                                                                                                                for (int j = 0; j < 1; j++) { // movimento horizontal (direita)
                                                                                                                                                                                                                            printf("Cima Direita\n");
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                        int main() {
                                                                                                                                                                                                                                            int casasTorre = 5;
                                                                                                                                                                                                                                                int casasBispo = 5;
                                                                                                                                                                                                                                                    int casasRainha = 8;

                                                                                                                                                                                                                                                        // Torre
                                                                                                                                                                                                                                                            printf("Movimento da Torre:\n");
                                                                                                                                                                                                                                                                moverTorre(casasTorre);

                                                                                                                                                                                                                                                                    // Bispo com recursividade
                                                                                                                                                                                                                                                                        printf("\nMovimento do Bispo (recursivo):\n");
                                                                                                                                                                                                                                                                            moverBispoRecursivo(casasBispo);

                                                                                                                                                                                                                                                                                // Rainha
                                                                                                                                                                                                                                                                                    printf("\nMovimento da Rainha:\n");
                                                                                                                                                                                                                                                                                        moverRainha(casasRainha);

                                                                                                                                                                                                                                                                                            // Cavalo com loops complexos
                                                                                                                                                                                                                                                                                                moverCavalo();

                                                                                                                                                                                                                                                                                                    // Bispo com loops aninhados
                                                                                                                                                                                                                                                                                                        moverBispoComLoops(casasBispo);

                                                                                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                                                                                            }