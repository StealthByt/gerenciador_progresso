#include <stdio.h>

// Função para atualizar o progresso de uma etapa
void atualizar_progresso(int* etapa, int progresso) {
    *etapa = progresso > 100 ? 100 : progresso;
}

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

        // Calculando o progresso total do projeto
        int progresso_total = (planejamento + design + implementacao + testes + implantacao) / 5;
        printf("Progresso total do projeto: %d%%\n\n", progresso_total);

        // Menu para escolher uma ação
        printf("Escolha uma ação:\n");
        printf("1. Atualizar progresso\n");
        printf("2. Exibir resumo\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        int progresso;

        switch (opcao) {
            case 1:
                // Pergunta ao usuário qual etapa deseja atualizar
                printf("Escolha uma etapa para atualizar (1-5): ");
                scanf("%d", &opcao);

                printf("Digite o progresso dessa etapa (0-100): ");
                scanf("%d", &progresso);

                // Validação de entrada
                if (progresso < 0 || progresso > 100) {
                    printf("Valor de progresso inválido! Por favor, insira um valor entre 0 e 100.\n\n");
                    continue; // Volta para o início do loop
                }

                // Atualiza a etapa escolhida com o valor de progresso
                switch (opcao) {
                    case 1:
                        atualizar_progresso(&planejamento, progresso);
                        if (planejamento == 100) printf("Fase de Planejamento concluída!\n");
                        break;
                    case 2:
                        atualizar_progresso(&design, progresso);
                        if (design == 100) printf("Fase de Design concluída!\n");
                        break;
                    case 3:
                        atualizar_progresso(&implementacao, progresso);
                        if (implementacao == 100) printf("Fase de Implementação concluída!\n");
                        break;
                    case 4:
                        atualizar_progresso(&testes, progresso);
                        if (testes == 100) printf("Fase de Testes concluída!\n");
                        break;
                    case 5:
                        atualizar_progresso(&implantacao, progresso);
                        if (implantacao == 100) printf("Fase de Implantação concluída!\n");
                        break;
                    default:
                        printf("Opção inválida! Escolha um número entre 1 e 5.\n");
                        break;
                }
                break;

            case 2:
                // Exibir o resumo completo
                printf("\nResumo do progresso do projeto:\n");
                printf("Planejamento: %d%%\n", planejamento);
                printf("Design: %d%%\n", design);
                printf("Implementação: %d%%\n", implementacao);
                printf("Testes: %d%%\n", testes);
                printf("Implantação: %d%%\n", implantacao);
                printf("Progresso total: %d%%\n\n", progresso_total);
                break;

            case 3:
                // Opção para sair
                printf("Saindo do programa...\n");
                return 0;

            default:
                printf("Opção inválida! Escolha uma opção válida.\n\n");
        }

        printf("\n");
    }

    printf("Todas as fases do desenvolvimento do ExploraBrasil foram concluídas!\n");
    return 0;
}
