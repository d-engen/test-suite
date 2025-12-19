/**
 * @brief Fixed linear regression implementation.
 */
#pragma once

#include "ml/lin_reg/interface.h"
#include "ml/types.h"

namespace ml
{
namespace lin_reg
{
/**
 * @brief Linear regression implementation.
 * 
 *        This class is non-copyable and non-movable.
 */
class Fixed final : public Interface
{
public:
    /**
     * @brief Constructor.
     */
    Fixed() noexcept;

    /**
     * @brief Destructor.
     */
    ~Fixed() noexcept override = default;

    /**
     * @brief Check whether the model is trained.
     * 
     * @return True if the model is trained, false otherwise.
     */
    bool isTrained() const noexcept override;

    /**
     * @brief Predict based on given input.
     * 
     * @param[in] input Input for which to predict.
     * 
     * @return The predicted value.
     */
    double predict(double input) const noexcept override;

    /**
     * @brief Train the model.
     * 
     * @param[in] trainIn Training data input values.
     * @param[in] trainOut Training data output values.
     * @param[in] epochCount Number of epochs to perform training. Must be greater than 0.
     * @param[in] learningRate Learning rate to use for updating the parameters (default = 1 %).
     *                         Must be greater than 0.
     * 
     * @return True on success, false on failure.
     */
    bool train(const Matrix1d& trainIn, const Matrix2d& trainOut, size_t epochCount, 
               double learningRate = 0.01) noexcept;

    Fixed(const Fixed&)            = delete; // No copy constructor.
    Fixed(Fixed&&)                 = delete; // No move constructor.
    Fixed& operator=(const Fixed&) = delete; // No copy assignment.
    Fixed& operator=(Fixed&&)      = delete; // No move assignment.

private:
    void optimize(double input, double output, double learningRate) noexcept;

    /** Model weight (k-value). */
    double myWeight;

    /** Model bias (m-value.) */
    double myBias;

    /** Indicate whether the model is trained. */
    bool myTrained;
};
} // namespace lin_reg
} // namespace ml