#include "lib/ConfigurationManeger.h"
void config(){
    ConfigurationManeger j;

    Configuration config = j.readConfigFromFile("config.json");

    std::cout << "Current Configuration:" << std::endl;
    std::cout << "Camera Threshold: " << config.cameraThreshold << std::endl;
    std::cout << "Backend Queue Size: " << config.backendQueueSize << std::endl;
    std::cout << "Camera IP: " << config.cameraIP << " Port: " << config.cameraPort << std::endl;
    std::cout << "Backend IP: " << config.backendIP << " Port: " << config.backendPort << std::endl;

    j.editConfig(config);

    if (j.saveConfigToFile("config.json", config)) {
        std::cout << "Configuration saved to 'config.json'" << std::endl;
    }
    else {
        std::cerr << "Unable to save configuration to file" << std::endl;
    }
}
int main() {
    config();
    return 0;
}






