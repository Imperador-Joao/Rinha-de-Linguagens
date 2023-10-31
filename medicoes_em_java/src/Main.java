package src;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long tempoInicial = System.nanoTime();

        // Seu código a ser medido
        for (int i = 1; i < 1000000+1; i++) {
        }

        // Obtenha o tempo final
        long tempoFinal = System.nanoTime();

        // Calcule o tempo de execução em milissegundos
        long tempoDeExecucao = (tempoFinal - tempoInicial);

        System.out.println("Tempo de execução: " + tempoDeExecucao + " ns");
	}

}