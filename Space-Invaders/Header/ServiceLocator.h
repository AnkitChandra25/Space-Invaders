#pragma once
#ifndef SERVICELOCATOR_H
#define SERVICELOCATOR_H

class ServiceLocator {
public:
    static ServiceLocator* getInstance();
    void initialize();
    void update();
    void render();

private:
    ServiceLocator();
    ~ServiceLocator();
    void createServices();
    void clearAllServices();

    static ServiceLocator* instance;
};

#endif // SERVICELOCATOR_H
