#include "fileUtils.hpp"
#include <fstream>
#include <sstream>

bool readFile(const std::string& filename, std::string& content)
{
    // Apriamo il file in lettura
    std::ifstream input(filename.c_str());

    // Verifichiamo che sia stato aperto correttamente
    if (!input.is_open())
        return false;

    // Creiamo uno stream che accumula dati in una stringa
    std::ostringstream buffer;

    // Trasferiamo tutto il contenuto del file nel buffer
    buffer << input.rdbuf();

    // Recuperiamo il contenuto sotto forma di std::string
    content = buffer.str();

    // Chiudiamo il file
    input.close();

    return true;
}

bool writeFile(const std::string& filename, const std::string& content)
{
    std::ofstream output(filename.c_str());

    if (!output.is_open())
        return false;

    output << content;

    output.close();
    return true;
}
