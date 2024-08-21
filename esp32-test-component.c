#include "esp_log.h"
#include "esp32-test-component.h"

static const char* TAG = "esp32-test-component";

void hello_world(void)
{
  ESP_LOGI(TAG, "Hello from the test component!");
}
