#ifdef CONFIG_OF
#include <linux/of.h>
#include <linux/of_gpio.h>
#endif

static int firefly_led_probe(struct platform_device *pdev)
{
	int ret = -1;
	int gpio,flag;

	struct device_node *led_node = pdev->dev.of_node;

	gpio = of_get_named_gpio_flags()
}
