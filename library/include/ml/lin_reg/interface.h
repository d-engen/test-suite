/**
 * @brief Linear regression interface.
 */
#pragma once

namespace ml
{
namespace lin_reg
{
/**
 * @brief Linear regression interface.
 */
class Interface
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~Interface() noexcept = default;

    /**
     * @brief Check whether the model is trained.
     * 
     * @return True if the model is trained, false otherwise.
     */
    virtual bool isTrained() const noexcept = 0;

    /**
     * @brief Predict based on given input.
     * 
     * @param[in] input Input for which to predict.
     * 
     * @return The predicted value.
     */
    virtual double predict(double input) const noexcept = 0;
};
} // namespace lin_reg
} // namespace ml