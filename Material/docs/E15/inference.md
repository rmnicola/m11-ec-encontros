---
title: Inferência
sidebar_position: 1
sidebar_class_name: autoestudo
---

# Inferência c/ tensores

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/4Gac5I64LM4" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::
<br></br>

:::tip Exercício 26.01

Implemente um **perceptron** simples utilizando C++ e tensores. O perceptron
deve ser capaz de:

- Receber um vetor de entradas e um vetor de pesos.
- Calcular a soma ponderada das entradas.
- Aplicar uma função de ativação (como a função degrau ou a sigmoide).
- Retornar uma saída binária ou contínua, dependendo da função de ativação
  escolhida.

**Dica**: Utilize `vector` para representar tanto os pesos quanto as entradas.

:::

:::tip Exercício 26.02

Expanda a implementação anterior para criar uma **rede neural de duas
camadas**. Esta rede deve:

- Ter uma camada de entrada conectada a uma camada de saída com múltiplos
  neurônios.
- Utilizar uma função de ativação como ReLU ou sigmoide para a camada de saída.
- Ser capaz de calcular a saída para um vetor de entradas.
  
**Requisitos**:
- O número de neurônios na camada de saída deve ser configurável.
- Cada neurônio da camada de saída deve possuir seu próprio conjunto de pesos.
  
Implemente o **forward pass** e verifique o funcionamento da rede para várias
entradas.

:::

:::tip Exercício 26.03

Generalize sua rede para uma **arquitetura multicamadas**. A rede deve permitir a definição de:

- Número de camadas ocultas.
- Número de neurônios em cada camada.
- Função de ativação para cada camada (ex: ReLU nas camadas ocultas, softmax na camada de saída).

Implemente o **forward pass** de forma a percorrer todas as camadas, desde a entrada até a saída. Teste sua implementação com diferentes configurações de rede e dados de entrada.

:::
