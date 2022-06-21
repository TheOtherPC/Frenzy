//
// Created by Pranav on 6/19/22.
//
#pragma once
#ifndef FRENZY_LOG_H
#define FRENZY_LOG_H

#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Frenzy {
    class Log {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;}
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;}

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

//Core Log Macros
#define FZ_CORE_TRACE(...) ::Frenzy::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FZ_CORE_INFO(...)  ::Frenzy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FZ_CORE_WARN(...)  ::Frenzy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FZ_CORE_ERROR(...) ::Frenzy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FZ_CORE_FATAL(...) ::Frenzy::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Client Log Macros
#define FZ_TRACE(...) ::Frenzy::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FZ_INFO(...)  ::Frenzy::Log::GetClientLogger()->info(__VA_ARGS__)
#define FZ_WARN(...)  ::Frenzy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FZ_ERROR(...) ::Frenzy::Log::GetClientLogger()->error(__VA_ARGS__)
#define FZ_FATAL(...) ::Frenzy::Log::GetClientLogger()->fatal(__VA_ARGS__)

#endif //FRENZY_LOG_H
