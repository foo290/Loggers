//
// Created by linuxpanda on 17/06/21.
//

#include "Logger.h"

int main(){
    Logger logger = Logger();

    logger.info("This is msg.");
    logger.debug("This is msg.");
    logger.warning("This is msg.");
    logger.error("This is msg.");
    logger.critical("This is msg.");
}

