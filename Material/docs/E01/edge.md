---
title: Edge Computing
sidebar_position: 4
sidebar_class_name: autoestudo
---

# Introdução à computação na borda

A computação na borda, ou edge computing, é um paradigma emergente que se
concentra em processar dados perto de onde eles são gerados, em vez de depender
de data centers centralizados. Isso permite uma análise e resposta mais
rápidas, reduzindo a latência e aliviando a carga na infraestrutura de rede.
Com o aumento exponencial de dispositivos conectados e a Internet das Coisas
(IoT), a computação na borda se tornou essencial para garantir que as redes
possam suportar o tráfego de dados e responder em tempo real.

## 1. Fog computing vs Edge computing

Fog computing e edge computing são termos frequentemente usados de forma
intercambiável, mas possuem diferenças sutis. A fog computing, ou computação em
névoa, estende os serviços da nuvem para a borda da rede, distribuindo
processamento, armazenamento e análise em uma arquitetura de malha horizontal.
Ela conecta a borda à nuvem, permitindo que dados sejam processados em vários
pontos intermediários. Por outro lado, a edge computing é mais específica em
sua abordagem, focando diretamente no processamento de dados próximo aos
dispositivos de origem. Enquanto a fog computing abrange uma rede mais ampla de
dispositivos e data centers, a edge computing se concentra na execução de
processos computacionais na própria "borda" da rede, próxima aos dispositivos e
usuários finais.

## 2. O que é edge computing

Edge computing é um paradigma de tecnologia que desloca o processamento e a
análise de dados para mais próximo do local onde eles são gerados, ao invés de
depender de data centers centralizados. Este método é especialmente útil em
cenários onde a latência precisa ser mínima para garantir a eficácia e
segurança dos processos. Por exemplo, em veículos autônomos, a necessidade de
tomar decisões em frações de segundo torna inviável depender de um data center
remoto para processar informações críticas, como dados de sensores e câmeras.
Da mesma forma, em sistemas de monitoramento de saúde, uma resposta rápida pode
ser a diferença entre vida e morte, especialmente em monitoramento remoto de
condições de pacientes.

Além disso, em aplicações industriais de IoT, como controle de equipamentos em
fábricas ou monitoramento de infraestrutura, a edge computing permite que
análises e decisões sejam feitas localmente, evitando possíveis problemas de
latência e conectividade. Ao processar dados na borda, é possível filtrar e
agregar informações de maneira mais eficiente, enviando apenas os dados mais
relevantes para a nuvem, o que reduz significativamente o tráfego na rede e os
custos associados.

### 2.1. Device Layer

A Device Layer, ou camada de dispositivos, é a primeira linha de coleta e
consumo de dados na arquitetura de edge computing. Esta camada é composta por
uma variedade de dispositivos conectados, como sensores, atuadores, câmeras,
smartphones e veículos autônomos. Esses dispositivos são responsáveis pela
coleta de dados do ambiente, como temperatura, pressão, imagens e movimentos,
entre outros.

Além da coleta de dados, muitos desses dispositivos têm capacidade de
processamento embutida, permitindo a execução de algoritmos de análise básica.
Isso inclui a filtragem de ruído, pré-processamento de dados e detecção de
eventos simples. Essa capacidade de processamento local é crucial para reduzir
o volume de dados que precisa ser transmitido para outras camadas, como a Edge
Layer ou a Cloud Layer, especialmente em situações onde a largura de banda é
limitada ou os dados são sensíveis e precisam ser mantidos localmente para
garantir a privacidade e segurança.

### 2.2. Edge Layer

O Edge Layer é a camada intermediária na arquitetura de edge computing, onde
ocorre a maior parte do processamento intensivo de dados e análise local. Esta
camada inclui dispositivos como gateways inteligentes, servidores de borda e
micro data centers. Esses dispositivos são geralmente localizados próximos aos
dispositivos da Device Layer e são responsáveis por tarefas mais complexas de
processamento de dados.

No Edge Layer, é comum realizar filtragem, agregação de dados, análise avançada
e, em alguns casos, armazenamento temporário. Por exemplo, em um sistema de
vigilância por vídeo, as câmeras podem enviar feeds de vídeo para servidores de
borda que analisam as imagens em tempo real para detectar atividades suspeitas.
Somente os dados relevantes, como eventos de segurança, são transmitidos para a
nuvem para análise posterior ou armazenamento de longo prazo.

