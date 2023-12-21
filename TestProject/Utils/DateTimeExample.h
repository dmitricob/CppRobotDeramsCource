#pragma once

int getDay(const std::tm* tmObj);

int getMonth(const std::tm* tmObj);

int getYear(const std::tm* tmObj);

unsigned int getTotalDays(const std::time_t* time);
