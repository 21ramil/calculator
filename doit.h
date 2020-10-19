#ifndef DOIT_H
#define DOIT_H

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * \brief Функция вычисления выражения
 * \param [in] TypeWork - Индекс типа операции (0:+, 1:-, 2:/, 3:*)
 * \param [in] OperandA - Первый операнд
 * \param [in] OperandB - Второй операнд
 * \param [out] ErrorCode - Код ошибки.
 *              0 - успех, иначе ошибка
 *              1 - неподдерживаемая операция
 *              2 - деление на нуль
 *              3 - неопределенная ошибка
 * \return результат вычисления. при наличии ошибок возвращает std::numeric_limits<double>::quiet_NaN()
 */
double __declspec(dllexport) DoIt (int TypeWork, double OperandA, double OperandB, int& ErrorCode);

#ifdef __cplusplus
}
#endif

#endif // DOIT_H