Essa camada também é crítica para a tomada de decisões em tempo real. A
proximidade do Edge Layer aos dispositivos de origem dos dados permite uma
resposta rápida, essencial em muitas aplicações como controle de tráfego em
cidades inteligentes, gerenciamento de ativos industriais e até mesmo em
serviços de emergência.

### 2.3. Cloud Layer

A Cloud Layer, ou camada de nuvem, continua a desempenhar um papel fundamental
na arquitetura de edge computing. Embora muitas das operações sejam realizadas
localmente na borda, a nuvem é responsável por fornecer recursos adicionais de
processamento, armazenamento e análise que podem não ser práticos de
implementar na borda.

Esta camada oferece escalabilidade e capacidade para realizar processamento de
dados em larga escala, armazenamento de longo prazo e análises complexas que
não exigem respostas imediatas. Por exemplo, dados coletados e processados na
borda podem ser enviados para a nuvem para análises mais profundas, como
aprendizado de máquina ou mineração de dados, que requerem maior poder de
computação.

Além disso, a nuvem serve como um ponto central para integrar dados de várias
bordas, proporcionando uma visão global e unificada de todas as operações. Isso
é particularmente útil para empresas que operam em vários locais ou precisam
consolidar dados de diferentes fontes para uma análise mais abrangente. A
combinação de edge computing e cloud computing cria uma abordagem híbrida, onde
as vantagens de uma resposta rápida e local são complementadas pelo poder e
flexibilidade da nuvem centralizada, oferecendo uma solução robusta e eficiente
para uma ampla gama de aplicações.

## 6. Quando usar edge computing

A edge computing é especialmente útil em situações onde a latência, a largura
de banda, a privacidade dos dados, a confiabilidade e a autonomia do sistema
são fatores críticos. Aqui estão alguns cenários específicos em que a edge
computing é vantajosa:

### 6.1. Baixa Latência

Aplicações que requerem tempos de resposta rápidos, como veículos autônomos,
robótica industrial e realidade aumentada, se beneficiam enormemente da edge
computing. Nestes casos, qualquer atraso na transmissão de dados pode levar a
falhas no sistema ou comprometer a segurança. Ao processar dados localmente, a
edge computing minimiza a latência, permitindo que decisões sejam tomadas quase
instantaneamente.

### 6.2. Limitações de Largura de Banda

Em ambientes onde a conectividade de rede é limitada ou os custos de
transmissão de dados são altos, como em áreas rurais ou em alto mar, a edge
computing pode ser uma solução eficiente. Processar e filtrar dados na borda
reduz a quantidade de informações que precisa ser enviada para a nuvem,
economizando largura de banda e custos associados.

### 6.3. Privacidade e Segurança de Dados

Para aplicações que lidam com dados sensíveis, como informações de saúde ou
dados financeiros, a edge computing oferece uma camada adicional de segurança.
Ao manter o processamento e o armazenamento de dados localmente, é possível
reduzir o risco de exposição de dados durante a transmissão para a nuvem. Além
disso, as regulamentações de proteção de dados, como o GDPR na Europa,
incentivam o processamento local para proteger a privacidade dos usuários.

### 6.4. Confiabilidade e Resiliência

Em sistemas críticos onde a interrupção do serviço não é uma opção, como em
instalações industriais ou infraestruturas de emergência, a edge computing
proporciona uma maior confiabilidade. Mesmo que a conectividade com a nuvem
seja perdida, os dispositivos de borda podem continuar operando de forma
autônoma, garantindo que os serviços essenciais permaneçam ativos.

### 6.5. Eficiência Operacional

Aplicações de monitoramento em tempo real, como vigilância por vídeo ou
monitoramento de equipamentos industriais, beneficiam-se da edge computing para
realizar análises locais e tomar ações imediatas. Isso não só reduz o tempo de
resposta, mas também alivia a carga nos servidores centrais, resultando em uma
operação mais eficiente.

### 6.6. Personalização e Experiência do Usuário

Em cenários onde a personalização é crucial, como em aplicações de varejo ou
entretenimento, a edge computing permite a entrega de conteúdos e serviços
adaptados às preferências do usuário em tempo real. Ao processar dados de
interação localmente, as empresas podem fornecer uma experiência mais ágil e
relevante para seus clientes.
