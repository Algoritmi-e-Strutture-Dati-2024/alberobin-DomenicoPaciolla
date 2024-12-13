int main() {
    AlberoBinario <int> albero;

    albero.insRadice(27);
    
    std::cout << "Radice: " << albero.radice() << std::endl;

    albero.insFiglioSinistro(11, 8);
    
    albero.insFiglioDestro(4, 23);

    albero.stampa();

    albero.rimuovi(64); 
    
    std::cout << "Albero con foglia rimossa:" << std::endl;
    
    albero.stampa();

    return 0;
}
