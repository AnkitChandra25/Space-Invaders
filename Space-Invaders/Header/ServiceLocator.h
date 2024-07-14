#pragma once
#include "../Header/GraphicService.h"
#include "../Header/EventService.h"
#include "../Header/PlayerService.h"
#include "../Header/TimeService.h"

#ifndef SERVICELOCATOR_H
#define SERVICELOCATOR_H

class ServiceLocator {
public:
    static ServiceLocator* getInstance();
    void initialize();
    void update();
    void render();
    
    GraphicService* getGraphicService();
    EventService* getEventService();
    PlayerService* getPlayerService();
    TimeService* getTimeService();

private:
    GraphicService* graphic_service;
    EventService* event_service;
    PlayerService* player_service;
    TimeService* time_service;

    ServiceLocator();
    ~ServiceLocator();
    void createServices();
    void clearAllServices();

    static ServiceLocator* instance;
};

#endif // SERVICELOCATOR_H
