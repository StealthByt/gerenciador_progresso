#include <stdio.h>

int main() {
    // Inicializando as variáveis de progresso das etapas
    int planejamento = 0, design = 0, implementacao = 0, testes = 0, implantacao = 0;
    int opcao;

    printf("Simulação do desenvolvimento do ExploraBrasil\n");
    printf("Este programa permite definir o progresso em cada fase do projeto.\n");
    printf("Acompanhe cada etapa até que todas estejam concluídas (100%%).\n\n");

    // Loop que continuará até que todas as etapas estejam em 100%
    while (planejamento < 100 || design < 100 || implementacao < 100 || testes < 100 || implantacao < 100) {
        // Exibindo o progresso atual
        printf("Progresso atual:\n");
        printf("1. Planejamento: %d%%\n", planejamento);
        printf("2. Design: %d%%\n", design);
        printf("3. Implementação: %d%%\n", implementacao);
        printf("4. Testes: %d%%\n", testes);
        printf("5. Implantação: %d%%\n", implantacao);

        // Pergunta ao usuário qual etapa deseja atualizar
        printf("\nEscolha uma etapa para atualizar (1-5): ");
        scanf("%d", &opcao);

        int progresso;
        printf("Digite o progresso dessa etapa (0-100): ");
        scanf("%d", &progresso);

        // Atualiza a etapa escolhida com o valor de progresso definido pelo usuário
        switch (opcao) {
            case 1:
                planejamento = progresso > 100 ? 100 : progresso;
                break;
            case 2:
                design = progresso > 100 ? 100 : progresso;
                break;
            case 3:
                implementacao = progresso > 100 ? 100 : progresso;
                break;
            case 4:
                testes = progresso > 100 ? 100 : progresso;
                break;
            case 5:
                implantacao = progresso > 100 ? 100 : progresso;
                break;
            default:
                printf("Opção inválida! Escolha um número entre 1 e 5.\n");
                break;
        }

        printf("\n");
    }

    printf("Todas as fases do desenvolvimento do ExploraBrasil foram concluídas!\n");
    return 0;
}



