#pragma once
#include "main.h"
#include "../utils/emaFilter.hpp"
#include "../utils/miscUtils.hpp"

class velPID {
private:
  double m_Kp = 0;
  double m_Kd = 0;
  double m_Kf = 0;

  double m_Error = 0;
  double m_lastError = 0;
  double m_derivative = 0;

  emaFilter m_dFilter;

public:
  velPID(double, double, double, double);
  double calculate(double, double);
  void setGains(double, double, double, double);
  double getError();
};