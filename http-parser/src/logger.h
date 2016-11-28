//
// Created by s.fionov on 25.11.16.
//

#ifndef HTTP_PARSER_LOGGER_H
#define HTTP_PARSER_LOGGER_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum {
    LOG_LEVEL_ERROR = 0,
    LOG_LEVEL_WARN = 1,
    LOG_LEVEL_INFO = 2,
    LOG_LEVEL_DEBUG = 3,
    LOG_LEVEL_TRACE = 4
} logger_log_level_t;

typedef void (*logger_callback_t)(int log_level, const char *message);

extern void logger_init(const char *filename, logger_callback_t callback);
extern void logger_log(logger_log_level_t log_level, const char *message);

#ifdef __cplusplus
};
#endif /* __cplusplus */

#endif /* HTTP_PARSER_LOGGER_H */
