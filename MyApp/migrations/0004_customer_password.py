# Generated by Django 2.1.5 on 2019-03-02 10:00

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('MyApp', '0003_remove_customer_user'),
    ]

    operations = [
        migrations.AddField(
            model_name='customer',
            name='password',
            field=models.CharField(default='', max_length=30),
        ),
    ]
