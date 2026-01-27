/**
 * @brief Timer interface.
 */
#pragma once

#include <stdint.h>

namespace driver
{
namespace timer
{
/**
 * @brief Timer interface.
 */
class Stub final: public Interface
{
public:
    

    /**
     * @brief Destructor.
     */
    ~Stub() noexcept = default;

    /**
     * @brief Check if the timer is initialized.
     * 
     *        An uninitialized timer indicates that no timer circuit was available when the timer 
     *        was created.
     * 
     * @return True if the timer is initialized, false otherwise.
     */
    bool isInitialized() const noexcept override;

    /**
     * @brief Check whether the timer is enabled.
     *
     * @return True if the timer is enabled, false otherwise.
     */
    bool isEnabled() const noexcept override;

    /**
     * @brief Check whether the timer has timed out.
     *
     * @return True if the timer has timed out, false otherwise.
     */
    bool hasTimedOut() const noexcept override;

    /**
     * @brief Get the timeout of the timer.
     * 
     * @return The timeout in milliseconds.
     */
    uint32_t timeout_ms() const noexcept override;

    /**
     * @brief Set timeout of the timer.
     * 
     * @param[in] timeout_ms The new timeout in milliseconds.
     */
    void setTimeout_ms(uint32_t timeout_ms) noexcept override;

    /**
     * @brief Start the timer.
     */
    void start() noexcept override;

    /**
     * @brief Stop the timer.
     */
    void stop() noexcept override;

    /**
     * @brief Toggle the timer.
     */
    void toggle() noexcept override;

    /**
     * @brief Restart the timer.
     */
    void restart() noexcept override;
};
} // namespace timer
} // namespace driver
