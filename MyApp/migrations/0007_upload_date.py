# Generated by Django 2.1.5 on 2019-03-07 16:12

import datetime
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('MyApp', '0006_auto_20190307_2107'),
    ]

    operations = [
        migrations.AddField(
            model_name='upload',
            name='date',
            field=models.DateField(default=datetime.datetime(2019, 3, 7, 21, 42, 23, 839239)),
        ),
    ]
